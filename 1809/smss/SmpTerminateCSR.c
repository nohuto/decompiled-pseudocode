/*
 * XREFs of SmpTerminateCSR @ 0x14000105C
 * Callers:
 *     SmpStopCsr @ 0x140001020 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x1400048D8 (SmpDestroyControlBlock.c)
 * Callees:
 *     SmpSetCoreProcessIds @ 0x140002A94 (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002B78 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpUnlockKnownSubSysList @ 0x140004318 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x14000462C (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x14000478C (SmpDereferenceKnownSubSys.c)
 */

__int64 __fastcall SmpTerminateCSR(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 *v4; // r10
  __int64 v5; // rax
  HANDLE *v6; // rbx
  NTSTATUS v7; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF

  v9[1] = v9;
  v1 = a1;
  v9[0] = v9;
  SmpWaitForSubSysStartup(a1, 0LL, v9, v10);
  SmpUnlockKnownSubSysList(v10);
  if ( (_QWORD *)v9[0] != v9 )
  {
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v1) != -1 )
    {
      LOBYTE(v3) = 1;
      v10[0] = 0LL;
      v10[1] = 0LL;
      SmpSetCoreProcessIds(v2, v10, v3);
      v4 = (__int64 *)v9[0];
    }
    do
    {
      if ( (_QWORD *)v4[1] != v9 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
        __fastfail(3u);
      v9[0] = *v4;
      v6 = (HANDLE *)(v4 - 9);
      *(_QWORD *)(v5 + 8) = v9;
      v7 = NtTerminateProcess((HANDLE)*(v4 - 5), 0);
      if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741558 )
        NtWaitForSingleObject(v6[4], 0, 0LL);
      SmpDereferenceKnownSubSys(v6);
      v4 = (__int64 *)v9[0];
    }
    while ( (_QWORD *)v9[0] != v9 );
  }
  return 0LL;
}
