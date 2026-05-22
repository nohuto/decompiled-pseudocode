/*
 * XREFs of _lambda_389ee6cac702106878bc21352c056760_::_lambda_invoker_cdecl_ @ 0x1800084C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 */

_BOOL8 __fastcall lambda_389ee6cac702106878bc21352c056760_::_lambda_invoker_cdecl_(HWND a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax

  v3 = (unsigned int)a1;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v3);
  *a2 = ViewIdFromWindowId;
  return ViewIdFromWindowId == 0;
}
