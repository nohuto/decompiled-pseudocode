/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18008D350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x1800223FC (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18008D64C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800CD1B8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJ_KPEAIPEAH@Z @ 0x18019C448 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJ_KPEAIPEAH@Z.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1801A3F70 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(
        CGlobalSurfaceManager *this,
        void *a2,
        unsigned int *a3)
{
  unsigned int SurfaceUpdates; // r15d
  unsigned int v6; // r12d
  unsigned int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v12; // rcx
  unsigned int *v13; // r8
  __int64 v14; // rdi
  char v15; // al
  int FrameSurfaceUpdates; // eax
  CGlobalSurfaceManager *v17; // rcx
  unsigned int j; // r12d
  unsigned int k; // edi
  _QWORD **v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  int v24; // eax
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ecx
  int LegacyTokens; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r15d
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // r9
  unsigned int i; // r8d
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // [rsp+30h] [rbp-68h] BYREF
  int v42; // [rsp+34h] [rbp-64h] BYREF
  int v43; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v44; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v45; // [rsp+40h] [rbp-58h]
  void *Buffer[10]; // [rsp+48h] [rbp-50h] BYREF
  PVOID RestartKey; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp+18h]
  unsigned int v49; // [rsp+B8h] [rbp+20h] BYREF

  SurfaceUpdates = 0;
  v41 = 0;
  v6 = 0;
  v43 = 0;
  v7 = 0;
  v44 = 0;
  v45 = 0;
  v48 = 0;
  v49 = 0;
  v42 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  if ( *((_QWORD *)this + 39) )
  {
    if ( ++*((_DWORD *)this + 80) > 8u )
    {
      ++*((_DWORD *)this + 82);
      CLegacySurfaceManager::ReleaseCaptureBitsResponse((CGlobalSurfaceManager *)((char *)this + 104));
    }
  }
  v8 = *((_DWORD *)this + 58);
  v9 = 0;
  if ( v8 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
      v8 = *((_DWORD *)this + 58);
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v31 = *((_QWORD *)this + 26);
        LOBYTE(RestartKey) = 0;
        ++*(_DWORD *)(v31 + 16LL * v7);
        v32 = *((_QWORD *)this + 26);
        v33 = *(_DWORD *)(v32 + 16LL * v7);
        Buffer[0] = *(void **)(v32 + 16LL * v7 + 8);
        v34 = CLegacySurfaceManager::ProcessToken(
                (CGlobalSurfaceManager *)((char *)this + 104),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)Buffer[0],
                a3,
                (bool *)&RestartKey);
        v9 = v34;
        if ( v34 < 0 )
          break;
        if ( (_BYTE)RestartKey || v33 > 0x64 )
        {
          v35 = *((_DWORD *)this + 58);
          SurfaceUpdates = 0;
          v9 = 0;
          if ( v7 < v35 )
          {
            v36 = *((_QWORD *)this + 26);
            for ( i = v7; i < v35 - 1; v35 = *((_DWORD *)this + 58) )
            {
              v38 = 2LL * i;
              v39 = 2LL * ++i;
              *(_OWORD *)(v36 + 8 * v38) = *(_OWORD *)(v36 + 8 * v39);
            }
            *((_DWORD *)this + 58) = v35 - 1;
          }
          else
          {
            v9 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, -2147024809, 0x19Fu, 0LL);
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v9, 0x10Eu, 0LL);
            goto LABEL_67;
          }
          operator delete(Buffer[0]);
          if ( !(_BYTE)RestartKey )
            ++*((_DWORD *)this + 51);
          --v7;
        }
        else
        {
          SurfaceUpdates = 0;
        }
        if ( ++v7 >= *((_DWORD *)this + 58) )
          goto LABEL_67;
      }
      SurfaceUpdates = 0;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v34, 0x106u, 0LL);
    }
LABEL_67:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
    v7 = 0;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v9, 0x158u, 0LL);
  }
  else
  {
    Buffer[0] = a2;
    v10 = 0;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(Buffer, &v49, &v42);
    if ( FrameLegacyTokens < 0 )
    {
      v10 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Eu, 0LL);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        (unsigned int)v10,
        v49);
    *((_DWORD *)this + 50) = v10;
    if ( v10 < 0 )
    {
      v7 = 0;
    }
    else
    {
      while ( 1 )
      {
        v6 += v49;
        v14 = *((_QWORD *)this + 71);
        if ( v49 )
          break;
LABEL_12:
        v7 = v48;
        if ( !v42 )
        {
          SurfaceUpdates = 0;
          goto LABEL_14;
        }
        v7 = ++v48;
        LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v12, (__int64)a2, &v49, &v42);
        SurfaceUpdates = 0;
        *((_DWORD *)this + 50) = LegacyTokens;
        if ( LegacyTokens < 0 )
          goto LABEL_14;
      }
      while ( 1 )
      {
        LOBYTE(RestartKey) = 0;
        v24 = CLegacySurfaceManager::ProcessToken(
                (CGlobalSurfaceManager *)((char *)this + 104),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v14,
                v13,
                (bool *)&RestartKey);
        v9 = v24;
        if ( v24 < 0 )
          break;
        if ( !(_BYTE)RestartKey )
        {
          v40 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CGlobalSurfaceManager *)((char *)this + 104),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v14);
          v9 = v40;
          if ( v40 < 0 )
          {
            SurfaceUpdates = 0;
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v40, 0x17Au, 0LL);
            goto LABEL_73;
          }
        }
        ++SurfaceUpdates;
        v14 += *(unsigned int *)(v14 + 4);
        if ( SurfaceUpdates >= v49 )
          goto LABEL_12;
      }
      SurfaceUpdates = 0;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v24, 0x173u, 0LL);
LABEL_73:
      v7 = v48;
    }
  }
LABEL_14:
  v15 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v6,
      v7);
    v15 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  dword_18033C81C += v6;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v9, 0xEEu, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    if ( (v15 & 0x20) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
    RestartKey = a2;
    FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&RestartKey, &v41, &v43);
    if ( FrameSurfaceUpdates < 0 )
    {
      SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        (unsigned int)v17,
        &dword_1802C06D0,
        3u,
        FrameSurfaceUpdates | 0x10000000,
        0xDCu,
        0LL);
    }
    for ( j = v45;
          (SurfaceUpdates & 0x80000000) == 0;
          SurfaceUpdates = CGlobalSurfaceManager::GetSurfaceUpdates(v17, (unsigned __int64)a2, &v41, &v43) )
    {
      for ( k = 0; k < v41; ++k )
      {
        Buffer[1] = 0LL;
        v25 = *((_QWORD *)this + 71) + 200LL * k;
        Buffer[0] = *(void **)(v25 + 4);
        v26 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 24), Buffer);
        if ( v26 )
        {
          v27 = v26[1];
          if ( v27 )
          {
            v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 72LL))(v27, v25);
            if ( v28 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x110u, 0LL);
            ++j;
          }
        }
        v17 = *(CGlobalSurfaceManager **)(v25 + 32);
        if ( (unsigned __int64)v17 >= 2 )
          DeleteObject(v17);
      }
      if ( !v43 )
        break;
      ++v44;
    }
    RestartKey = 0LL;
    v20 = (_QWORD **)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 24), &RestartKey);
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v20[1] + 128LL))(v20[1], 0LL);
        if ( v21 < 0 )
          break;
        v20 = (_QWORD **)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 24), &RestartKey);
        if ( !v20 )
          goto LABEL_27;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x97u, 0LL);
    }
LABEL_27:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
        j,
        v44);
    dword_18033C81C += j;
    return SurfaceUpdates;
  }
}
