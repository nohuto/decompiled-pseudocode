/*
 * XREFs of ?SetReferenceProperty@CSpriteVisual@@UEAAJIPEAVCResource@@@Z @ 0x1801FA3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSpriteVisual::SetReferenceProperty(CSpriteVisual *this, int a2, struct CResource *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 52 )
  {
    v5 = 41LL;
LABEL_5:
    v6 = -2147024809;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spritevisual.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 14LL) )
  {
    v5 = 36LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(CSpriteVisual *, struct CResource *))(*(_QWORD *)this + 336LL))(this, a3);
  if ( v6 < 0 )
  {
    v5 = 37LL;
    goto LABEL_6;
  }
  return 0LL;
}
