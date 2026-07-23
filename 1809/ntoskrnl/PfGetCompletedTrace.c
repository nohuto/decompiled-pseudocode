/*
 * XREFs of PfGetCompletedTrace @ 0x14064C7F4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PfTFreeTraceDump @ 0x1400D8A60 (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x1400E27A8 (PfFbBufferListFlushStandby.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PfTAccessTracingStart @ 0x140566FF4 (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
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
    ExAcquireFastMutex(&Mutex);
    if ( !dword_14043CE28 )
      break;
    dword_14043CE28 = 0;
    KeReleaseGuardedMutex(&Mutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_14043CCE0);
  }
  v7 = dword_14043CE18 < (unsigned int)dword_14043CE1C;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_14043CE20;
    if ( v8 )
      v9 = &dword_14043CE18;
    v10 = &unk_14043CE08;
    if ( v8 )
      v10 = &unk_14043CDF8;
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
  if ( !v7 && dword_14043CE18 < (unsigned int)dword_14043CE1C )
  {
    PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 2);
    KeSetEvent(&Event, 0, 0);
  }
  KeReleaseGuardedMutex(&Mutex);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *a1 = 0LL;
    a1[1] = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_14043D268) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_14043D268)) << 8);
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
    KeReleaseGuardedMutex(&Mutex);
  return v13;
}
