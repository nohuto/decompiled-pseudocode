/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180026140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsWhitePixelOptimizationCandidate @ 0x1800260A8 (IsWhitePixelOptimizationCandidate.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1800265D0 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r15d
  _QWORD *v4; // r12
  char v5; // r14
  __int64 v6; // rdi
  __int64 v7; // r13
  _DWORD *Value; // rbx
  int v9; // ecx
  char *v10; // rsi
  unsigned int *v11; // r13
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // r12
  char v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r12
  __int16 *v23; // rcx
  char v24; // al
  __int16 *v25; // rcx
  bool v26; // al
  char v27; // al
  CThreadContext *v29; // rax
  unsigned int v30; // ecx
  CThreadContext *v31; // rax
  __int16 v32; // [rsp+30h] [rbp-89h] BYREF
  char v33; // [rsp+32h] [rbp-87h]
  __int16 v34; // [rsp+33h] [rbp-86h] BYREF
  char v35; // [rsp+35h] [rbp-84h]
  __int16 v36; // [rsp+36h] [rbp-83h] BYREF
  char v37; // [rsp+38h] [rbp-81h]
  int v38; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int64 v39; // [rsp+40h] [rbp-79h] BYREF
  __int64 v40; // [rsp+48h] [rbp-71h] BYREF
  __int16 *v41; // [rsp+50h] [rbp-69h]
  __int16 *v42; // [rsp+58h] [rbp-61h]
  __int128 v43; // [rsp+60h] [rbp-59h] BYREF
  __int64 v44; // [rsp+70h] [rbp-49h]
  unsigned int v45[4]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v46; // [rsp+88h] [rbp-31h]
  _QWORD *v47; // [rsp+90h] [rbp-29h]
  __int64 v48; // [rsp+98h] [rbp-21h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-19h]
  char v50; // [rsp+A8h] [rbp-11h]
  __int64 v51; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-1h] BYREF
  char v53[8]; // [rsp+C8h] [rbp+Fh] BYREF
  int v54; // [rsp+D0h] [rbp+17h]
  void *retaddr; // [rsp+118h] [rbp+5Fh]

  v3 = 0;
  v47 = a3;
  v38 = 0;
  v4 = a3;
  v5 = 0;
  if ( *(__int64 *)a2 <= 0 )
    v6 = 0LL;
  else
    v6 = **(_QWORD **)(a2 + 8);
  if ( *(__int64 *)a2 > 1 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  else
    v7 = 0LL;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v29 = (CThreadContext *)operator new(0x128uLL);
    if ( !v29 || (v31 = CThreadContext::CThreadContext(v29), (Value = v31) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v31);
  }
  v9 = Value[31];
  v10 = 0LL;
  if ( v9 )
  {
    v10 = (char *)*((_QWORD *)Value + 16);
    *((_QWORD *)Value + 16) = *(_QWORD *)v10;
    Value[31] = v9 - 1;
  }
  if ( v10 || (v10 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    if ( v7 )
    {
      v36 = *(_WORD *)(v7 + 80);
      v37 = *(_BYTE *)(v7 + 82);
      v42 = &v36;
      v11 = (unsigned int *)CDrawListBitmap::CDrawListBitmap(
                              (CDrawListBitmap *)&v51,
                              (const struct CDrawListBitmap *)(v7 + 56));
      v12 = 1;
    }
    else
    {
      v32 = 257;
      v46 = 0LL;
      v33 = 1;
      v42 = &v32;
      v11 = v45;
      v12 = 2;
      *(_OWORD *)v45 = 0LL;
    }
    if ( v6 )
    {
      v13 = *(_QWORD *)(v6 + 56);
      LOWORD(v38) = *(_WORD *)(v6 + 80);
      BYTE2(v38) = *(_BYTE *)(v6 + 82);
      v41 = (__int16 *)&v38;
      v48 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = *(_QWORD *)(v6 + 64);
      v49 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = &v48;
      v50 = *(_BYTE *)(v6 + 72);
      v16 = 4;
    }
    else
    {
      v34 = 257;
      v44 = 0LL;
      v35 = 1;
      v41 = &v34;
      v15 = (__int64 *)&v43;
      v16 = 8;
      v43 = 0LL;
    }
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CCommonRenderingEffect::`vftable';
    v5 = v12 | v16;
    v17 = *v15;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    v10[32] = 0;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    v10[56] = 0;
    *((_DWORD *)v10 + 16) = 16843009;
    *((_WORD *)v10 + 34) = 257;
    v18 = *((_QWORD *)v10 + 2);
    if ( v18 != v17 )
    {
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v18 = *((_QWORD *)v10 + 2);
      }
      *((_QWORD *)v10 + 2) = v17;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v15[1];
    v20 = *((_QWORD *)v10 + 3);
    if ( v20 != v19 )
    {
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v15[1]);
        v20 = *((_QWORD *)v10 + 3);
      }
      *((_QWORD *)v10 + 3) = v19;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v10[32] = *((_BYTE *)v15 + 16);
    v21 = *(_QWORD *)v11;
    if ( *((_QWORD *)v10 + 5) != *(_QWORD *)v11 )
    {
      v39 = *(_QWORD *)v11;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v39);
      v39 = *((_QWORD *)v10 + 5);
      *((_QWORD *)v10 + 5) = v21;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
    }
    v22 = *((_QWORD *)v11 + 1);
    if ( *((_QWORD *)v10 + 6) != v22 )
    {
      v40 = *((_QWORD *)v11 + 1);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v40);
      v40 = *((_QWORD *)v10 + 6);
      *((_QWORD *)v10 + 6) = v22;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v40);
    }
    v23 = v41;
    v10[56] = *((_BYTE *)v11 + 16);
    *((_WORD *)v10 + 32) = *v23;
    v24 = *((_BYTE *)v23 + 2);
    v25 = v42;
    v10[66] = v24;
    *(_WORD *)(v10 + 67) = *v25;
    v10[69] = *((_BYTE *)v25 + 2);
    v26 = 1;
    if ( v17 )
    {
      if ( !CCommonRegistryData::m_fEnableCommonSuperSets
        || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 144LL))(v17)
        || ((*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 24LL))(v19, v53), v54) )
      {
        v26 = 0;
      }
    }
    v10[70] = v26;
    if ( !*(_QWORD *)v11 || (v27 = IsWhitePixelOptimizationCandidate(v11, 1)) != 0 )
      v27 = 1;
    v10[70] &= v27;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v4 = v47;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v43 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v43);
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    LODWORD(v25) = v48;
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( *(_QWORD *)&v45[2] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v45[2] + 16LL))(*(_QWORD *)&v45[2]);
    LODWORD(v25) = v45[0];
    if ( *(_QWORD *)v45 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v45 + 16LL))(*(_QWORD *)v45);
  }
  if ( (v5 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v52);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v51);
  }
  if ( v10 )
  {
    *v4 = v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, -2147024882, 0x33u);
  }
  return v3;
}
