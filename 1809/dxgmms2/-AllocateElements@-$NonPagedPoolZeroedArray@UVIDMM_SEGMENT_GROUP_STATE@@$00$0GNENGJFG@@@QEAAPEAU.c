/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@I@Z @ 0x1C00189B8
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0018744 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1833789782>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x148 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 328LL * a2, 0x6D4D6956u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[84] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 328 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
