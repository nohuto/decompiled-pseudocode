/*
 * XREFs of ?OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1803E5B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1803E6A80 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 */

__int64 __fastcall AppResizeView::OnPointerUpdate(AppResizeView *this, __int64 a2, struct tagPOINT *a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 64) )
    return 0LL;
  v7 = *a3;
  updated = AppResizeView::UpdateAppResizeData((char *)this - 32, &v7, 0LL);
  v4 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)updated);
  return v4;
}
