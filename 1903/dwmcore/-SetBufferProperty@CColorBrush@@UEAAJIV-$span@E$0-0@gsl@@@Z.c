/*
 * XREFs of ?SetBufferProperty@CColorBrush@@UEAAJIV?$span@E$0?0@gsl@@@Z @ 0x1801C9CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CColorBrush::SetBufferProperty(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdx
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = 77LL;
LABEL_5:
    v4 = -2147024809;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\colorbrush.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( *a3 != 16LL )
  {
    v3 = 72LL;
    goto LABEL_5;
  }
  v4 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))xmmword_18033A978)(
         a1 + SDWORD2(xmmword_18033A978),
         &CColorBrush::sc_Color,
         a3[1]);
  if ( v4 < 0 )
  {
    v3 = 73LL;
    goto LABEL_6;
  }
  return 0LL;
}
