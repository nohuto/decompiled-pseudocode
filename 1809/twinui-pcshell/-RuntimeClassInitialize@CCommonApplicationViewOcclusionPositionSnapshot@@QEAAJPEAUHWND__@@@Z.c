/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x18033EB88
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Z @ 0x18033A804 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x1801F1F70 (-s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA-AW4ARRANGEMENT_BASED_.c)
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionSnapshot::RuntimeClassInitialize(
        CCommonApplicationViewOcclusionPositionSnapshot *this,
        HWND a2)
{
  const char *v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax
  RECT rcNormalPosition; // xmm2
  HRESULT WindowAttribute; // eax
  unsigned int v9; // edi
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // [rsp+30h] [rbp-9h]
  __int128 pvAttribute; // [rsp+48h] [rbp+Fh] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+58h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  if ( !GetWindowPlacement(a2, &wndpl) )
  {
    v5 = 81LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
             v4);
  }
  rcNormalPosition = wndpl.rcNormalPosition;
  v12 = *(_OWORD *)&wndpl.ptMaxPosition.x;
  *(_OWORD *)((char *)this + 60) = *(_OWORD *)&wndpl.flags;
  *(_OWORD *)((char *)this + 76) = v12;
  *(_QWORD *)((char *)this + 92) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)rcNormalPosition, (__m128d)rcNormalPosition);
  if ( (unsigned int)IsWindowArranged(a2) )
  {
    *((_DWORD *)this + 12) = 4;
    pvAttribute = 0LL;
    WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
    v9 = WindowAttribute;
    if ( WindowAttribute < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
        (const char *)(unsigned int)WindowAttribute);
      return v9;
    }
    v10 = pvAttribute;
    *((_DWORD *)this + 13) = 3;
    *((_OWORD *)this + 1) = v10;
  }
  else
  {
    *((_DWORD *)this + 12) = CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(*((_DWORD *)this + 16));
    if ( !GetWindowRect(a2, (LPRECT)this + 1) )
    {
      v5 = 99LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v5,
               (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
               v4);
    }
  }
  v11 = *(_OWORD *)((char *)this + 84);
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 15) >> 1) & 1;
  result = 0LL;
  *((_OWORD *)this + 2) = v11;
  return result;
}
