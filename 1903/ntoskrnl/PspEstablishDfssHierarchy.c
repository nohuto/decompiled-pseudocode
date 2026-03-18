/*
 * XREFs of PspEstablishDfssHierarchy @ 0x1408C7A50
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140695344 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveSchedulingGroup @ 0x1400E79BC (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x1400E7B90 (KeInsertSchedulingGroup.c)
 *     MmGetSessionObjectByProcess @ 0x1402CAA74 (MmGetSessionObjectByProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x140692180 (MmGetSessionSchedulingGroupByProcess.c)
 */

LONG_PTR __fastcall PspEstablishDfssHierarchy(__int64 a1, __int64 a2, int a3)
{
  LONG_PTR result; // rax
  __int64 SessionSchedulingGroupByProcess; // rdi
  __int64 v6; // rcx
  int v7; // r8d
  void *v8; // rsi
  void *v9; // rcx

  result = (unsigned int)(a3 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(a2);
    result = MmGetSessionObjectByProcess(v6);
    v8 = (void *)result;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 1008LL) || *(_QWORD *)(a1 + 1016) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1080);
        if ( result == a1 && *(_QWORD *)(a1 + 1008) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1112) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1016));
          KeInsertSchedulingGroup(
            *(_QWORD *)(a1 + 1008) + 128LL,
            *(_QWORD *)(*(_QWORD *)(a1 + 1008) + 128LL),
            SessionSchedulingGroupByProcess);
          v9 = *(void **)(a1 + 1112);
          if ( v9 )
            ObfDereferenceObjectWithTag(v9, 0x624A7350u);
          *(_QWORD *)(a1 + 1112) = v8;
          return ObfReferenceObjectWithTag(v8, 0x624A7350u);
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 1016LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 1016LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1080);
        *(_QWORD *)(result + 1112) = v8;
      }
      *(_QWORD *)(a1 + 1016) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}
