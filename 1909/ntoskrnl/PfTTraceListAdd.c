/*
 * XREFs of PfTTraceListAdd @ 0x14066B1C0
 * Callers:
 *     PfTGenerateTrace @ 0x14066D010 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x14066E6F0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PfTAccessTracingCleanup @ 0x14059E1E4 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x14066B5C4 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408A115C (PfTTraceListTrim.c)
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
  ExAcquireFastMutex(&FastMutex);
  v2 = (unsigned int)dword_14046751C;
  v3 = dword_140467518 < (unsigned int)dword_14046751C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140467508;
    v2 = (unsigned int)dword_140467524;
    v4 = &dword_140467520;
    if ( dword_140467520 + 1 == dword_140467524 )
      ++HIDWORD(xmmword_140467610);
  }
  else
  {
    v4 = &dword_140467518;
    v5 = &unk_1404674F8;
    if ( dword_140467518 + 1 == dword_14046751C )
      ++DWORD2(xmmword_140467610);
    dword_140467528 = 1;
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
  if ( v5 == (_QWORD *)&unk_1404674F8 && (_QWORD *)*v5 == v5 )
    dword_140467528 = 0;
  if ( v3 && dword_140467518 >= (unsigned int)dword_14046751C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_140467568, 0, 0);
  KeReleaseGuardedMutex(&FastMutex);
  return PfTTraceListFree(v8);
}
