/*
 * XREFs of ?Initialize@UdwmBottomVisual@@MEAAJXZ @ 0x1800B3880
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmBottomVisual::Initialize(UdwmBottomVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x66,
    (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
