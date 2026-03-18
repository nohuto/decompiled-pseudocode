/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1800525E0
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180051954 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x18001E7EC (-Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1800206B8 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x180052784 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180052908 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        struct _LUID *a3)
{
  struct CBitmapRealization *v6; // rdi
  int v7; // ebx
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int HighPart; // eax
  __int64 v12; // r15
  struct _LUID v13; // xmm1_8
  HANDLE v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  __int64 i; // rsi
  HANDLE v21; // rcx
  int v23; // eax
  _DWORD v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v25; // [rsp+38h] [rbp-C8h]
  struct _LUID v26; // [rsp+40h] [rbp-C0h]
  struct _LUID v27; // [rsp+48h] [rbp-B8h]
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE hObject[31]; // [rsp+58h] [rbp-A8h]
  struct CBitmapRealization *v30; // [rsp+190h] [rbp+90h] BYREF

  v6 = 0LL;
  v30 = 0LL;
  v7 = 0;
  memset_0(&v28, 0, 0x100uLL);
  if ( (unsigned int)(a3->HighPart - 1) > 0x1E )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802D3268, 3u, -2147024809, 0x582u, 0LL);
  }
  else
  {
    v9 = NtOpenCompositionSurfaceSwapChainHandleInfo(*((_QWORD *)*this + 4), this + 1, &v28);
    if ( v9 < 0 )
    {
      v7 = v9 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802D3268, 3u, v9 | 0x10000000, 0x58Bu, 0LL);
    }
    else
    {
      if ( a3->HighPart <= 1u )
        goto LABEL_4;
      if ( !this[20] )
      {
        v23 = CDecodeBitmap::Create(a3[2], this + 20);
        v7 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v23, 0x6EDu, 0LL);
      }
      if ( v7 >= 0 )
      {
LABEL_4:
        HighPart = a3->HighPart;
        v12 = 0LL;
        if ( HighPart )
        {
          while ( 1 )
          {
            v24[0] = a3->LowPart;
            v24[1] = v12;
            v13 = a3[3 * v12 + 3];
            v14 = hObject[v12];
            v26 = a3[3 * v12 + 2];
            v25 = v14;
            v27 = v13;
            v15 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                    (CGlobalCompositionSurfaceInfo::CBindInfo *)this,
                    a2,
                    (const struct CSM_REALIZATION_INFO *)v24,
                    &v30);
            v7 = v15;
            if ( v15 < 0 )
              break;
            v6 = v30;
            hObject[v12] = 0LL;
            v17 = CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
                    (CGlobalCompositionSurfaceInfo::CBindInfo *)this,
                    v6);
            v7 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802D3268, 3u, v17, 0x5BAu, 0LL);
              goto LABEL_11;
            }
            ReleaseInterface<IBitmapLock>((__int64 *)&v30);
            HighPart = a3->HighPart;
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= HighPart )
            {
              v6 = v30;
              goto LABEL_9;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802D3268, 3u, v15, 0x5AFu, 0LL);
          v6 = v30;
        }
        else
        {
LABEL_9:
          if ( HighPart > 1 )
            CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo::CBindInfo *)this);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802D3268, 3u, v7, 0x595u, 0LL);
      }
LABEL_11:
      v19 = v28;
      for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
      {
        v21 = hObject[i];
        if ( v21 )
        {
          CloseHandle(v21);
          v19 = v28;
        }
      }
      if ( v6 )
        (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v7;
}
