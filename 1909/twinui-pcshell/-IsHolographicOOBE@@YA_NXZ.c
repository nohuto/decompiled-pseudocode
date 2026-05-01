/*
 * XREFs of ?IsHolographicOOBE@@YA_NXZ @ 0x18032F9E4
 * Callers:
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18032F860 (-IsAnyOOBE@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char IsHolographicOOBE(void)
{
  char v0; // bl
  int v1; // edi
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  bool v4; // zf
  unsigned int pvData; // [rsp+60h] [rbp+20h] BYREF
  int v7; // [rsp+68h] [rbp+28h] BYREF
  DWORD pdwType; // [rsp+70h] [rbp+30h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF

  v0 = 0;
  v7 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  if ( v7 != 10 )
    return v0;
  pdwType = 0;
  pcbData = 4;
  v1 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
             L"Completed",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  LOWORD(v3) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v3 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( pdwType != 4 )
  {
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v4 = (_WORD)pvData == 49;
      goto LABEL_5;
    }
LABEL_12:
    v3 = (unsigned __int16)v3 | 0x80070000;
    goto LABEL_13;
  }
  v4 = pvData == 1;
  if ( pvData > 1 )
    goto LABEL_12;
LABEL_5:
  v3 = 0;
  LOBYTE(v1) = v4;
LABEL_13:
  if ( v3 < 0 || !v1 )
    return 1;
  return v0;
}
