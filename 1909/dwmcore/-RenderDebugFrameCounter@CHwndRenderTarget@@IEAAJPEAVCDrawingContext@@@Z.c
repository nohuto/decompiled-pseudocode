/*
 * XREFs of ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801A7EE4
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180191538 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180191F98 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180192018 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A79B0 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     McTemplateU0qx @ 0x1801A8414 (McTemplateU0qx.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDebugFrameCounter(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        double a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int FrameRate; // esi
  unsigned int CPUTimePerFrame; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  signed int v14; // eax
  __int64 v15; // rcx
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm1_4
  signed int v20; // eax
  __int64 v21; // rcx
  struct D2D_RECT_F v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF

  v5 = 0;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 22) + 320LL))(*((_QWORD *)this + 22), &v24);
  v7 = *((_QWORD *)this + 2);
  v8 = *(_QWORD *)(v7 + 512);
  if ( !v8 )
    goto LABEL_7;
  FrameRate = CDebugFrameCounter::GetFrameRate(*(CDebugFrameCounter **)(v7 + 512), v6, a3);
  CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v8);
  v13 = CPUTimePerFrame;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qx(v12, v11, FrameRate, CPUTimePerFrame);
  if ( v8 == -4656
    || (v14 = CDisplayDebugFrameCounter::Display(
                (CDisplayDebugFrameCounter *)(v8 + 4656),
                FrameRate,
                v13,
                a2,
                (__int64)this + 220,
                &v24,
                CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0,
                &v23),
        v5 = v14,
        v14 >= 0) )
  {
LABEL_7:
    left = v23.left;
    if ( *(float *)&v24 > v23.left )
    {
      LODWORD(v23.left) = v24;
      left = *(float *)&v24;
    }
    top = v23.top;
    if ( *((float *)&v24 + 1) > v23.top )
    {
      v23.top = *((FLOAT *)&v24 + 1);
      top = *((float *)&v24 + 1);
    }
    right = v23.right;
    if ( v23.right > *((float *)&v24 + 2) )
    {
      v23.right = *((FLOAT *)&v24 + 2);
      right = *((float *)&v24 + 2);
    }
    bottom = v23.bottom;
    if ( v23.bottom > *((float *)&v24 + 3) )
    {
      v23.bottom = *((FLOAT *)&v24 + 3);
      bottom = *((float *)&v24 + 3);
    }
    if ( right <= left || bottom <= top )
    {
      v23.bottom = 0.0;
      v23.right = 0.0;
      v23.top = 0.0;
      v23.left = 0.0;
    }
    if ( !IsEmpty(&v23) )
    {
      v20 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, (__int64)&v23, 1);
      v5 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xB2Fu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB22u, 0LL);
  }
  return v5;
}
