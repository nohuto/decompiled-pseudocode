/*
 * XREFs of ?InternalRelease@?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D8624
 * Callers:
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurNineGrid__ @ 0x1800EDCC0 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cp1xBlurNineGrid__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurNineGrid__ @ 0x1800EDCE0 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cp2xBlurNineGrid__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurSurface__ @ 0x1800EDCF0 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cp2xBlurSurface__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurNineGrid__ @ 0x1800EDD20 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cpHalfBlurNineGrid__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSurfaceBrush>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
