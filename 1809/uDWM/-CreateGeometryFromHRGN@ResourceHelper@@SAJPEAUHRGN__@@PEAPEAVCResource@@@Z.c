/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800352B8
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034E30 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180076FEC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CResource **a2)
{
  struct _RGNDATA *v4; // rdi
  volatile signed __int32 *v5; // rax
  DWORD RegionData; // eax
  DWORD v7; // ebx
  struct _RGNDATA *v8; // rax
  int v9; // eax
  signed int v10; // ebx
  volatile signed __int32 *v11; // rcx
  CBaseObject *v12; // rdx
  int v14; // r9d
  signed int v15; // eax
  signed int LastError; // eax
  unsigned int v17; // [rsp+20h] [rbp-68h]
  CBaseObject *v18; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[40]; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0LL;
  memset_0(v19, 0, 0x24uLL);
  v5 = (volatile signed __int32 *)*a2;
  v18 = (CBaseObject *)v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
  }
  else
  {
    v9 = CResource::Create(0x1Eu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      v17 = 151;
LABEL_21:
      v14 = v9;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v17);
      goto LABEL_11;
    }
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v7 = RegionData;
    if ( RegionData )
    {
      v8 = (struct _RGNDATA *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                RegionData);
      v4 = v8;
      if ( !v8 )
      {
        v10 = -2147024882;
        v17 = 159;
LABEL_25:
        v14 = v10;
        goto LABEL_26;
      }
      memset_0(v8, 0, v7);
      SetLastError(0);
      if ( GetRegionData(hrgn, v7, v4) )
        goto LABEL_7;
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      v17 = 167;
    }
    else
    {
      v15 = GetLastError();
      v10 = v15;
      if ( v15 > 0 )
        v10 = (unsigned __int16)v15 | 0x80070000;
      v17 = 156;
    }
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_25;
  }
  v4 = (struct _RGNDATA *)v19;
LABEL_7:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(**((_QWORD **)v18 + 2) + 1176LL))(
         *((_QWORD *)v18 + 2),
         *((unsigned int *)v18 + 6),
         v4->Buffer,
         v4->rdh.nCount);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 177;
    goto LABEL_21;
  }
  v11 = (volatile signed __int32 *)*a2;
  if ( *a2 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 && v11 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v11)(v11, 1LL);
  v12 = v18;
  *a2 = v18;
  _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
LABEL_11:
  if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v18)(v18, 1LL);
  if ( v4 && v4 != (struct _RGNDATA *)v19 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v10;
}
