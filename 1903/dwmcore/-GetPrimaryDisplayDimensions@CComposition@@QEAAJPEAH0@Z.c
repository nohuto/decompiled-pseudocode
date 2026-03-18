/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180177654
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x1802183A0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetPrimaryDisplayDimensions(CComposition *this, int *a2, int *a3)
{
  struct CDisplay *v4; // rdi
  signed int CurrentDisplaySet; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int PrimaryDisplay; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  unsigned int v13; // edx
  CDisplaySet *v15; // [rsp+30h] [rbp-28h] BYREF
  struct CDisplay *v16; // [rsp+38h] [rbp-20h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v15);
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802E4668, 2u, CurrentDisplaySet, 0xBB5u, 0LL);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v15, &v16);
    v8 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802E4668, 2u, PrimaryDisplay, 0xBB7u, 0LL);
      v4 = v16;
    }
    else
    {
      v4 = v16;
      v11 = *((_QWORD *)v16 + 15);
      v12 = _mm_srli_si128(*(__m128i *)((char *)v16 + 120), 8).m128i_u64[0];
      v13 = HIDWORD(v12) - HIDWORD(v11);
      *a2 = v12 - v11;
      *a3 = HIDWORD(v12) - HIDWORD(v11);
    }
  }
  if ( v15 )
    CDisplaySet::Release(v15, v13);
  if ( v4 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
  return v8;
}
