/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800D8220
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800D8150 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180097528 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x1800D8014 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPresentStatistics(
        CHwndRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx

  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 368LL))(v5);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18024C878, 1u, v7, 0x6B4u);
    else
      *((_DWORD *)this + 119) = *(_DWORD *)a2;
    v10 = *((_QWORD *)this + 13);
    a3->uiNumerator = *(_DWORD *)(v10 + 280);
    a3->uiDenominator = *(_DWORD *)(v10 + 284);
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_18024C878, 1u, -2003304307, 0x6BFu);
  }
  if ( v9 < 0 )
  {
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 97) = 1;
  }
  else
  {
    switch ( v9 )
    {
      case 142213121:
        *((_BYTE *)this + 795) = 1;
        break;
      case 142213129:
        *((_BYTE *)this + 795) = 0;
        *((_BYTE *)this + 97) = 1;
        CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)((char *)this - 64), 1);
        break;
      case 142213130:
      case 142213167:
        ScheduleCompositionPass(0, 0x2000u);
        *((_BYTE *)this + 793) = 1;
        break;
    }
  }
  return (unsigned int)v9;
}
