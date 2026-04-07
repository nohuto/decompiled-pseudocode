/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180091AA0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z @ 0x1800281AC (-WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x18008E7C0 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  struct CVisual *v8; // r14
  int SyncedWindowDataByHwnd; // eax
  int v10; // edi
  int v11; // r9d
  struct CWindowData *v12; // r15
  CDCompVirtualDesktopThumbnailData *v13; // rax
  CDCompVirtualDesktopThumbnailData *v14; // rsi
  CDesktopManager *v15; // rax
  int v16; // eax
  _QWORD *v17; // r10
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-30h]
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v27; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v28; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+48h] [rbp-8h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v26 = 0;
  v8 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v28);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 4010;
LABEL_3:
    v11 = SyncedWindowDataByHwnd;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v25);
    goto LABEL_35;
  }
  v12 = v28;
  if ( !v28 )
  {
    v10 = -2147024809;
    goto LABEL_35;
  }
  v13 = (CDCompVirtualDesktopThumbnailData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                               WPF::g_pProcessHeap,
                                               200LL);
  if ( v13 )
    v14 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v13);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v10 = -2147024882;
    v25 = 4021;
LABEL_33:
    v11 = v10;
    goto LABEL_34;
  }
  v15 = CDesktopManager::s_pDesktopManagerInstance;
  *((union _LARGE_INTEGER *)v14 + 1) = a3;
  *((_QWORD *)v14 + 2) = v12;
  *((_QWORD *)v14 + 3) = 0LL;
  *((_WORD *)v14 + 20) = 0;
  *((_BYTE *)v14 + 42) = 1;
  *((_DWORD *)v14 + 30) = 2;
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)v15 + 5) + 16LL)
                                                                                              + 128LL))(
                             *(_QWORD *)(*((_QWORD *)v15 + 5) + 16LL),
                             a4,
                             39LL,
                             &v26);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 4033;
    goto LABEL_3;
  }
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 5)
                                                                                + 16LL));
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 4036;
    goto LABEL_3;
  }
  v16 = CVisual::WrapExistingResource(v26, &v27);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xFC8u);
    v8 = v27;
    goto LABEL_35;
  }
  v8 = v27;
  v17 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v14 + 13) = v27;
  v18 = *((unsigned int *)this + 94);
  v28 = v14;
  v19 = v18 + 1;
  if ( (int)v18 + 1 < (unsigned int)v18 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_26:
    v25 = 4044;
    goto LABEL_33;
  }
  if ( v19 > *((_DWORD *)this + 93) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 8, 1, &v28);
    v10 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xC0u);
    if ( v10 < 0 )
      goto LABEL_26;
  }
  else
  {
    *(_QWORD *)(*v17 + 8 * v18) = v28;
    *((_DWORD *)this + 94) = v19;
  }
  v28 = v14;
  v20 = *((_DWORD *)v12 + 128);
  v8 = 0LL;
  v21 = v20 + 1;
  if ( v20 + 1 < v20 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_32:
    v25 = 4050;
    goto LABEL_33;
  }
  if ( v21 <= *((_DWORD *)v12 + 127) )
  {
    v10 = 0;
    *(_QWORD *)(*((_QWORD *)v12 + 61) + 8LL * *((unsigned int *)v12 + 128)) = v28;
    *((_DWORD *)v12 + 128) = v21;
    goto LABEL_35;
  }
  v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12 + 488, 8, 1, &v28);
  v10 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xC0u);
  if ( v10 < 0 )
    goto LABEL_32;
LABEL_35:
  CloseHandle(a4);
  if ( v26 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  if ( v8 )
    CBaseObject::Release(v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v10;
}
