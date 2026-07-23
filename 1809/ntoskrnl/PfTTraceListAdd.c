/*
 * XREFs of PfTTraceListAdd @ 0x14064CA80
 * Callers:
 *     PfTGenerateTrace @ 0x140684C30 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1406BFEC0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x14064CCC0 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x140866678 (PfTTraceListTrim.c)
 */

__int64 __fastcall PfTTraceListAdd(unsigned int *a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  int *v4; // rcx
  _QWORD *v5; // rbx
  void **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&Mutex);
  v2 = (unsigned int)dword_14043CE1C;
  v3 = dword_14043CE18 < (unsigned int)dword_14043CE1C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_14043CE08;
    v2 = (unsigned int)dword_14043CE24;
    v4 = &dword_14043CE20;
    if ( dword_14043CE20 + 1 == dword_14043CE24 )
      ++HIDWORD(xmmword_14043CF10);
  }
  else
  {
    v4 = &dword_14043CE18;
    v5 = &unk_14043CDF8;
    if ( dword_14043CE18 + 1 == dword_14043CE1C )
      ++DWORD2(xmmword_14043CF10);
    dword_14043CE28 = 1;
  }
  v6 = (void **)v5[1];
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)a1 = v5;
  *((_QWORD *)a1 + 1) = v6;
  *v6 = a1;
  v5[1] = a1;
  if ( ++*v4 > (unsigned int)v2 )
    PfTTraceListTrim(a1[7], v2, v8);
  if ( v5 == (_QWORD *)&unk_14043CDF8 && (_QWORD *)*v5 == v5 )
    dword_14043CE28 = 0;
  if ( v3 && dword_14043CE18 >= (unsigned int)dword_14043CE1C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_14043CE68, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
