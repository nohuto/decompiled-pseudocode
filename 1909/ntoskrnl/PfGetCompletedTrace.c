/*
 * XREFs of PfGetCompletedTrace @ 0x14066AF34
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PfTFreeTraceDump @ 0x1400D45F4 (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x1400D499C (PfFbBufferListFlushStandby.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PfTAccessTracingStart @ 0x14059E334 (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  BOOL v7; // edx
  int v8; // eax
  int *v9; // r12
  _QWORD *v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&FastMutex);
    if ( !dword_140467528 )
      break;
    dword_140467528 = 0;
    KeReleaseGuardedMutex(&FastMutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_1404673E0);
  }
  v7 = dword_140467518 < (unsigned int)dword_14046751C;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_140467520;
    if ( v8 )
      v9 = &dword_140467518;
    v10 = &unk_140467508;
    if ( v8 )
      v10 = &unk_1404674F8;
    v11 = (_DWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_15;
  }
  v4 = (_DWORD *)*v10;
  v5 = v11[6] + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v13 = -1073741789;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)v11;
  if ( *((_QWORD **)v11 + 1) != v10 || *(_DWORD **)(v12 + 8) != v11 )
    __fastfail(3u);
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  --*v9;
LABEL_15:
  if ( !v7 && dword_140467518 < (unsigned int)dword_14046751C )
  {
    PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 2);
    KeSetEvent(&Event, 0, 0);
  }
  KeReleaseGuardedMutex(&FastMutex);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *a1 = 0LL;
    a1[1] = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_140467968) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_140467968)) << 8);
    memmove(a1 + 2, v4 + 4, (unsigned int)v4[6]);
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v13 = 0;
  }
  else
  {
    v13 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v13;
}
