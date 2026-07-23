/*
 * XREFs of sub_1800F20B8 @ 0x1800F20B8
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_1800F2088 @ 0x1800F2088 (sub_1800F2088.c)
 */

bool __fastcall sub_1800F20B8(char *BaseOfImage, ULONG64 Size, int a3)
{
  NTSTATUS v6; // eax
  unsigned __int16 v7; // r10
  char *v8; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  int v13; // r11d
  char *v14; // [rsp+48h] [rbp+20h] BYREF

  v6 = RtlImageNtHeaderEx(0, BaseOfImage, Size, (PIMAGE_NT_HEADERS *)&v14);
  v7 = 0;
  if ( v6 < 0 )
  {
    v13 = a3;
  }
  else
  {
    v8 = v14;
    if ( !*((_DWORD *)v14 + 22) )
      return 1;
    v10 = sub_1800F2088(0, (unsigned __int16 *)BaseOfImage, (unsigned __int64)(v14 - BaseOfImage + 88) >> 1);
    v12 = sub_1800F2088(v10, (unsigned __int16 *)v8 + 46, (Size - v11 - 4) >> 1);
    v7 = v12;
    if ( (Size & 1) != 0 )
      v7 = v12
         + (unsigned __int8)BaseOfImage[Size - 1]
         + ((v12 + (unsigned int)(unsigned __int8)BaseOfImage[Size - 1]) >> 16);
  }
  return a3 + v7 == v13;
}
