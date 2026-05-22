/*
 * XREFs of ?ZoomGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x180028CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ZoomGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x1800289FC (-ZoomGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall MagnifierClientProxy::ZoomGestureDetected(
        MagnifierClientProxy *this,
        int a2,
        __int64 a3,
        const struct tagPOINT *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 1 || *((_BYTE *)this + 56) && (a4->x != *((_DWORD *)this + 15) || a4->y != *((_DWORD *)this + 16)) )
  {
    v6 = BamoMagnifierClientProxy::ZoomGestureDetected(this, a2, a3, a4);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\server\\magnifie"
                 "rclientproxy.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *((_BYTE *)this + 56) = 0;
    *(struct tagPOINT *)((char *)this + 60) = *a4;
  }
  return 0LL;
}
