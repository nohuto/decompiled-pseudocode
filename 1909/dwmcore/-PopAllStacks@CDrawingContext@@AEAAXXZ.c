/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18005AEC0
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180050FCC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18005B238 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180178EA4 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v1; // edi
  int v3; // eax
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // r14
  int v7; // eax
  int v8; // eax
  unsigned int i; // esi
  void *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int j; // r14d
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  void *v51; // [rsp+60h] [rbp+30h] BYREF

  v1 = 0;
  *((_DWORD *)this + 112) = 0;
  v3 = *((_DWORD *)this + 114);
  v4 = 64LL;
  if ( v3 == 10 )
  {
    v27 = *((_DWORD *)this + 118);
    v28 = 64LL;
    if ( v27 > 0x40 )
      v28 = v27;
    if ( (unsigned __int64)(3 * v28) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v28) <= *((_DWORD *)this + 113) )
    {
      v51 = 0LL;
      v36 = HrMalloc(0x10uLL, (unsigned int)v28, &v51);
      if ( v36 >= 0 )
      {
        operator delete(*((void **)this + 58));
        *((_QWORD *)this + 58) = v51;
        *((_DWORD *)this + 113) = v28;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 118) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v3 + 1;
  }
  *((_DWORD *)this + 114) = v5;
  v6 = 8LL;
  *((_DWORD *)this + 120) = 0;
  v7 = *((_DWORD *)this + 122);
  if ( v7 == 8 )
  {
    v24 = *((_DWORD *)this + 126);
    v25 = 8LL;
    if ( v24 > 8 )
      v25 = v24;
    if ( (unsigned __int64)(3 * v25) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v25) <= *((_DWORD *)this + 121) )
    {
      v51 = 0LL;
      v38 = HrMalloc(0x44uLL, (unsigned int)v25, &v51);
      if ( v38 >= 0 )
      {
        operator delete(*((void **)this + 62));
        *((_QWORD *)this + 62) = v51;
        *((_DWORD *)this + 121) = v25;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 126) = 0;
    v8 = 0;
  }
  else
  {
    v8 = v7 + 1;
  }
  *((_DWORD *)this + 122) = v8;
  *((_DWORD *)this + 128) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize();
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal((__int64)this);
  for ( i = 0; i < *((_DWORD *)this + 174); ++i )
  {
    v40 = *(_QWORD *)(*((_QWORD *)this + 84) + 16LL * i);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  *((_DWORD *)this + 174) = 0;
  v10 = (void *)*((_QWORD *)this + 84);
  if ( v10 != *((void **)this + 85) )
  {
    operator delete(v10);
    *((_QWORD *)this + 84) = *((_QWORD *)this + 85);
    *((_DWORD *)this + 173) = *((_DWORD *)this + 172);
  }
  v11 = *((_QWORD *)this + 97);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 97) = 0LL;
  }
  *((_DWORD *)this + 220) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 856, 8LL);
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v12 = *((_DWORD *)this + 246);
  if ( v12 == 10 )
  {
    v29 = *((_DWORD *)this + 250);
    v30 = 64LL;
    if ( v29 > 0x40 )
      v30 = v29;
    if ( (unsigned __int64)(3 * v30) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v30) <= *((_DWORD *)this + 245) )
    {
      v51 = 0LL;
      v41 = HrMalloc(0x1CuLL, (unsigned int)v30, &v51);
      if ( v41 >= 0 )
      {
        operator delete(*((void **)this + 124));
        *((_QWORD *)this + 124) = v51;
        *((_DWORD *)this + 245) = v30;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 250) = 0;
    v13 = 0;
  }
  else
  {
    v13 = v12 + 1;
  }
  *((_DWORD *)this + 246) = v13;
  *((_DWORD *)this + 258) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1008, 80LL);
  *((_DWORD *)this + 808) = 0;
  v15 = *((_DWORD *)this + 810);
  if ( v15 == 8 )
  {
    v26 = *((_DWORD *)this + 814);
    v14 = 0xFFFFFFFFLL;
    if ( v26 > 8 )
      v6 = v26;
    if ( (unsigned __int64)(3 * v6) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v6) <= *((_DWORD *)this + 809) )
    {
      v51 = 0LL;
      v43 = HrMalloc(0x10uLL, (unsigned int)v6, &v51);
      if ( v43 >= 0 )
      {
        operator delete(*((void **)this + 406));
        *((_QWORD *)this + 406) = v51;
        *((_DWORD *)this + 809) = v6;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 814) = 0;
    v16 = 0;
  }
  else
  {
    v16 = v15 + 1;
  }
  *((_DWORD *)this + 810) = v16;
  for ( j = 0; j < *((_DWORD *)this + 466); ++j )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v14,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 230) + 136LL * j));
  *((_DWORD *)this + 466) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1840, 136LL);
  *((_DWORD *)this + 816) = 0;
  v19 = *((_DWORD *)this + 818);
  if ( v19 == 10 )
  {
    v31 = *((_DWORD *)this + 822);
    v32 = 64LL;
    if ( v31 > 0x40 )
      v32 = v31;
    if ( (unsigned __int64)(3 * v32) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v32) <= *((_DWORD *)this + 817) )
    {
      v51 = 0LL;
      v45 = HrMalloc(4uLL, (unsigned int)v32, &v51);
      if ( v45 >= 0 )
      {
        operator delete(*((void **)this + 410));
        *((_QWORD *)this + 410) = v51;
        *((_DWORD *)this + 817) = v32;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 822) = 0;
    v20 = 0;
  }
  else
  {
    v20 = v19 + 1;
  }
  *((_DWORD *)this + 818) = v20;
  *((_DWORD *)this + 870) = 0;
  v21 = *((_DWORD *)this + 872);
  if ( v21 == 10 )
  {
    v33 = *((_DWORD *)this + 876);
    v34 = 64LL;
    if ( v33 > 0x40 )
      v34 = v33;
    if ( (unsigned __int64)(3 * v34) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v34) <= *((_DWORD *)this + 871) )
    {
      v51 = 0LL;
      v47 = HrMalloc(0x10uLL, (unsigned int)v34, &v51);
      if ( v47 >= 0 )
      {
        operator delete(*((void **)this + 437));
        *((_QWORD *)this + 437) = v51;
        *((_DWORD *)this + 871) = v34;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 876) = 0;
    v22 = 0;
  }
  else
  {
    v22 = v21 + 1;
  }
  *((_DWORD *)this + 872) = v22;
  *((_DWORD *)this + 824) = 0;
  v23 = *((_DWORD *)this + 826);
  if ( v23 == 10 )
  {
    v35 = *((_DWORD *)this + 830);
    if ( v35 > 0x40 )
      v4 = v35;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 825) )
    {
      v51 = 0LL;
      v49 = HrMalloc(1uLL, (unsigned int)v4, &v51);
      if ( v49 >= 0 )
      {
        operator delete(*((void **)this + 414));
        *((_QWORD *)this + 414) = v51;
        *((_DWORD *)this + 825) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 830) = 0;
  }
  else
  {
    v1 = v23 + 1;
  }
  *((_DWORD *)this + 826) = v1;
}
