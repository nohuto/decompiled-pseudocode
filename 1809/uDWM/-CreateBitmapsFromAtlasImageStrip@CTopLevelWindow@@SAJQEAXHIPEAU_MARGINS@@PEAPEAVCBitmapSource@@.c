/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003DF10
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003E1C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x180046338 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x1800465B0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180090590 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003E17C (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct CBitmapSource **a5)
{
  HRESULT ThemeRect; // ebp
  LONG top; // ecx
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // ebx
  int v15; // r14d
  struct CBitmapSource *AtlasImageFromTheme; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  struct tagRECT rc; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT pRect; // [rsp+50h] [rbp-68h] BYREF

  if ( dword_1800D7BE0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7BE0);
    if ( dword_1800D7BE0 == -1 )
    {
      dword_1800D507C = -2147023728;
      Init_thread_footer(&dword_1800D7BE0);
    }
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D507C, 1u, ThemeRect, 0x39Bu);
    return (unsigned int)ThemeRect;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D507C, 1u, ThemeRect, 0x39Fu);
      return (unsigned int)ThemeRect;
    }
  }
  top = pRect.top;
  v12 = pRect.bottom - pRect.top;
  if ( pRect.bottom - pRect.top < 0 )
    v12 = 0;
  if ( a3 == 4 )
    v13 = v12 >> 2;
  else
    v13 = v12 / a3;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v15 + top;
    rc.bottom = v13 + v15 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
    v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    if ( !v17 )
      break;
    *(_DWORD *)(v17 + 8) = 1;
    *(_QWORD *)v17 = &CBitmapSource::`vftable';
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_QWORD *)(v17 + 96) = 0LL;
    *(_DWORD *)(v17 + 80) = 0x80000000;
    *(_DWORD *)(v17 + 88) = 0x80000000;
    *(_DWORD *)(v17 + 84) = 0x80000000;
    *(_DWORD *)(v17 + 92) = 0x80000000;
    *(_QWORD *)(v17 + 16) = *((_QWORD *)AtlasImageFromTheme + 2);
    v18 = *((_QWORD *)AtlasImageFromTheme + 2);
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    *(struct tagRECT *)(v17 + 80) = rc;
    v19 = *(_DWORD *)(v17 + 88) - *(_DWORD *)(v17 + 80);
    if ( v19 < 0 )
      v19 = 0;
    *(_DWORD *)(v17 + 24) = v19;
    v20 = *(_DWORD *)(v17 + 92) - *(_DWORD *)(v17 + 84);
    if ( v20 < 0 )
      v20 = 0;
    *(_DWORD *)(v17 + 28) = v20;
    if ( a4 )
      *(struct _MARGINS *)(v17 + 32) = *a4;
    *a5 = (struct CBitmapSource *)v17;
    ++v14;
    ++a5;
    v15 += v13;
    if ( v14 >= a3 )
      return 0LL;
    top = pRect.top;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB1u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D507C, 1u, -2147024882, 0x3B6u);
  return 2147942414LL;
}
