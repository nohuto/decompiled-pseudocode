/*
 * XREFs of ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025F1E0
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040170 (DxgkDeviceIoctl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00FA5F0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263BE0 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0293F90 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C00563A8 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGVIRTUALMACHINE::ReferenceVailObject(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  DxgkCompositionObject *v4; // rcx
  struct DXGVAILOBJECT *result; // rax

  if ( this[9] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 5489LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[30];
  result = 0LL;
  if ( v4 )
  {
    DxgkCompositionObject::AddRef(v4);
    return this[30];
  }
  return result;
}
