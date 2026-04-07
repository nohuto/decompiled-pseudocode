/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001FFD0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001FA40 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800379E8 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18007D9E0 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180037FC8 (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CRgnGeometryProxy **a2)
{
  struct _RGNDATA *v2; // rbx
  __int64 v5; // rax
  DWORD RegionData; // eax
  DWORD v7; // ebp
  struct _RGNDATA *v8; // rax
  int v9; // eax
  signed int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  signed int LastError; // eax
  int v16; // r9d
  signed int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-78h]
  void *v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[40]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  memset_0(v21, 0, 0x24uLL);
  v5 = (__int64)*a2;
  v20 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  else
  {
    v14 = CCompositor::CreateProxy<CRgnGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v20);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x93u, v19);
      goto LABEL_11;
    }
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v7 = RegionData;
    if ( !RegionData )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      v18 = 152;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v16 = v10;
      goto LABEL_33;
    }
    v8 = (struct _RGNDATA *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              RegionData);
    v2 = v8;
    if ( !v8 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Bu, v19);
      goto LABEL_11;
    }
    memset_0(v8, 0, v7);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v7, v2) )
    {
      v17 = GetLastError();
      v10 = v17;
      if ( v17 > 0 )
        v10 = (unsigned __int16)v17 | 0x80070000;
      v18 = 163;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v16 = v10;
      goto LABEL_33;
    }
  }
  else
  {
    v2 = (struct _RGNDATA *)v21;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(**(_QWORD **)(*(_QWORD *)(v20 + 16) + 16LL) + 1088LL))(
         *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL),
         *(unsigned int *)(*(_QWORD *)(v20 + 16) + 24LL),
         v2->Buffer,
         v2->rdh.nCount);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = 172;
    v16 = v9;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v18, v19);
    goto LABEL_11;
  }
  v11 = (__int64)*a2;
  if ( *a2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 && v11 )
    (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
  v12 = v20;
  *a2 = (struct CRgnGeometryProxy *)v20;
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
LABEL_11:
  if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1LL);
  if ( v2 && v2 != (struct _RGNDATA *)v21 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v2);
  return (unsigned int)v10;
}
