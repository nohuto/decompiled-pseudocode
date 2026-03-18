/*
 * XREFs of ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A2E4
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0039D70 (DxgkDeviceIoctl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022EF40 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C025DA00 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C004F214 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGVIRTUALMACHINE::ReferenceVailObject(struct _KTHREAD **this)
{
  __int64 v2; // rax
  DxgkCompositionObject *v3; // rcx
  struct DXGVAILOBJECT *result; // rax

  if ( this[9] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 5460LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = this[30];
  result = 0LL;
  if ( v3 )
  {
    DxgkCompositionObject::AddRef(v3);
    return this[30];
  }
  return result;
}
