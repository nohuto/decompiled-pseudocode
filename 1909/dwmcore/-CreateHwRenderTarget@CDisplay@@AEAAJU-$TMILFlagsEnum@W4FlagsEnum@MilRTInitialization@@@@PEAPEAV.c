/*
 * XREFs of ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800E429C
 * Callers:
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002B648 (-EnsureHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_.c)
 *     ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180159384 (-EnsureDDAHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800E431C (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CreateHwRenderTarget(CDisplay *a1, __int64 a2, __int64 a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  v4 = CHwDisplayRenderTarget::Create(a1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BE078, 2u, v4, 0x35Cu, 0LL);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, GUID *, __int64))*MEMORY[0])(
           0LL,
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BE078, 2u, v7, 0x35Fu, 0LL);
  }
  return v6;
}
