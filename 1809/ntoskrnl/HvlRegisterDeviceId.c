/*
 * XREFs of HvlRegisterDeviceId @ 0x1402750A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRegisterDeviceId(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  PHYSICAL_ADDRESS v15[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
      return 3221225659LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) );
    v5 = (v6 + 8) & 0xFFFFFFF8;
  }
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL || (unsigned __int64)v5 + 40 > 0x1000 )
    return 3221225485LL;
  v7 = HvlpAcquireHypercallPage(v15, 1, 0LL, 0LL);
  memset(v7, 0, v5 + 40LL);
  v8 = v7[1];
  *v7 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7[1] = v8 & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    *((_WORD *)v7 + 4) = *(_WORD *)(a1 + 12);
    *((_WORD *)v7 + 5) = *(_WORD *)(a1 + 8);
  }
  else
  {
    v7[1] = v8 | 0xC000000000000000uLL;
    v9 = *(_BYTE **)(a1 + 8);
    do
      ++v2;
    while ( v9[v2] );
    memmove(v7 + 5, v9, v2 + 1);
  }
  *((_DWORD *)v7 + 4) |= 1u;
  v7[3] = a2;
  do
  {
    v10 = HvcallCodeVa();
    if ( !HvlpHvStatusIsInsufficientMemory(v10) )
    {
      v13 = HvlpHvToNtStatus((unsigned __int16)v11);
      goto LABEL_18;
    }
  }
  while ( (int)HvlpHandleInsufficientMemory(v11, v11, v12) >= 0 );
  v13 = -1073741670;
LABEL_18:
  HvlpReleaseHypercallPage((unsigned int *)v15);
  return v13;
}
