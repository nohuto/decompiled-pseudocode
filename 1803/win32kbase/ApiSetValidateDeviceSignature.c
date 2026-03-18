/*
 * XREFs of ApiSetValidateDeviceSignature @ 0x1C0141D50
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetValidateDeviceSignature(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7)
{
  __int64 v11; // xmm0_8
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp-10h]

  if ( (int)IsValidateDeviceSignatureSupported() < 0 )
    return 3221225659LL;
  v11 = *a6;
  v14 = *((_DWORD *)a6 + 2);
  v13 = v11;
  return ValidateDeviceSignature(a1, a2, a3, a4, a5, &v13, a7);
}
