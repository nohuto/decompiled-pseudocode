/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180072E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180072A1C (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     IsWhitePixelOptimizationCandidate @ 0x180073CD8 (IsWhitePixelOptimizationCandidate.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
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
  unsigned int *v11; // r12
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // r13
  char v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // r13
  __int16 *v23; // rcx
  char v24; // al
  __int16 *v25; // rcx
  bool v26; // al
  char v27; // al
  CThreadContext *v29; // rax
  unsigned int v30; // ecx
  CThreadContext *v31; // rax
  __int64 v32; // r8
  __int16 v33; // [rsp+30h] [rbp-99h] BYREF
  char v34; // [rsp+32h] [rbp-97h]
  __int16 v35; // [rsp+33h] [rbp-96h] BYREF
  char v36; // [rsp+35h] [rbp-94h]
  __int16 v37; // [rsp+36h] [rbp-93h] BYREF
  char v38; // [rsp+38h] [rbp-91h]
  int v39; // [rsp+3Ch] [rbp-8Dh] BYREF
  __int64 v40; // [rsp+40h] [rbp-89h] BYREF
  __int64 v41; // [rsp+48h] [rbp-81h] BYREF
  __int16 *v42; // [rsp+50h] [rbp-79h]
  __int16 *v43; // [rsp+58h] [rbp-71h]
  _QWORD *v44; // [rsp+60h] [rbp-69h]
  __int64 v45; // [rsp+68h] [rbp-61h] BYREF
  __int64 v46[2]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v47; // [rsp+80h] [rbp-49h] BYREF
  __int64 v48; // [rsp+88h] [rbp-41h]
  char v49; // [rsp+90h] [rbp-39h]
  unsigned int v50[2]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-29h]
  __int64 v52; // [rsp+A8h] [rbp-21h]
  __int64 v53; // [rsp+B0h] [rbp-19h]
  __int64 v54; // [rsp+B8h] [rbp-11h]
  __int64 v55; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-1h] BYREF
  char v57[8]; // [rsp+D8h] [rbp+Fh] BYREF
  int v58; // [rsp+E0h] [rbp+17h]
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  v3 = 0;
  v44 = a3;
  v39 = 0;
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
    v29 = (CThreadContext *)operator new(0x138uLL);
    if ( !v29 || (v31 = CThreadContext::CThreadContext(v29), (Value = v31) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v32);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v31);
  }
  v9 = Value[35];
  v10 = 0LL;
  if ( v9 )
  {
    v10 = (char *)*((_QWORD *)Value + 18);
    *((_QWORD *)Value + 18) = *(_QWORD *)v10;
    Value[35] = v9 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    if ( v7 )
    {
      v37 = *(_WORD *)(v7 + 80);
      v38 = *(_BYTE *)(v7 + 82);
      v43 = &v37;
      v11 = (unsigned int *)CDrawListBitmap::CDrawListBitmap(
                              (CDrawListBitmap *)&v55,
                              (const struct CDrawListBitmap *)(v7 + 56));
      v12 = 1;
    }
    else
    {
      v33 = 257;
      v34 = 1;
      v43 = &v33;
      v11 = v50;
      *(_QWORD *)v50 = 0LL;
      v12 = 2;
      v51 = 0LL;
      v52 = 0LL;
    }
    if ( v6 )
    {
      v13 = *(_QWORD *)(v6 + 56);
      LOWORD(v39) = *(_WORD *)(v6 + 80);
      BYTE2(v39) = *(_BYTE *)(v6 + 82);
      v42 = (__int16 *)&v39;
      v47 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = *(_QWORD *)(v6 + 64);
      v48 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = &v47;
      v49 = *(_BYTE *)(v6 + 72);
      v16 = 4;
    }
    else
    {
      v35 = 257;
      v36 = 1;
      v42 = &v35;
      v15 = &v45;
      v45 = 0LL;
      v16 = 8;
      v46[0] = 0LL;
      v46[1] = 0LL;
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
      v53 = v17;
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
      v54 = v15[1];
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
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
      v40 = *(_QWORD *)v11;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v40);
      v40 = *((_QWORD *)v10 + 5);
      *((_QWORD *)v10 + 5) = v21;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v40);
    }
    v22 = *((_QWORD *)v11 + 1);
    if ( *((_QWORD *)v10 + 6) != v22 )
    {
      v41 = *((_QWORD *)v11 + 1);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v41);
      v41 = *((_QWORD *)v10 + 6);
      *((_QWORD *)v10 + 6) = v22;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v41);
    }
    v23 = v42;
    v10[56] = *((_BYTE *)v11 + 16);
    *((_WORD *)v10 + 32) = *v23;
    v24 = *((_BYTE *)v23 + 2);
    v25 = v43;
    v10[66] = v24;
    *(_WORD *)(v10 + 67) = *v25;
    v10[69] = *((_BYTE *)v25 + 2);
    v26 = 1;
    if ( v17 )
    {
      if ( !CCommonRegistryData::m_fEnableCommonSuperSets
        || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 144LL))(v17)
        || ((*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 24LL))(v19, v57), v58) )
      {
        v26 = 0;
      }
    }
    v10[70] = v26;
    if ( !*(_QWORD *)v11 || (v27 = IsWhitePixelOptimizationCandidate(v11, 1LL)) != 0 )
      v27 = 1;
    v10[70] &= v27;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v4 = v44;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v46);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v45);
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    LODWORD(v25) = v47;
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    LODWORD(v25) = v50[0];
    if ( *(_QWORD *)v50 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v50 + 16LL))(*(_QWORD *)v50);
  }
  if ( (v5 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v56);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v55);
  }
  if ( v10 )
  {
    *v4 = v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, -2147024882, 0x31u, 0LL);
  }
  return v3;
}
