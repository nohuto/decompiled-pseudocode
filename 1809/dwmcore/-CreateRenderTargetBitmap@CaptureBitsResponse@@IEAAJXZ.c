/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180177228
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800744A0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180015820 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x180019764 (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  __int64 v2; // xmm0_8
  int v4; // eax
  int CurrentDisplaySet; // eax
  __int64 v6; // rcx
  CDisplaySet *v7; // r14
  unsigned int v8; // esi
  int v9; // ebx
  struct _LUID *PrimaryAdapterLuid; // rax
  int v11; // edi
  int ScratchRenderTargetBitmap; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // r9d
  struct _LUID *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v26; // [rsp+38h] [rbp-41h]
  int v27; // [rsp+38h] [rbp-41h]
  CDisplaySet *v28; // [rsp+70h] [rbp-9h] BYREF
  __int64 v29; // [rsp+78h] [rbp-1h]
  const char *v30; // [rsp+80h] [rbp+7h] BYREF
  int v31; // [rsp+88h] [rbp+Fh]
  __int64 v32; // [rsp+90h] [rbp+17h] BYREF
  int v33; // [rsp+98h] [rbp+1Fh]

  v1 = *((_DWORD *)this + 27);
  v2 = *(_QWORD *)((char *)this + 100);
  v28 = 0LL;
  v32 = v2;
  v33 = v1;
  v4 = v2;
  if ( (_DWORD)v2 == 88 )
    v4 = 87;
  v29 = 0LL;
  LODWORD(v32) = v4;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)0x57, &v28);
  v7 = v28;
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, CurrentDisplaySet, 0x198u);
  }
  else
  {
    v9 = DisplayId::All;
    v30 = "DWM Scratch Rendertarget (capturebits)";
    v31 = 38;
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v28, (struct _LUID *)&v28);
    v11 = v29;
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v30,
                                  *((_DWORD *)this + 22),
                                  *((_DWORD *)this + 23),
                                  v29,
                                  0,
                                  (__int64)&v32,
                                  v26,
                                  *PrimaryAdapterLuid,
                                  v9,
                                  0,
                                  0,
                                  (_QWORD *)this + 9);
    v8 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ScratchRenderTargetBitmap, 0x1ACu);
      v14 = *((_QWORD *)v7 + 2);
      v15 = 0;
      v16 = 0LL;
      if ( *(_DWORD *)(v14 + 88) )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v14 + 64) + 8 * v16);
          if ( *(_DWORD *)(v17 + 296) == 5140 && *(_DWORD *)(v17 + 300) == 140 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 88) )
            goto LABEL_11;
        }
        v15 = v16;
      }
LABEL_11:
      v18 = *(_QWORD *)(v14 + 64);
      v19 = *((_DWORD *)this + 22);
      v20 = v15;
      v21 = *((_DWORD *)this + 23);
      v30 = "DWM Scratch Rendertarget (capturebits)";
      v22 = *(struct _LUID **)(v18 + 8 * v20);
      v31 = 38;
      v23 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v30,
              v19,
              v21,
              v11,
              0,
              (__int64)&v32,
              v27,
              v22[42],
              v9,
              0,
              0,
              (_QWORD *)this + 9);
      v8 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1BDu);
    }
  }
  if ( v7 )
    CDisplaySet::Release(v7);
  return v8;
}
