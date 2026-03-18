/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABB88
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D20E0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180016F4C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001D9CC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  int v3; // eax
  signed int CurrentDisplaySet; // eax
  __int64 v5; // rcx
  CDisplaySet *v6; // r14
  unsigned int v7; // esi
  int v8; // ebx
  struct _LUID *PrimaryAdapterLuid; // rax
  signed int ScratchRenderTargetBitmap; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // r9d
  struct _LUID *v21; // rax
  signed int v22; // eax
  __int64 v23; // rcx
  int v25; // [rsp+40h] [rbp-41h]
  int v26; // [rsp+40h] [rbp-41h]
  CDisplaySet *v27[2]; // [rsp+78h] [rbp-9h] BYREF
  const char *v28; // [rsp+88h] [rbp+7h] BYREF
  int v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h] BYREF
  int v31; // [rsp+A0h] [rbp+1Fh]

  v1 = *((_DWORD *)this + 27);
  v30 = *(_QWORD *)((char *)this + 100);
  v31 = v1;
  v3 = v30;
  v27[0] = 0LL;
  if ( (_DWORD)v30 == 88 )
    v3 = 87;
  v27[1] = 0LL;
  LODWORD(v30) = v3;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)0x57, v27);
  v6 = v27[0];
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CurrentDisplaySet, 0x196u, 0LL);
  }
  else
  {
    v8 = (int)DisplayId::All;
    v28 = "DWM Scratch Rendertarget (capturebits)";
    v29 = 38;
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v27[0], (struct _LUID *)v27);
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v28,
                                  *((_DWORD *)this + 22),
                                  *((_DWORD *)this + 23),
                                  0,
                                  0,
                                  (__int64)&v30,
                                  v25,
                                  *PrimaryAdapterLuid,
                                  v8,
                                  0,
                                  0,
                                  (_QWORD *)this + 9);
    v7 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ScratchRenderTargetBitmap, 0x1AAu, 0LL);
      v13 = *((_QWORD *)v6 + 2);
      v14 = 0;
      v15 = 0;
      if ( *(_DWORD *)(v13 + 88) )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)(v13 + 64) + 8LL * v15);
          if ( *(_DWORD *)(v16 + 296) == 5140 && *(_DWORD *)(v16 + 300) == 140 )
            break;
          if ( ++v15 >= *(_DWORD *)(v13 + 88) )
            goto LABEL_11;
        }
        v14 = v15;
      }
LABEL_11:
      v17 = *(_QWORD *)(v13 + 64);
      v18 = *((_DWORD *)this + 22);
      v19 = v14;
      v20 = *((_DWORD *)this + 23);
      v28 = "DWM Scratch Rendertarget (capturebits)";
      v21 = *(struct _LUID **)(v17 + 8 * v19);
      v29 = 38;
      v22 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v28,
              v18,
              v20,
              0,
              0,
              (__int64)&v30,
              v26,
              v21[42],
              v8,
              0,
              0,
              (_QWORD *)this + 9);
      v7 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1BBu, 0LL);
    }
  }
  if ( v6 )
    CDisplaySet::Release(v6, v11);
  return v7;
}
