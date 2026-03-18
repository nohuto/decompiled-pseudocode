/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180023580
 * Callers:
 *     <none>
 * Callees:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180023844 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180024F00 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180025878 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180025ACC (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // esi
  __int64 v19; // rcx
  CD2DTarget *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-38h] BYREF

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
      v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 24LL))(v9, v25) + 8);
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
      CD2DContext::EnsureBeginDraw(this);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 120LL))(*((_QWORD *)this + 30), v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF) == 1 && v6 != -8 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 8) + 16LL))(v6 + 8, 1LL);
    }
  }
  v12 = *((_DWORD *)this + 98);
  v13 = 0LL;
  if ( v12 )
  {
    v14 = v12 - 1;
    v13 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * v14);
  }
  else
  {
    v14 = -1;
  }
  *((_DWORD *)this + 98) = v14;
  if ( v14 )
  {
    v19 = v14 - 1;
    v20 = *(CD2DTarget **)(*((_QWORD *)this + 46) + 8 * v19);
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v20 + 3) + 8LL))(*((_QWORD **)v20 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v20 + 3);
    }
    if ( *((_BYTE *)this + 492) )
      CD2DTarget::ApplyState(v20, this);
    v17 = *((_DWORD *)this + 212);
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v17, 0x3B5u);
  }
  else
  {
    v15 = CD2DContext::EndDraw(this);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3BDu);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v13 + 24))(
           *(_QWORD *)(v13 + 24),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v24) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      *((_QWORD *)this + 58) = v13;
      return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v17, 0LL);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30), 0LL, 0LL);
  }
  if ( v13 )
  {
    v21 = *(_QWORD *)(v13 + 40);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = *(_QWORD *)(v13 + 32);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v23 = *(_QWORD *)(v13 + 24);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    operator delete((void *)v13, 0x50uLL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v17, 0LL);
}
