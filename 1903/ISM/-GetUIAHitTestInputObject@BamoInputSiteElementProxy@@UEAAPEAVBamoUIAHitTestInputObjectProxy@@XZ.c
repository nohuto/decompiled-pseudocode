/*
 * XREFs of ?GetUIAHitTestInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoUIAHitTestInputObjectProxy@@XZ @ 0x1800095A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct BamoUIAHitTestInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetUIAHitTestInputObject(
        BamoInputSiteElementProxy *this)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v2 + 136) != CurrentThreadId && *(_DWORD *)(v2 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v4);
    JUMPOUT(0x18004176ELL);
  }
  return (struct BamoUIAHitTestInputObjectProxy *)*((_QWORD *)this + 16);
}
