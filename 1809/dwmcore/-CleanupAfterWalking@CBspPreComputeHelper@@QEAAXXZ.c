/*
 * XREFs of ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18004B614
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x18004B950 (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18004BE94 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CBspPreComputeHelper::CleanupAfterWalking(CBspPreComputeHelper *this)
{
  int v1; // edi
  int v3; // eax
  int v4; // r14d
  __int64 v5; // r15
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbp
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rbp
  unsigned int v28; // ecx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rbp
  unsigned int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rbp
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  __int64 v38; // rbp
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  SIZE_T v43; // r8
  LPVOID v44; // rsi
  int v45; // r9d
  SIZE_T v46; // r8
  LPVOID v47; // rsi
  int v48; // r9d
  SIZE_T v49; // r8
  LPVOID v50; // rsi
  int v51; // r9d
  SIZE_T v52; // r8
  LPVOID v53; // rsi
  int v54; // r9d
  SIZE_T v55; // r8
  LPVOID v56; // rsi
  int v57; // r9d
  SIZE_T v58; // r8
  LPVOID v59; // rsi
  int v60; // r9d
  SIZE_T v61; // r8
  LPVOID v62; // rsi

  v1 = 0;
  *((_DWORD *)this + 88) = 0;
  v3 = *((_DWORD *)this + 82);
  v4 = -2147024882;
  v5 = 64LL;
  if ( v3 != 10 )
  {
    v6 = v3 + 1;
    goto LABEL_3;
  }
  v26 = *((_DWORD *)this + 86);
  v27 = 64LL;
  v28 = -1;
  if ( v26 > 0x40 )
    v27 = v26;
  v29 = 3 * v27;
  if ( (unsigned __int64)(3 * v27) <= 0xFFFFFFFF )
    v28 = 3 * v27;
  if ( v29 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v29 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v28 <= *((_DWORD *)this + 81) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v27 <= 4 )
    {
      v45 = -2147024809;
    }
    else
    {
      v43 = 4LL * (unsigned int)v27;
      if ( !v43 )
        v43 = 1LL;
      v44 = HeapAlloc(WPF::g_processHeap, 0, v43);
      if ( v44 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 42));
        *((_QWORD *)this + 42) = v44;
        *((_DWORD *)this + 81) = v27;
        goto LABEL_36;
      }
      v45 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v45, 0x100u);
  }
LABEL_36:
  *((_DWORD *)this + 86) = 0;
  v6 = 0;
LABEL_3:
  *((_DWORD *)this + 82) = v6;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 288);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 256);
  v7 = *((_DWORD *)this + 58);
  if ( v7 != 10 )
  {
    v8 = v7 + 1;
    goto LABEL_5;
  }
  v30 = *((_DWORD *)this + 62);
  v31 = 64LL;
  v32 = -1;
  if ( v30 > 0x40 )
    v31 = v30;
  v33 = 3 * v31;
  if ( (unsigned __int64)(3 * v31) <= 0xFFFFFFFF )
    v32 = 3 * v31;
  if ( v33 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v33 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v32 <= *((_DWORD *)this + 57) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v31 <= 4 )
    {
      v48 = -2147024809;
    }
    else
    {
      v46 = 4LL * (unsigned int)v31;
      if ( !v46 )
        v46 = 1LL;
      v47 = HeapAlloc(WPF::g_processHeap, 0, v46);
      if ( v47 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 30));
        *((_QWORD *)this + 30) = v47;
        *((_DWORD *)this + 57) = v31;
        goto LABEL_43;
      }
      v48 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v48, 0x100u);
  }
LABEL_43:
  *((_DWORD *)this + 62) = 0;
  v8 = 0;
LABEL_5:
  *((_DWORD *)this + 58) = v8;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 192);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 160);
  v9 = *((_DWORD *)this + 34);
  if ( v9 != 10 )
  {
    v10 = v9 + 1;
    goto LABEL_7;
  }
  v34 = *((_DWORD *)this + 38);
  v35 = 64LL;
  v36 = -1;
  if ( v34 > 0x40 )
    v35 = v34;
  v37 = 3 * v35;
  if ( (unsigned __int64)(3 * v35) <= 0xFFFFFFFF )
    v36 = 3 * v35;
  if ( v37 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v37 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v36 <= *((_DWORD *)this + 33) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v35 <= 4 )
    {
      v51 = -2147024809;
    }
    else
    {
      v49 = 4LL * (unsigned int)v35;
      if ( !v49 )
        v49 = 1LL;
      v50 = HeapAlloc(WPF::g_processHeap, 0, v49);
      if ( v50 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 18));
        *((_QWORD *)this + 18) = v50;
        *((_DWORD *)this + 33) = v35;
        goto LABEL_50;
      }
      v51 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v51, 0x100u);
  }
LABEL_50:
  *((_DWORD *)this + 38) = 0;
  v10 = 0;
LABEL_7:
  *((_DWORD *)this + 34) = v10;
  v11 = *((_DWORD *)this + 26);
  if ( v11 != 8 )
  {
    v12 = v11 + 1;
    goto LABEL_9;
  }
  v18 = 8LL;
  v19 = -1;
  if ( *((_DWORD *)this + 30) > 8u )
    v18 = *((unsigned int *)this + 30);
  v20 = v18;
  v21 = 3 * v18;
  if ( (unsigned __int64)(3 * v18) <= 0xFFFFFFFF )
    v19 = 3 * v18;
  if ( v21 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v21 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v19 <= *((_DWORD *)this + 25) )
  {
    if ( (_DWORD)v18 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v18 > 0x44 )
    {
      v52 = 68LL * (unsigned int)v18;
      if ( !v52 )
        v52 = 1LL;
      v53 = HeapAlloc(WPF::g_processHeap, 0, v52);
      if ( v53 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 14));
        *((_QWORD *)this + 14) = v53;
        *((_DWORD *)this + 25) = v18;
        goto LABEL_22;
      }
      v54 = -2147024882;
    }
    else
    {
      v54 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v54, 0x100u);
  }
LABEL_22:
  *((_DWORD *)this + 30) = 0;
  v12 = 0;
LABEL_9:
  *((_DWORD *)this + 26) = v12;
  v13 = *((_DWORD *)this + 18);
  if ( v13 != 8 )
  {
    v14 = v13 + 1;
    goto LABEL_11;
  }
  v22 = 8LL;
  v23 = -1;
  if ( *((_DWORD *)this + 22) > 8u )
    v22 = *((unsigned int *)this + 22);
  v24 = v22;
  v25 = 3 * v22;
  if ( (unsigned __int64)(3 * v22) <= 0xFFFFFFFF )
    v23 = 3 * v22;
  if ( v25 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v25 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v23 <= *((_DWORD *)this + 17) )
  {
    if ( (_DWORD)v22 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v22 > 0x44 )
    {
      v55 = 68LL * (unsigned int)v22;
      if ( !v55 )
        v55 = 1LL;
      v56 = HeapAlloc(WPF::g_processHeap, 0, v55);
      if ( v56 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 10));
        *((_QWORD *)this + 10) = v56;
        *((_DWORD *)this + 17) = v22;
        goto LABEL_29;
      }
      v57 = -2147024882;
    }
    else
    {
      v57 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v57, 0x100u);
  }
LABEL_29:
  *((_DWORD *)this + 22) = 0;
  v14 = 0;
LABEL_11:
  *((_DWORD *)this + 18) = v14;
  v15 = *((_DWORD *)this + 10);
  if ( v15 != 10 )
  {
    v16 = v15 + 1;
    goto LABEL_13;
  }
  v38 = 64LL;
  v39 = -1;
  if ( *((_DWORD *)this + 14) > 0x40u )
    v38 = *((unsigned int *)this + 14);
  v40 = 3 * v38;
  if ( (unsigned __int64)(3 * v38) <= 0xFFFFFFFF )
    v39 = 3 * v38;
  if ( v40 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v40 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v39 <= *((_DWORD *)this + 9) )
  {
    if ( (_DWORD)v38 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v38 > 8 )
    {
      v58 = 8LL * (unsigned int)v38;
      if ( !v58 )
        v58 = 1LL;
      v59 = HeapAlloc(WPF::g_processHeap, 0, v58);
      if ( v59 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 6));
        *((_QWORD *)this + 6) = v59;
        *((_DWORD *)this + 9) = v38;
        goto LABEL_57;
      }
      v60 = -2147024882;
    }
    else
    {
      v60 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v60, 0x100u);
  }
LABEL_57:
  *((_DWORD *)this + 14) = 0;
  v16 = 0;
LABEL_13:
  *((_DWORD *)this + 10) = v16;
  v17 = *((_DWORD *)this + 2);
  if ( v17 == 10 )
  {
    v41 = -1;
    if ( *((_DWORD *)this + 6) > 0x40u )
      v5 = *((unsigned int *)this + 6);
    v42 = 3 * v5;
    if ( (unsigned __int64)(3 * v5) <= 0xFFFFFFFF )
      v41 = 3 * v5;
    if ( v42 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v42 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v41 <= *((_DWORD *)this + 1) )
    {
      if ( (_DWORD)v5 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v5 > 8 )
      {
        v61 = 8LL * (unsigned int)v5;
        if ( !v61 )
          v61 = 1LL;
        v62 = HeapAlloc(WPF::g_processHeap, 0, v61);
        if ( v62 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 2));
          *((_QWORD *)this + 2) = v62;
          *((_DWORD *)this + 1) = v5;
          goto LABEL_64;
        }
      }
      else
      {
        v4 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v4, 0x100u);
    }
LABEL_64:
    *((_DWORD *)this + 6) = 0;
    goto LABEL_15;
  }
  v1 = v17 + 1;
LABEL_15:
  *((_DWORD *)this + 2) = v1;
}
