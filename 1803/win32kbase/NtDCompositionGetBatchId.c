/*
 * XREFs of NtDCompositionGetBatchId @ 0x1C0014CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014B84 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetBatchId@CApplicationChannel@DirectComposition@@QEAAKW4DCOMPOSITIONBATCHSELECTOR@@@Z @ 0x1C00155F8 (-GetBatchId@CApplicationChannel@DirectComposition@@QEAAKW4DCOMPOSITIONBATCHSELECTOR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetBatchId(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v5; // rdx
  int v6; // ebx
  int BatchId; // esi
  void (__fastcall ***v8)(_QWORD); // rcx
  struct DirectComposition::CApplicationChannel *v10; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0LL;
  if ( a3 )
  {
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10);
    if ( v6 >= 0 )
    {
      BatchId = DirectComposition::CApplicationChannel::GetBatchId(v10, a2);
      (**v8)(v8);
      *a3 = BatchId;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
