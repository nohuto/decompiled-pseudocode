/*
 * XREFs of ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180338D50
 * Callers:
 *     ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803395D4 (-_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180339BD8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::ResizeView(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 448) )
  {
    v4 = -2147418113;
    v5 = 182LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = SurfaceHubPositioner::_SetDefaultLayout((SurfaceHubPositioner *)((char *)this - 104), a2, 0);
  if ( v4 < 0 )
  {
    v5 = 183LL;
    goto LABEL_3;
  }
  return 0LL;
}
