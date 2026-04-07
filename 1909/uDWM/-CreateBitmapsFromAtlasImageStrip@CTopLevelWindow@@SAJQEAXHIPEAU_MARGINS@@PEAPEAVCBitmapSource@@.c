/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047908
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800463C8 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180046930 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180047828 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180094E98 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180047B5C (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004E35C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E3CC (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct CBitmapSource **a5)
{
  HRESULT ThemeRect; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  LONG top; // r8d
  unsigned int v14; // esi
  int v15; // edx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rbx
  CBaseObject *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v24; // r9d
  unsigned int pRect; // [rsp+20h] [rbp-51h]
  void *v26; // [rsp+28h] [rbp-49h]
  int v27; // [rsp+40h] [rbp-31h]
  struct CBitmapSource *AtlasImageFromTheme; // [rsp+48h] [rbp-29h]
  struct tagRECT rc; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-11h] BYREF

  if ( dword_1800DEBF8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEBF8);
    if ( dword_1800DEBF8 == -1 )
    {
      dword_1800DC084 = -2147023728;
      Init_thread_footer(&dword_1800DEBF8);
    }
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &v30);
  v11 = ThemeRect;
  if ( ThemeRect < 0 )
  {
    pRect = 896;
    goto LABEL_28;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    v11 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      pRect = 900;
LABEL_28:
      v24 = ThemeRect;
      goto LABEL_31;
    }
  }
  v12 = 0;
  top = v30.top;
  if ( v30.bottom - v30.top >= 0 )
    v12 = v30.bottom - v30.top;
  v14 = 0;
  v27 = v12 / a3;
  v15 = v12 / a3;
  v16 = 0;
  while ( 1 )
  {
    rc.right = v30.right;
    rc.top = v16 + top;
    rc.bottom = v15 + v16 + top;
    rc.left = v30.left;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
    v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    v18 = v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 8) = 1;
      *(_QWORD *)v17 = &CBitmapSource::`vftable';
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_QWORD *)(v17 + 96) = 0LL;
      *(_DWORD *)(v17 + 80) = 0x80000000;
      *(_DWORD *)(v17 + 88) = 0x80000000;
      *(_DWORD *)(v17 + 84) = 0x80000000;
      *(_DWORD *)(v17 + 92) = 0x80000000;
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v18 )
      break;
    v19 = *(CBaseObject **)(v18 + 16);
    v20 = *((_QWORD *)AtlasImageFromTheme + 2);
    *(_QWORD *)(v18 + 16) = v20;
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    if ( v19 )
      CBaseObject::Release(v19);
    v21 = 0;
    *(struct tagRECT *)(v18 + 80) = rc;
    if ( *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80) >= 0 )
      v21 = *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80);
    *(_DWORD *)(v18 + 24) = v21;
    v22 = 0;
    if ( *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84) >= 0 )
      v22 = *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84);
    *(_DWORD *)(v18 + 28) = v22;
    if ( a4 )
      *(struct _MARGINS *)(v18 + 32) = *a4;
    *a5 = (struct CBitmapSource *)v18;
    v15 = v27;
    v11 = 0;
    v16 += v27;
    ++v14;
    ++a5;
    if ( v14 >= a3 )
      return v11;
    top = v30.top;
  }
  v11 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xABu, v26);
  v24 = -2147024882;
  pRect = 923;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC084, 1u, v24, pRect, v26);
  return v11;
}
