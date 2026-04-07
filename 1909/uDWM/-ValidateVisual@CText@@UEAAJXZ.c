/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x180021430
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800216A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18002284C (-ValidateResources@CText@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CText::ValidateVisual(CText *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_BYTE *)this + 80) & 2) == 0 )
  {
    v3 = CText::ValidateResources(this);
    if ( v3 < 0 )
    {
      v5 = 242LL;
      goto LABEL_12;
    }
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 145LL;
    goto LABEL_15;
  }
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(CText *))(*(_QWORD *)this + 192LL))(this);
    v3 = v2;
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~4u;
      goto LABEL_6;
    }
    v6 = 149LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v2,
      v7);
    goto LABEL_7;
  }
LABEL_6:
  v3 = 0;
LABEL_7:
  if ( v3 >= 0 )
    return 0LL;
  v5 = 244LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"windows\\dwm\\udwm\\text.cpp",
    (const char *)(unsigned int)v3,
    v7);
  return (unsigned int)v3;
}
