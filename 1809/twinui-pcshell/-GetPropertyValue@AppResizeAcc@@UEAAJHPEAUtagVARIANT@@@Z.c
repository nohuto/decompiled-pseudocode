/*
 * XREFs of ?GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180366AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180315794 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall AppResizeAcc::GetPropertyValue(AppResizeAcc *this, int a2, struct tagVARIANT *a3)
{
  const unsigned __int16 *v7; // rcx
  int inited; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  VariantInit(a3);
  if ( a2 != 30011 )
  {
    if ( (unsigned int)(a2 - 30137) <= 1 )
    {
      a3->vt = 11;
      a3->iVal = -1;
    }
    return 0LL;
  }
  v7 = &word_180411F30;
  if ( *((_QWORD *)this + 9) )
    v7 = (const unsigned __int16 *)*((_QWORD *)this + 9);
  inited = InitVariantFromString(v7, a3);
  v9 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x86,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
    (const char *)(unsigned int)inited);
  return v9;
}
