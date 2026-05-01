/*
 * XREFs of ?SetAppRectOld@CAppLayoutOperationItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x180440620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CAppLayoutOperationItem::SetAppRectOld(struct tagRECT *a1, int a2, const RECT *a3)
{
  struct tagRECT *v3; // rcx
  BOOL result; // eax

  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v3 = a1 + 8;
  }
  else
  {
    v3 = a1 + 7;
  }
  return CopyRect(v3, a3);
}
