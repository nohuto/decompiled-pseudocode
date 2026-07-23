/*
 * XREFs of RtlTraceDatabaseCreate @ 0x1800FC050
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800FC400 (RtlpTraceDatabaseAllocate.c)
 */

__int64 __fastcall RtlTraceDatabaseCreate(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 (__fastcall *a5)(unsigned int a1, __int64 a2))
{
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  void *v12; // rcx
  __int64 (__fastcall *v13)(unsigned int, __int64); // rax
  size_t v14; // r8
  __int64 result; // rax

  if ( a1 > 0x100000 )
    return 0LL;
  v9 = RtlpTraceDatabaseAllocate((8LL * a1 + 65784) & 0xFFFFFFFFFFFF0000uLL);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  v11 = v9 + 192;
  *(_QWORD *)(v9 + 120) = 0LL;
  *(_QWORD *)(v9 + 112) = 0LL;
  *(_DWORD *)(v9 + 4) = a3 | 1;
  *(_DWORD *)v9 = -1412576052;
  *(_DWORD *)(v9 + 8) = a4;
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = 0x10000LL;
  memset((void *)(v9 + 128), 0, 0x40uLL);
  RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(v10 + 48), 0, 0);
  v12 = (void *)(v11 + 56);
  *(_DWORD *)(v10 + 88) = a1;
  v13 = RtlStackTraceHashFunction;
  if ( a5 )
    v13 = a5;
  *(_QWORD *)(v10 + 104) = v13;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_DWORD *)v11 = -1412580421;
  *(_QWORD *)(v11 + 8) = v10;
  *(_QWORD *)(v11 + 24) = 0x10000LL;
  v14 = 8LL * *(unsigned int *)(v10 + 88);
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 96) = v12;
  memset(v12, 0, v14);
  *(_QWORD *)(v11 + 32) = v10;
  *(_QWORD *)(v11 + 40) = v10 + 0x10000;
  result = v10;
  *(_QWORD *)(v11 + 48) = v11 + 8 * (*(unsigned int *)(v10 + 88) + 7LL);
  return result;
}
