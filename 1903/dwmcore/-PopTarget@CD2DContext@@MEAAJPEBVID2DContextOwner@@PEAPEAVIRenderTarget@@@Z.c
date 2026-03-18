/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18004B340
 * Callers:
 *     <none>
 * Callees:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x18004C324 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18004C450 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18004D1D8 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rdi
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  __int64 v20; // rcx
  CD2DTarget *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  CD2DTarget *v25; // rbp
  __int64 i; // rsi
  CD2DTarget *v27; // r15
  __int64 v28; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    if ( *((_QWORD *)this + 23) )
    {
      CBatchOptimizer::Flush(*((CBatchOptimizer **)this + 23));
      v5 = *((_QWORD *)this + 22);
    }
    *(_DWORD *)(v5 + 52) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 98);
      v8 = 0LL;
      if ( v7 )
        v8 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v7 - 1));
      v9 = *(_QWORD *)(v8 + 24);
      v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 24LL))(v9, v29) + 8);
      *(_DWORD *)(v6 + 72) = v10;
      if ( v10 == 1 )
        *(float *)(v6 + 76) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v9 + 152LL))(v9);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
      *(float *)(v6 + 56) = 2.0 / (float)*(int *)(v11 + 140);
      LODWORD(v11) = *(_DWORD *)(v11 + 144);
      *(_QWORD *)(v6 + 40) = 0LL;
      *(_DWORD *)(v6 + 64) = -1082130432;
      *(_DWORD *)(v6 + 68) = 1065353216;
      *(float *)(v6 + 60) = -2.0 / (float)(int)v11;
      if ( !*((_BYTE *)this + 492) )
      {
        v25 = 0LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 384LL))(*((_QWORD *)this + 29));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 98); v25 = v27 )
        {
          v27 = *(CD2DTarget **)(*((_QWORD *)this + 46) + 8 * i);
          if ( v25 )
            *((_BYTE *)v25 + 48) = 0;
          CD2DTarget::ApplyState(v27, this);
          i = (unsigned int)(i + 1);
        }
        *((_BYTE *)this + 492) = 1;
      }
      v12 = *((_QWORD *)this + 30);
      *((_BYTE *)this + 493) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 120LL))(v12, v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF) == 1 && v6 != -8 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 8) + 16LL))(v6 + 8, 1LL);
    }
  }
  v13 = *((_DWORD *)this + 98);
  v14 = 0LL;
  if ( v13 )
  {
    v15 = v13 - 1;
    v14 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * v15);
  }
  else
  {
    v15 = -1;
  }
  *((_DWORD *)this + 98) = v15;
  if ( v15 )
  {
    v20 = v15 - 1;
    v21 = *(CD2DTarget **)(*((_QWORD *)this + 46) + 8 * v20);
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v21 + 3) + 8LL))(*((_QWORD **)v21 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v21 + 3);
    }
    if ( *((_BYTE *)this + 492) )
      CD2DTarget::ApplyState(v21, this);
    v18 = *((_DWORD *)this + 220);
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v18, 0x3B5u, 0LL);
  }
  else
  {
    v16 = CD2DContext::EndDraw(this);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3BDu, 0LL);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 24))(
           *(_QWORD *)(v14 + 24),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v28) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      *((_QWORD *)this + 58) = v14;
      return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v18, 0LL);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30), 0LL, 0LL);
  }
  if ( v14 )
  {
    v22 = *(_QWORD *)(v14 + 40);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v23 = *(_QWORD *)(v14 + 32);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = *(_QWORD *)(v14 + 24);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    operator delete((void *)v14, 0x50uLL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v18, 0LL);
}
