/*
 * XREFs of PfTTraceListAdd @ 0x1406581A0
 * Callers:
 *     PfTGenerateTrace @ 0x14069BEB8 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1406E0C30 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PfTAccessTracingCleanup @ 0x14059E204 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1406585A4 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408A191C (PfTTraceListTrim.c)
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
  v2 = (unsigned int)dword_14046781C;
  v3 = dword_140467818 < (unsigned int)dword_14046781C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140467808;
    v2 = (unsigned int)dword_140467824;
    v4 = &dword_140467820;
    if ( dword_140467820 + 1 == dword_140467824 )
      ++HIDWORD(xmmword_140467910);
  }
  else
  {
    v4 = &dword_140467818;
    v5 = &unk_1404677F8;
    if ( dword_140467818 + 1 == dword_14046781C )
      ++DWORD2(xmmword_140467910);
    dword_140467828 = 1;
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
  if ( v5 == (_QWORD *)&unk_1404677F8 && (_QWORD *)*v5 == v5 )
    dword_140467828 = 0;
  if ( v3 && dword_140467818 >= (unsigned int)dword_14046781C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_140467868, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
