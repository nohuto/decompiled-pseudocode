/*
 * XREFs of ?Initialize@UdwmBottomVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800AF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmBottomVisual::Initialize(UdwmBottomVisual *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisual::Initialize(this, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x66,
    (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
