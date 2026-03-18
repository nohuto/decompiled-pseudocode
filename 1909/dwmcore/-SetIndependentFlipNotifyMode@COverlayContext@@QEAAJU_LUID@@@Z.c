/*
 * XREFs of ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180185D9C
 * Callers:
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180187B04 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180192E78 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 */

__int64 __fastcall COverlayContext::SetIndependentFlipNotifyMode(COverlayContext *this, struct _LUID a2)
{
  __int64 v2; // r10
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v5; // r9
  CDirectFlipInfo *v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v10; // eax
  __int64 v11; // rcx

  v2 = *((_QWORD *)this + 1054);
  v3 = 0;
  v4 = 0;
  v5 = (*((_QWORD *)this + 1055) - v2) >> 8;
  if ( !(_DWORD)v5 )
    goto LABEL_4;
  while ( *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v4 << 8) + v2 + 24) + 40LL) != a2 )
  {
    if ( ++v4 >= (unsigned int)v5 )
      goto LABEL_4;
  }
  if ( v4 == -1 )
  {
LABEL_4:
    v6 = (CDirectFlipInfo *)*((_QWORD *)this + 1663);
    if ( v6 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v6 + 4) + 40LL) == a2 )
      {
        v7 = CDirectFlipInfo::EnsureIndependentFlipState(v6, 1, 1);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x62Au, 0LL);
      }
    }
  }
  else
  {
    LOBYTE(v5) = 1;
    v10 = COverlayContext::EnsureIndependentFlipState(
            this,
            (struct COverlayContext::OverlayPlaneInfo *)(v2 + ((__int64)(int)v4 << 8)),
            1,
            v5);
    v3 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x624u, 0LL);
  }
  return v3;
}
