/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x18014B4F8
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1801B2A50 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetPrimaryDisplayDimensions(CComposition *this, int *a2, int *a3)
{
  struct CDisplay *v4; // rdi
  int CurrentDisplaySet; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int PrimaryDisplay; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  CDisplaySet *v14; // [rsp+30h] [rbp-28h] BYREF
  struct CDisplay *v15; // [rsp+38h] [rbp-20h] BYREF

  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v14);
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BC058, 2u, CurrentDisplaySet, 0xC80u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v14, &v15);
    v8 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BC058, 2u, PrimaryDisplay, 0xC82u);
      v4 = v15;
    }
    else
    {
      v4 = v15;
      v11 = *((_QWORD *)v15 + 15);
      v12 = _mm_srli_si128(*(__m128i *)((char *)v15 + 120), 8).m128i_u64[0];
      *a2 = v12 - v11;
      *a3 = HIDWORD(v12) - HIDWORD(v11);
    }
  }
  if ( v14 )
    CDisplaySet::Release(v14);
  if ( v4 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
  return v8;
}
