/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A27C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022EF40 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C025DCC0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C025E0D0 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C004F214 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(DxgkCompositionObject **this)
{
  __int64 v2; // rax
  DxgkCompositionObject *v3; // rcx

  if ( *((struct _KTHREAD **)this[14] + 1) != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 1176LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = this[55];
  if ( !v3 )
    return 0LL;
  DxgkCompositionObject::AddRef(v3);
  return this[55];
}
