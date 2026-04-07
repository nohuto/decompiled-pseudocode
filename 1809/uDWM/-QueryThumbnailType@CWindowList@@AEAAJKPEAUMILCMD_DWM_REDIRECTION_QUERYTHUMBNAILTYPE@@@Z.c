/*
 * XREFs of ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x18008B880
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800095DC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x18000A304 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000A4BC (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryThumbnailType(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  struct CThumbnailData *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  struct CSecondaryWindowRepresentation *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) )
  {
    v8 = *(_QWORD *)ThumbnailData;
    v13 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(v8 + 8))(ThumbnailData);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 12), &v13);
      v10 = v11;
      if ( v11 >= 0 )
        *((_DWORD *)a3 + 3) = CSecondaryWindowRepresentation::GetThumbnailType((__int64)v13);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x108Du);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x108Cu);
    }
  }
  else
  {
    v10 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v10;
}
