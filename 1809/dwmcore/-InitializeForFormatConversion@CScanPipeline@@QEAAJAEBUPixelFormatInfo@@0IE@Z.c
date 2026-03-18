/*
 * XREFs of ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180215CE4
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180215984 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x180215BD0 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 *     ?AllocateBuffers@CSPIntermediateBuffers@@QEAAJ_JI@Z @ 0x180215C20 (-AllocateBuffers@CSPIntermediateBuffers@@QEAAJ_JI@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x180216078 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802161A0 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x180216588 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 */

__int64 __fastcall CScanPipeline::InitializeForFormatConversion(
        void **this,
        const struct PixelFormatInfo *a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4)
{
  __int64 v8; // rdx
  int Buffers; // eax
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  void (__fastcall *v13)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-68h]
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v19; // [rsp+40h] [rbp-48h]
  char v20; // [rsp+42h] [rbp-46h]
  int v21; // [rsp+44h] [rbp-44h]
  __m128i si128; // [rsp+48h] [rbp-40h]

  CScanPipeline::ResetPipeline((CScanPipeline *)this);
  WPF::ProcessHeapImpl::Free(this[80]);
  this[80] = 0LL;
  Buffers = CSPIntermediateBuffers::AllocateBuffers((CSPIntermediateBuffers *)(this + 80), v8, a4);
  v11 = Buffers;
  if ( Buffers < 0 )
  {
    v17 = 70;
    goto LABEL_22;
  }
  v21 = 0;
  v19 = 257;
  v20 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v18[0] = this;
  v18[1] = this + 80;
  Buffers = ScanPipelineBuilder::Append_Convert(v18, a2, a3);
  v11 = Buffers;
  if ( Buffers < 0 )
  {
    v17 = 85;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)(v18[0] + 32LL) )
  {
    v12 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 )
    {
      v13 = Copy_128;
    }
    else
    {
      if ( v12 > 9 )
      {
        if ( v12 <= 11 )
        {
          v13 = Copy_64;
          goto LABEL_14;
        }
        if ( v12 == 24 || v12 == 28 || (unsigned int)(v12 - 87) <= 1 )
        {
          v13 = Copy_32;
          goto LABEL_14;
        }
      }
      v13 = 0LL;
    }
LABEL_14:
    Buffers = ScanPipelineBuilder::AddOp_Binary(v18, v13);
    v11 = Buffers;
    if ( Buffers < 0 )
    {
      v17 = 97;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Buffers, v17);
      return (unsigned int)v11;
    }
  }
  v14 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v18);
  v11 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x95u);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x64u);
  return (unsigned int)v11;
}
