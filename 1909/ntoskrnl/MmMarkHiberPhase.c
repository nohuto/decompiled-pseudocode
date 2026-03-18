/*
 * XREFs of MmMarkHiberPhase @ 0x1405AC2F8
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14008E268 (MiIsRetpolineEnabled.c)
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGatherHiberRange @ 0x1405ABF50 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPages @ 0x1405ABF9C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1405AC0EC (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1405AC190 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 MmMarkHiberPhase()
{
  __int64 v0; // rsi
  void *DeepFreezeStartTime; // r8
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  void *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD v13[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  MiMarkKernelPageTablePages();
  v13[1] = 0LL;
  v13[0] = MiGatherHiberRange;
  v0 = 2LL;
  MiGatherHiberRange((__int64)v13, (void *)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1LL, 2);
  MiMarkNonPagedHiberPhasePages(0xFFFFFA8000000000uLL, 48 * qword_14046A088 - 0x57FFFFFFFD1LL, 512);
  PoSetHiberRange(0LL, 0x14000u, qword_1404665A8, 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0x880uLL, 0x62706D4Du);
  DeepFreezeStartTime = (void *)KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
  if ( DeepFreezeStartTime )
    PoSetHiberRange(0LL, 0x10000u, DeepFreezeStartTime, 0x1000uLL, 0x62706D4Du);
  if ( MiIsRetpolineEnabled() )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      qword_140464560,
      8 * (((unsigned __int64)qword_140464558 >> 6) + ((qword_140464558 & 0x3F) != 0)),
      0x62706D4Du);
    PoSetHiberRange(0LL, 0x10000u, qword_140464568, (unsigned int)(dword_140464588 << 12), 0x62706D4Du);
  }
  MiMarkNonPagedHiberPhasePages(qword_140465AC0, qword_140465AC0 + qword_140465AC8 - 1, 0);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v2 = 0LL;
  v3 = 50LL;
  do
  {
    v4 = *(void **)((char *)MmUnloadedDrivers + v2 + 8);
    if ( v4 )
      PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v2), 0x64736D4Du);
    v2 += 40LL;
    --v3;
  }
  while ( v3 );
  v5 = &qword_140466490;
  do
  {
    v6 = (_QWORD *)*v5;
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      v8 = (_QWORD **)i[1];
      v9 = i;
      v10 = i;
      if ( v8 )
      {
        v11 = *v8;
        for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
          i = v11;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v10 )
            break;
          v10 = i;
        }
      }
      PoSetHiberRange(0LL, 0x10000u, v9, 0x440uLL, 0x6F496D4Du);
    }
    ++v5;
    --v0;
  }
  while ( v0 );
  return MiMarkHiberNotCachedPages();
}
