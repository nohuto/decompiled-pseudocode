/*
 * XREFs of ?GetResolution@CSubRectBitmapRealizationImageSource@@UEBAJPEAN0@Z @ 0x1801D56F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubRectBitmapRealizationImageSource::GetResolution(
        CSubRectBitmapRealizationImageSource *this,
        double *a2,
        double *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 96.0;
  *a3 = 96.0;
  if ( !*((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 1;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subrectbitmaprealizationimagesource.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *((_BYTE *)this + 8) = 0;
  }
  return 0LL;
}
