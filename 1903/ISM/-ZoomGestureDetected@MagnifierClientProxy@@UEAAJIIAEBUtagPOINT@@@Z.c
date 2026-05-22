/*
 * XREFs of ?ZoomGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x180070170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ThrottleGestureNotification@MagnifierClientProxy@@AEAA_NIAEBUtagPOINT@@@Z @ 0x18006FCF4 (-ThrottleGestureNotification@MagnifierClientProxy@@AEAA_NIAEBUtagPOINT@@@Z.c)
 *     ?ZoomGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x180070008 (-ZoomGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall MagnifierClientProxy::ZoomGestureDetected(
        MagnifierClientProxy *this,
        int a2,
        __int64 a3,
        const struct tagPOINT *a4)
{
  const struct tagPOINT *v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !MagnifierClientProxy::ThrottleGestureNotification((MagnifierClientProxy *)((char *)this - 8), a2, a4) )
  {
    v9 = BamoMagnifierClientProxy::ZoomGestureDetected(this, v7, v8, v6);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\server\\magnifie"
                 "rclientproxy.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    *((_BYTE *)this + 56) = 0;
    *(struct tagPOINT *)((char *)this + 60) = *a4;
  }
  return 0LL;
}
