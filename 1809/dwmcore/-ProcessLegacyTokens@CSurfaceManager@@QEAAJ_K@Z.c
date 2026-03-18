/*
 * XREFs of ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800CE828
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x1800206EC (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800716C8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5EF0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180160F2C (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall CSurfaceManager::ProcessLegacyTokens(
        CSurfaceManager *this,
        unsigned __int64 a2,
        struct CGdiSpriteBitmap *a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  unsigned __int64 v5; // rsi
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int FrameLegacyTokens; // eax
  struct CGdiSpriteBitmap *v11; // r8
  unsigned int v12; // r14d
  __int64 v13; // rsi
  int v15; // eax
  int LegacyTokens; // eax
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r12d
  int v21; // eax
  char v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int i; // r8d
  __int64 v26; // rax
  int v27; // eax
  void *v28; // rcx
  __int64 v29; // rcx
  int v30; // r9d
  unsigned int v31; // [rsp+20h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-18h] BYREF
  void *v33; // [rsp+38h] [rbp-10h]
  unsigned __int64 v34; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp+50h]
  unsigned int v36; // [rsp+A0h] [rbp+58h] BYREF

  v35 = a2;
  v3 = 0;
  v4 = 0;
  v36 = 0;
  v5 = a2;
  v32 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  if ( *((_QWORD *)this + 38) )
  {
    if ( ++*((_DWORD *)this + 78) > 8u )
    {
      ++*((_DWORD *)this + 80);
      CLegacySurfaceManager::ReleaseCaptureBitsResponse((CSurfaceManager *)((char *)this + 96));
    }
  }
  v7 = *((_DWORD *)this + 56);
  v8 = 0;
  if ( v7 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
      v7 = *((_DWORD *)this + 56);
    }
    v17 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v18 = *((_QWORD *)this + 25);
        LOBYTE(v34) = 0;
        ++*(_DWORD *)(v18 + 16LL * v17);
        v19 = *((_QWORD *)this + 25);
        v20 = *(_DWORD *)(v19 + 16LL * v17);
        v33 = *(void **)(v19 + 16LL * v17 + 8);
        v21 = CLegacySurfaceManager::ProcessToken(
                (CSurfaceManager *)((char *)this + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v33,
                a3,
                (bool *)&v34);
        v8 = v21;
        if ( v21 < 0 )
          break;
        v22 = v34;
        if ( (_BYTE)v34 || v20 > 0x64 )
        {
          v23 = *((unsigned int *)this + 56);
          if ( v17 >= (unsigned int)v23 )
          {
            v8 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024809, 0x19Cu);
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024809, 0x108u);
            goto LABEL_40;
          }
          v24 = *((_QWORD *)this + 25);
          for ( i = v17; i < (int)v23 - 1; LODWORD(v23) = *((_DWORD *)this + 56) )
          {
            v26 = 2LL * i;
            v23 = 2LL * ++i;
            *(_OWORD *)(v24 + 8 * v26) = *(_OWORD *)(v24 + 8 * v23);
          }
          v27 = v23 - 1;
          v8 = 0;
          v28 = v33;
          *((_DWORD *)this + 56) = v27;
          WPF::ProcessHeapImpl::Free(v28);
          if ( !v22 )
            ++*((_DWORD *)this + 49);
          --v17;
        }
        if ( ++v17 >= *((_DWORD *)this + 56) )
          goto LABEL_40;
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v21, 0x100u);
LABEL_40:
      v3 = 0;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
    v5 = v35;
  }
  if ( v8 < 0 )
  {
    v31 = 278;
    v30 = v8;
LABEL_49:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v30, v31);
    goto LABEL_13;
  }
  v34 = v5;
  v9 = 0;
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v34, &v36, &v32);
  if ( FrameLegacyTokens < 0 )
  {
    v9 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x17u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      (unsigned int)v9,
      v36);
  *((_DWORD *)this + 48) = v9;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      v12 = 0;
      v13 = *((_QWORD *)this + 65);
      v4 += v36;
      if ( v36 )
        break;
LABEL_12:
      if ( v32 )
      {
        ++v3;
        LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(this, v35, &v36, &v32);
        *((_DWORD *)this + 48) = LegacyTokens;
        if ( LegacyTokens >= 0 )
          continue;
      }
      goto LABEL_13;
    }
    while ( 1 )
    {
      LOBYTE(v34) = 0;
      v15 = CLegacySurfaceManager::ProcessToken(
              (CSurfaceManager *)((char *)this + 96),
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v13,
              v11,
              (bool *)&v34);
      v8 = v15;
      if ( v15 < 0 )
        break;
      if ( !(_BYTE)v34 )
      {
        v15 = CLegacySurfaceManager::AddUnclaimedToken(
                (CSurfaceManager *)((char *)this + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v13);
        v8 = v15;
        if ( v15 < 0 )
        {
          v31 = 312;
          goto LABEL_47;
        }
      }
      ++v12;
      v13 += *(unsigned int *)(v13 + 4);
      if ( v12 >= v36 )
        goto LABEL_12;
    }
    v31 = 305;
LABEL_47:
    v30 = v15;
    goto LABEL_49;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v4,
      v3);
  dword_18030813C += v4;
  return (unsigned int)v8;
}
