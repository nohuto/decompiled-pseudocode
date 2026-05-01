/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x180055788
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180054A9C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180225D18 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUta.c)
 * Callees:
 *     ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x180055848 (-s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA-AW4ARRANGEMENT_BASED_.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(
        CCommonApplicationViewOcclusionPosition *this,
        struct tagWINDOWPLACEMENT *a2)
{
  __int128 v2; // xmm1
  int StateFromShowCommand; // eax
  _DWORD *v4; // r8
  __int128 v6; // [rsp+30h] [rbp-9h]
  __int128 v7; // [rsp+40h] [rbp+7h]
  struct tagWINDOWPLACEMENT v8; // [rsp+60h] [rbp+27h]

  v8 = *a2;
  LODWORD(v6) = HIDWORD(*(_QWORD *)&a2->length);
  *((_QWORD *)&v6 + 1) = a2->ptMinPosition;
  DWORD1(v6) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&a2->length, 8));
  *(_QWORD *)&v7 = *(_OWORD *)&a2->ptMinPosition.y >> 32;
  *((_QWORD *)&v7 + 1) = *(_QWORD *)&a2->rcNormalPosition.left;
  *(_OWORD *)((char *)this + 60) = v6;
  *(_OWORD *)((char *)this + 76) = v7;
  *(_QWORD *)((char *)this + 92) = *(_OWORD *)&_mm_unpackhi_pd(
                                                 (__m128d)v8.rcNormalPosition,
                                                 (__m128d)v8.rcNormalPosition);
  v2 = *(_OWORD *)((char *)this + 84);
  *((_OWORD *)this + 1) = 0uLL;
  *((_OWORD *)this + 2) = v2;
  StateFromShowCommand = CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(
                           *((unsigned int *)this + 16),
                           a2,
                           this);
  v4[12] = StateFromShowCommand;
  v4[14] = (v4[15] >> 1) & 1;
  return 0LL;
}
