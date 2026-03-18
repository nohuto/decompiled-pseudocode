/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006B2C0
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800C2B80 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x18004B950 (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18004BE94 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800643B0 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006B4DC (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18006B5B4 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // ebp
  int v3; // eax
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rsi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  SIZE_T v26; // r8
  LPVOID v27; // rdi
  int v28; // r9d
  SIZE_T v29; // r8
  LPVOID v30; // rsi
  int v31; // r9d
  SIZE_T v32; // r8
  LPVOID v33; // rdi
  int v34; // r9d
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  SIZE_T v38; // r8
  LPVOID v39; // rdi

  *((_DWORD *)this + 112) = 0;
  v2 = -2147024882;
  v3 = *((_DWORD *)this + 114);
  v4 = 64LL;
  if ( v3 != 10 )
  {
    v5 = v3 + 1;
    goto LABEL_3;
  }
  v17 = *((_DWORD *)this + 118);
  v18 = 64LL;
  v19 = -1;
  if ( v17 > 0x40 )
    v18 = v17;
  v20 = 3 * v18;
  if ( (unsigned __int64)(3 * v18) <= 0xFFFFFFFF )
    v19 = 3 * v18;
  if ( v20 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v19 <= *((_DWORD *)this + 113) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v18 <= 0x10 )
    {
      v28 = -2147024809;
    }
    else
    {
      v26 = 16LL * (unsigned int)v18;
      if ( !v26 )
        v26 = 1LL;
      v27 = HeapAlloc(WPF::g_processHeap, 0, v26);
      if ( v27 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 58));
        *((_QWORD *)this + 58) = v27;
        *((_DWORD *)this + 113) = v18;
        goto LABEL_25;
      }
      v28 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v28, 0x100u);
  }
LABEL_25:
  *((_DWORD *)this + 118) = 0;
  v5 = 0;
LABEL_3:
  *((_DWORD *)this + 114) = v5;
  v6 = 8LL;
  *((_DWORD *)this + 120) = 0;
  v7 = *((_DWORD *)this + 122);
  if ( v7 == 8 )
  {
    v13 = *((_DWORD *)this + 126);
    v14 = -1;
    if ( v13 > 8 )
      v6 = v13;
    v15 = v6;
    v16 = 3 * v6;
    if ( (unsigned __int64)(3 * v6) <= 0xFFFFFFFF )
      v14 = 3 * v6;
    if ( v16 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v16 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v14 <= *((_DWORD *)this + 121) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x44 )
      {
        v31 = -2147024809;
      }
      else
      {
        v29 = 68LL * (unsigned int)v6;
        if ( !v29 )
          v29 = 1LL;
        v30 = HeapAlloc(WPF::g_processHeap, 0, v29);
        if ( v30 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 62));
          *((_QWORD *)this + 62) = v30;
          *((_DWORD *)this + 121) = v6;
          goto LABEL_18;
        }
        v31 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v31, 0x100u);
    }
LABEL_18:
    *((_DWORD *)this + 126) = 0;
    v8 = 0;
    goto LABEL_5;
  }
  v8 = v7 + 1;
LABEL_5:
  *((_DWORD *)this + 122) = v8;
  *((_DWORD *)this + 128) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((__int64)this + 512);
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal((__int64)this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 672));
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v9 = *((_DWORD *)this + 246);
  if ( v9 != 10 )
  {
    v10 = v9 + 1;
    goto LABEL_9;
  }
  v21 = *((_DWORD *)this + 250);
  v22 = 64LL;
  v23 = -1;
  if ( v21 > 0x40 )
    v22 = v21;
  v24 = v22;
  v25 = 3 * v22;
  if ( (unsigned __int64)(3 * v22) <= 0xFFFFFFFF )
    v23 = 3 * v22;
  if ( v25 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v25 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v23 <= *((_DWORD *)this + 245) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v22 <= 0x1C )
    {
      v34 = -2147024809;
    }
    else
    {
      v32 = 28LL * (unsigned int)v22;
      if ( !v32 )
        v32 = 1LL;
      v33 = HeapAlloc(WPF::g_processHeap, 0, v32);
      if ( v33 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 124));
        *((_QWORD *)this + 124) = v33;
        *((_DWORD *)this + 245) = v22;
        goto LABEL_32;
      }
      v34 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v34, 0x100u);
  }
LABEL_32:
  *((_DWORD *)this + 250) = 0;
  v10 = 0;
LABEL_9:
  *((_DWORD *)this + 246) = v10;
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  *((_DWORD *)this + 816) = 0;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((__int64)this + 3264);
  *((_DWORD *)this + 870) = 0;
  v11 = *((_DWORD *)this + 872);
  if ( v11 == 10 )
  {
    v35 = *((_DWORD *)this + 876);
    v36 = -1;
    if ( v35 > 0x40 )
      v4 = v35;
    v37 = 3 * v4;
    if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
      v36 = 3 * v4;
    if ( v37 <= 0xFFFFFFFF )
    {
      if ( v36 <= *((_DWORD *)this + 871) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 <= 0x10 )
        {
          v2 = -2147024809;
        }
        else
        {
          v38 = 16LL * (unsigned int)v4;
          if ( !v38 )
            v38 = 1LL;
          v39 = HeapAlloc(WPF::g_processHeap, 0, v38);
          if ( v39 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 437));
            *((_QWORD *)this + 437) = v39;
            *((_DWORD *)this + 871) = v4;
            goto LABEL_75;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v2, 0x100u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v37 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
LABEL_75:
    *((_DWORD *)this + 876) = 0;
    v12 = 0;
    goto LABEL_11;
  }
  v12 = v11 + 1;
LABEL_11:
  *((_DWORD *)this + 872) = v12;
  *((_DWORD *)this + 824) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((__int64)this + 3296);
}
