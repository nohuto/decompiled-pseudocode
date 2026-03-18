/*
 * XREFs of GetInterruptMessageInformation @ 0x1C0008D70
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     FreeMsiInfo @ 0x1C0008C3C (FreeMsiInfo.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  unsigned __int16 v2; // si
  __int64 v3; // rbx
  unsigned __int16 v4; // bp
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = 0;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  FreeMsiInfo(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 2) > 1 )
    goto LABEL_12;
  v4 = 0;
  if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL) )
    goto LABEL_11;
  do
  {
    if ( v4 )
    {
      if ( v3 == v9[1] && *(_DWORD *)(a1 + 12) != 3 )
        *(_DWORD *)(a1 + 12) = 2;
    }
    else
    {
      v3 = v9[1];
    }
    ++v4;
  }
  while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v4) );
  if ( !v4 )
  {
LABEL_11:
    *(_DWORD *)(a1 + 12) = 1;
LABEL_12:
    v4 = 1;
  }
  v5 = (_QWORD *)(a1 + 248);
  *(_WORD *)(a1 + 240) = v4;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v4);
  if ( *(_QWORD *)(a1 + 248) )
  {
    NVMeZeroMemory(*(void **)(a1 + 248), 24 * *(unsigned __int16 *)(a1 + 240));
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 240));
    if ( *(_QWORD *)(a1 + 256) )
    {
      NVMeZeroMemory(*(void **)(a1 + 256), 16 * *(unsigned __int16 *)(a1 + 240));
      while ( v2 < *(_WORD *)(a1 + 240) )
      {
        v6 = 3LL * v2;
        *(_DWORD *)(*v5 + 8 * v6) = v2;
        v7 = *(_QWORD *)(a1 + 256) + 16LL * v2++;
        *(_QWORD *)(*v5 + 8 * v6 + 8) = v7;
      }
      return 1;
    }
  }
  FreeMsiInfo(a1);
  return 0;
}
