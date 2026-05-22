/*
 * XREFs of _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x180053160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005869C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 */

_BOOL8 __fastcall lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_(HWND a1, unsigned int *a2)
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
