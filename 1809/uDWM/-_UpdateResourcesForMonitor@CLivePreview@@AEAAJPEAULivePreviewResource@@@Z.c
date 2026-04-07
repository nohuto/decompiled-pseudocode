/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180076FEC
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x180076F20 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800778A0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18000EF0C (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180013A04 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180033940 (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800352B8 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180077554 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  char v9; // al
  int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r8
  int RectangleGeometry; // eax
  char *v16; // r14
  int v17; // eax
  __int64 i; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int v29; // r10d
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // r8
  int v34; // eax
  char *v35; // r14
  int v36; // eax
  __int64 j; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  int GeometryFromHRGN; // eax
  __int128 v50; // [rsp+90h] [rbp-19h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-1h]
  __int128 v53; // [rsp+B0h] [rbp+7h] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  v5 = 0;
  if ( !*((_DWORD *)this + 82) )
  {
LABEL_5:
    *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
    v9 = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    *((_BYTE *)a2 + 129) = v9;
    if ( *((_BYTE *)a2 + 128) )
    {
      v10 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      v11 = 0LL;
      v12 = *((unsigned int *)a2 + 1);
      v13 = *((_DWORD *)a2 + 3) - v12;
      if ( v13 >= 0 )
        v11 = (unsigned int)v13;
      v14 = 0LL;
      if ( v10 >= 0 )
        v14 = (unsigned int)v10;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(unsigned int *)a2,
                            v12,
                            v14,
                            v11,
                            (struct CResource **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x506u);
        return v3;
      }
      v16 = (char *)a2 + 24;
      if ( !*((_QWORD *)a2 + 3) )
      {
        v17 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 3);
        v3 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x50Au);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v50 + i) = (float)*((int *)a2 + i);
      v19 = *(_QWORD *)v16;
      v51 = 0LL;
      v52 = 0LL;
      v20 = *(_QWORD *)(*((_QWORD *)this + 64) + 16LL);
      if ( v20 )
        v21 = *(_DWORD *)(v20 + 24);
      else
        v21 = 0;
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v19 + 16) + 1000LL))(
              *(_QWORD *)(v19 + 16),
              *(unsigned int *)(v19 + 24),
              &v50,
              &v51,
              0,
              0,
              v21,
              0);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x51Au);
        return v3;
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v16 + 16LL) + 1008LL))(
              *(_QWORD *)(*(_QWORD *)v16 + 16LL),
              *(unsigned int *)(*(_QWORD *)v16 + 24LL));
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x51Du);
        return v3;
      }
      v25 = *((_QWORD *)a2 + 4);
      if ( !v25 )
      {
        v26 = CCachedVisualImageBrushResource::Create(v24, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 4);
        v3 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x522u);
          return v3;
        }
        v25 = *((_QWORD *)a2 + 4);
      }
      v27 = *(_QWORD *)v16;
      v53 = _xmm;
      v50 = _xmm;
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v25 + 16) + 1200LL))(
              *(_QWORD *)(v25 + 16),
              *(unsigned int *)(v25 + 24),
              *(unsigned int *)(*((_QWORD *)this + 59) + 24LL),
              &v53,
              &v50,
              *(_DWORD *)(*((_QWORD *)this + 59) + 24LL),
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              *(_DWORD *)(v27 + 24));
      v3 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x540u);
        return v3;
      }
      v9 = *((_BYTE *)a2 + 129);
    }
    if ( v9 )
    {
      v29 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      v30 = 0LL;
      v31 = *((unsigned int *)a2 + 11);
      v32 = *((_DWORD *)a2 + 13) - v31;
      if ( v32 >= 0 )
        v30 = (unsigned int)v32;
      v33 = 0LL;
      if ( v29 >= 0 )
        v33 = (unsigned int)v29;
      v34 = ResourceHelper::CreateRectangleGeometry(
              *((unsigned int *)a2 + 10),
              v31,
              v33,
              v30,
              (struct CResource **)a2 + 7);
      v3 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x54Bu);
        return v3;
      }
      v35 = (char *)a2 + 64;
      if ( !*((_QWORD *)a2 + 8) )
      {
        v36 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 8);
        v3 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x54Fu);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v50 + j) = (float)*((int *)a2 + j + 10);
      v38 = *(_QWORD *)v35;
      v51 = 0LL;
      v52 = 0LL;
      v39 = *(_QWORD *)(*((_QWORD *)this + 66) + 16LL);
      if ( v39 )
        v40 = *(_DWORD *)(v39 + 24);
      else
        v40 = 0;
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v38 + 16) + 1000LL))(
              *(_QWORD *)(v38 + 16),
              *(unsigned int *)(v38 + 24),
              &v50,
              &v51,
              0,
              0,
              v40,
              0);
      v3 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x55Fu);
        return v3;
      }
      v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v35 + 16LL) + 1008LL))(
              *(_QWORD *)(*(_QWORD *)v35 + 16LL),
              *(unsigned int *)(*(_QWORD *)v35 + 24LL));
      v3 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x562u);
        return v3;
      }
      v44 = *((_QWORD *)a2 + 9);
      if ( !v44 )
      {
        v45 = CCachedVisualImageBrushResource::Create(v43, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 9);
        v3 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x566u);
          return v3;
        }
        v44 = *((_QWORD *)a2 + 9);
      }
      v46 = *(_QWORD *)v35;
      v53 = _xmm;
      v50 = _xmm;
      v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v44 + 16) + 1200LL))(
              *(_QWORD *)(v44 + 16),
              *(unsigned int *)(v44 + 24),
              *(unsigned int *)(*((_QWORD *)this + 60) + 24LL),
              &v53,
              &v50,
              *(_DWORD *)(*((_QWORD *)this + 60) + 24LL),
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              *(_DWORD *)(v46 + 24));
      v3 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x584u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(*((HRGN *)a2 + 12), (struct CResource **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x586u);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 38) + 40LL * v5);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 49);
    if ( v7 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v6, v7, a2);
      v3 = updated;
      if ( updated < 0 )
        break;
    }
    if ( ++v5 >= *((_DWORD *)this + 82) )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x4F6u);
  return v3;
}
