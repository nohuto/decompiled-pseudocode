/*
 * XREFs of TopologyPUChorus @ 0x1C0024750
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x1C0027C0C (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPUChorus(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  NTSTATUS ProcessControlRange; // ebx
  PVOID PoolWithTag; // rax
  void *v8; // rdi
  __int64 v9; // r15

  *(_DWORD *)(a3 + 76) = 20;
  v3 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_CHORUS;
  ProcessControlRange = -1073741670;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_CHORUS;
  if ( (*(_DWORD *)(a2 + 76) & 0xE) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x50uLL, 0x41627845u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = (__int64)PoolWithTag + 20;
      ProcessControlRange = 0;
      if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
      {
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 2, 1, 655, v9);
        if ( ProcessControlRange < 0 )
          goto LABEL_12;
      }
      if ( (*(_DWORD *)(a2 + 76) & 4) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 3, 2, 256, v9 + 20);
      if ( ProcessControlRange < 0 )
        goto LABEL_12;
      if ( (*(_DWORD *)(a2 + 76) & 8) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 4, 2, 1, v9 + 40);
      if ( ProcessControlRange < 0
        || (ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v8, ExFreePool),
            ProcessControlRange < 0) )
      {
LABEL_12:
        ExFreePool(v8);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessControlRange;
}
