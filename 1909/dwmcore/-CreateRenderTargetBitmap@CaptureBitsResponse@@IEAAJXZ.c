/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801AA2C8
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D2370 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800158FC (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001BAEC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
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
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // r9d
  struct _LUID *v20; // rax
  signed int v21; // eax
  __int64 v22; // rcx
  int v24; // [rsp+40h] [rbp-41h]
  int v25; // [rsp+40h] [rbp-41h]
  CDisplaySet *v26[2]; // [rsp+78h] [rbp-9h] BYREF
  const char *v27; // [rsp+88h] [rbp+7h] BYREF
  int v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h] BYREF
  int v30; // [rsp+A0h] [rbp+1Fh]

  v1 = *((_DWORD *)this + 27);
  v29 = *(_QWORD *)((char *)this + 100);
  v30 = v1;
  v3 = v29;
  v26[0] = 0LL;
  if ( (_DWORD)v29 == 88 )
    v3 = 87;
  v26[1] = 0LL;
  LODWORD(v29) = v3;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)0x57, v26);
  v6 = v26[0];
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CurrentDisplaySet, 0x196u, 0LL);
  }
  else
  {
    v8 = (int)DisplayId::All;
    v27 = "DWM Scratch Rendertarget (capturebits)";
    v28 = 38;
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v26[0], (struct _LUID *)v26);
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v27,
                                  *((_DWORD *)this + 22),
                                  *((_DWORD *)this + 23),
                                  0,
                                  0,
                                  (__int64)&v29,
                                  v24,
                                  *PrimaryAdapterLuid,
                                  v8,
                                  0,
                                  0,
                                  (_QWORD *)this + 9);
    v7 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ScratchRenderTargetBitmap, 0x1AAu, 0LL);
      v12 = *((_QWORD *)v6 + 2);
      v13 = 0;
      v14 = 0;
      if ( *(_DWORD *)(v12 + 88) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v12 + 64) + 8LL * v14);
          if ( *(_DWORD *)(v15 + 296) == 5140 && *(_DWORD *)(v15 + 300) == 140 )
            break;
          if ( ++v14 >= *(_DWORD *)(v12 + 88) )
            goto LABEL_11;
        }
        v13 = v14;
      }
LABEL_11:
      v16 = *(_QWORD *)(v12 + 64);
      v17 = *((_DWORD *)this + 22);
      v18 = v13;
      v19 = *((_DWORD *)this + 23);
      v27 = "DWM Scratch Rendertarget (capturebits)";
      v20 = *(struct _LUID **)(v16 + 8 * v18);
      v28 = 38;
      v21 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v27,
              v17,
              v19,
              0,
              0,
              (__int64)&v29,
              v25,
              v20[42],
              v8,
              0,
              0,
              (_QWORD *)this + 9);
      v7 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1BBu, 0LL);
    }
  }
  if ( v6 )
    CDisplaySet::Release(v6);
  return v7;
}
