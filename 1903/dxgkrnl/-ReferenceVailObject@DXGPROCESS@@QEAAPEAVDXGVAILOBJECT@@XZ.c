/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EAE8
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263550 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291280 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C0293E40 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0294250 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C0056368 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(DxgkCompositionObject **this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax
  DxgkCompositionObject *v4; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)this[13] + 2) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 1172LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[52];
  if ( !v4 )
    return 0LL;
  DxgkCompositionObject::AddRef(v4);
  return this[52];
}
