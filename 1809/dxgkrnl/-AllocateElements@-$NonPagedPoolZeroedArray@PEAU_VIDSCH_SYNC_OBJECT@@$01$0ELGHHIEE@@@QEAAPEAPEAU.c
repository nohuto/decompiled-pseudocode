/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C003C2E4
 * Callers:
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 2 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[6] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 8 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
