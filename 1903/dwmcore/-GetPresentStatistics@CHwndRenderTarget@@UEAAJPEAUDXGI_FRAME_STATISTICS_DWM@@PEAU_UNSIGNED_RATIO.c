/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800AFC80
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800AFBB0 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180043B58 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800AF680 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPresentStatistics(
        CHwndRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v5; // rcx
  signed int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v13; // rax

  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 368LL))(v5);
    v10 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802920EC, 1u, v7, 0x6C9u, 0LL);
    else
      *((_DWORD *)this + 119) = *(_DWORD *)a2;
    v11 = *((_QWORD *)this + 13);
    a3->uiNumerator = *(_DWORD *)(v11 + 272);
    a3->uiDenominator = *(_DWORD *)(v11 + 276);
  }
  else
  {
    v10 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802920EC, 1u, 0x8898008D, 0x6D4u, 0LL);
  }
  if ( v10 < 0 )
  {
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 97) = 1;
  }
  else
  {
    switch ( v10 )
    {
      case 142213121:
        *((_BYTE *)this + 795) = 1;
        break;
      case 142213129:
        v13 = *((_QWORD *)this - 8);
        LOBYTE(v8) = 1;
        *((_BYTE *)this + 795) = 0;
        *((_BYTE *)this + 97) = 1;
        (*(void (__fastcall **)(char *, __int64))(v13 + 272))((char *)this - 64, v8);
        break;
      case 142213130:
      case 142213167:
        ScheduleCompositionPass(0, 0x2000u);
        *((_BYTE *)this + 793) = 1;
        break;
    }
  }
  return (unsigned int)v10;
}
