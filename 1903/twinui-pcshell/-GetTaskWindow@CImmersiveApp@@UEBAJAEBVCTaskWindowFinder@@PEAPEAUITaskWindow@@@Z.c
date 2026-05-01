/*
 * XREFs of ?GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180144F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18014B1C4 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 */

int __fastcall CImmersiveApp::GetTaskWindow(
        CImmersiveApp *this,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  return CImmersiveApp::CImmersiveWindowCollection::_GetWindow((CImmersiveApp *)((char *)this + 184), a2, a3, &v4);
}
