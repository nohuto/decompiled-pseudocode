/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015D46C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180071A4C (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CTextBrush@@SAPEAX_K@Z @ 0x18014AD70 (--2CTextBrush@@SAPEAX_K@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18015DABC (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015DE50 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xxddffff @ 0x18015E020 (McTemplateU0xxddffff.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x180179B6C (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180179C90 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180179CF0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  MagnifierCaptureBitsResponse *v3; // rdi
  bool v7; // zf
  int v8; // ebx
  MagnifierCaptureBitsResponse *v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int updated; // eax
  __int64 v16; // rcx
  MagnifierCaptureBitsResponse *v17; // rax
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-58h]
  float v23; // [rsp+48h] [rbp-30h]
  struct WICRect v24; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0LL;
  v24.X = 0;
  v24.Y = 0;
  v7 = (*((_BYTE *)a3 + 24) & 2) == 0;
  v24.Width = *((_DWORD *)a3 + 2);
  v24.Height = *((_DWORD *)a3 + 3);
  if ( v7 )
  {
    *((_BYTE *)this + 266) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                this,
                a2,
                (const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x9Eu);
    }
    else
    {
      *((_BYTE *)this + 265) = 1;
      *((_BYTE *)this + 264) = *((_BYTE *)a3 + 24) & 1;
      v17 = (MagnifierCaptureBitsResponse *)CTextBrush::operator new();
      if ( v17 )
        v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
               v17,
               *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 72LL),
               this,
               a2,
               &v24,
               *((_QWORD *)a3 + 2));
      if ( !v3 )
      {
        v22 = 176;
        goto LABEL_6;
      }
      *((_DWORD *)v3 + 4) = 0;
      v18 = CResponseItem::QueueResponse(v3);
      v10 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v18, 0xBDu);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v23 = *((double *)a3 + 8);
        McTemplateU0xxddffff(
          v20,
          v19,
          *((_QWORD *)this + 44),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          *((_DWORD *)a3 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
          v23,
          *(_QWORD *)&v24.X,
          *(_QWORD *)&v24.Width);
      }
    }
  }
  else
  {
    v8 = CMagnifierRenderTarget::StopSlicer(this);
    v9 = (MagnifierCaptureBitsResponse *)CTextBrush::operator new();
    if ( v9 )
      v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
             v9,
             *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 72LL),
             this,
             a2,
             &v24,
             *((_QWORD *)a3 + 2));
    if ( !v3 )
    {
      v22 = 133;
LABEL_6:
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, -2147024882, v22);
      return v10;
    }
    *((_DWORD *)v3 + 4) = 0;
    if ( v8 < 0 )
    {
      v13 = MagnifierCaptureBitsResponse::SendResponse(v3, v8);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x94u);
    }
    else
    {
      v11 = MagnifierCaptureBitsResponse::OnPresentComplete(v3);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x90u);
    }
  }
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v10;
}
