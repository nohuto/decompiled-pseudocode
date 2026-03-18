/*
 * XREFs of GetInterruptMessageInformation @ 0x1C000BABC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     FreeMsiInfo @ 0x1C000B988 (FreeMsiInfo.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned __int16 v6; // si
  unsigned __int16 v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  v5 = 0LL;
  v6 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  FreeMsiInfo(a1, v2, v3, v4);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 2) > 1 )
    goto LABEL_12;
  v7 = 0;
  if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v15) )
    goto LABEL_11;
  do
  {
    if ( v7 )
    {
      if ( v5 == v15[1] && *(_DWORD *)(a1 + 12) != 3 )
        *(_DWORD *)(a1 + 12) = 2;
    }
    else
    {
      v5 = v15[1];
    }
    ++v7;
  }
  while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v7, v15) );
  if ( !v7 )
  {
LABEL_11:
    *(_DWORD *)(a1 + 12) = 1;
LABEL_12:
    v7 = 1;
  }
  v8 = (_QWORD *)(a1 + 240);
  *(_WORD *)(a1 + 232) = v7;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v7, 1701672526LL);
  if ( *(_QWORD *)(a1 + 240) )
  {
    NVMeZeroMemory(*(void **)(a1 + 240), 24 * *(unsigned __int16 *)(a1 + 232));
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 232), 1701672526LL);
    if ( *(_QWORD *)(a1 + 248) )
    {
      NVMeZeroMemory(*(void **)(a1 + 248), 16 * *(unsigned __int16 *)(a1 + 232));
      while ( v6 < *(_WORD *)(a1 + 232) )
      {
        v12 = 3LL * v6;
        *(_DWORD *)(*v8 + 8 * v12) = v6;
        v13 = *(_QWORD *)(a1 + 248) + 16LL * v6++;
        *(_QWORD *)(*v8 + 8 * v12 + 8) = v13;
      }
      return 1;
    }
  }
  FreeMsiInfo(a1, v9, v10, v11);
  return 0;
}
