/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0DFGBGJFG@@@QEAAPEAU_VIDSCH_CONTEXT_ID_PAIR@@I@Z @ 0x1C0014064
 * Callers:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C000308C (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<_VIDSCH_CONTEXT_ID_PAIR,2,895576406>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x10 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 16LL * a2, 0x35616956u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[10] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 16 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
