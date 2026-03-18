/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800635C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800AEEF0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801D62F4 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  float *v3; // rdi
  unsigned int v5; // ebp
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  char v9; // dl
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  char v14; // al
  bool v15; // cl
  _DWORD *Value; // rdi
  int v17; // ecx
  _QWORD *v18; // rbx
  void *v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  CThreadContext *v25; // rax
  unsigned int v26; // ecx
  CThreadContext *v27; // rax
  __int64 v28; // r8
  char *v29; // rax
  unsigned int v30; // [rsp+20h] [rbp-B8h]
  _DWORD v31[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v32[3]; // [rsp+40h] [rbp-98h] BYREF
  int v33; // [rsp+70h] [rbp-68h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = (float *)((char *)this + 136);
  v5 = 0;
  if ( a2 )
  {
    v6 = *(_OWORD *)v3;
    v7 = *(_OWORD *)((char *)this + 152);
    v33 = *((_DWORD *)this + 46);
    v32[0] = v6;
    v8 = *(_OWORD *)((char *)this + 168);
    v3 = (float *)v32;
    v32[1] = v7;
    *(float *)&v7 = a2->height - *((float *)this + 37);
    v32[2] = v8;
    *((_QWORD *)&v32[0] + 1) = __PAIR64__(v7, a2->width - *((float *)this + 36));
  }
  v9 = *((_BYTE *)this + 184);
  v10 = *v3;
  v11 = v3[1];
  if ( v9 )
  {
    v12 = v10 + v3[2];
    v13 = v11 + v3[3];
  }
  else
  {
    v12 = v3[2];
    v13 = v3[3];
  }
  if ( v12 > v10 && v13 > v11 )
  {
    v14 = *((float *)this + 38) > 0.0 || *((float *)this + 39) > 0.0;
    if ( !v9 )
    {
      v15 = *((float *)this + 40) > 0.0
         || *((float *)this + 41) > 0.0
         || *((float *)this + 42) > 0.0
         || *((float *)this + 43) > 0.0
         || *((float *)this + 44) > 0.0
         || *((float *)this + 45) > 0.0;
      v14 |= v15;
    }
    if ( !v14 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v25 = (CThreadContext *)operator new(0x138uLL);
        if ( !v25 || (v27 = CThreadContext::CThreadContext(v25), (Value = v27) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr, v28);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v27);
      }
      v17 = Value[3];
      v18 = 0LL;
      if ( v17 )
      {
        v18 = (_QWORD *)*((_QWORD *)Value + 2);
        *((_QWORD *)Value + 2) = *v18;
        Value[3] = v17 - 1;
      }
      if ( !v18 )
      {
        v18 = DefaultHeap::Alloc(0x48uLL);
        if ( !v18 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr, v22);
      }
      v18[1] = 0LL;
      *v18 = &CRectanglesShape::`vftable';
      v18[2] = v18 + 6;
      v18[3] = v18 + 6;
      *((_DWORD *)v18 + 8) = 1;
      *(_QWORD *)((char *)v18 + 36) = 1LL;
      v18[8] = 0LL;
      v19 = (void *)v18[2];
      if ( v19 != (void *)v18[3] )
      {
        operator delete(v19);
        v18[2] = v18[3];
        *((_DWORD *)v18 + 9) = *((_DWORD *)v18 + 8);
      }
      v20 = v18[8];
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v18[8] = 0LL;
      }
      *(float *)v31 = v10;
      *(float *)&v31[1] = v11;
      *(float *)&v31[2] = v12;
      *(float *)&v31[3] = v13;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        v18 + 2,
        v31,
        1LL);
      goto LABEL_29;
    }
    v23 = operator new(0x50uLL);
    v18 = v23;
    if ( v23 )
    {
      v23[1] = 0LL;
      *v23 = &CRoundedRectangleShape::`vftable';
      *((_OWORD *)v23 + 1) = *(_OWORD *)v3;
      *((_OWORD *)v23 + 2) = *((_OWORD *)v3 + 1);
      *((_OWORD *)v23 + 3) = *((_OWORD *)v3 + 2);
      *((float *)v23 + 16) = v3[12];
      v23[9] = 0LL;
      goto LABEL_29;
    }
    v30 = 216;
LABEL_49:
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, v30, 0LL);
    return v5;
  }
  v29 = (char *)CRectanglesShape::operator new((unsigned __int64)this);
  v18 = v29;
  if ( !v29 )
  {
    v30 = 209;
    goto LABEL_49;
  }
  *((_QWORD *)v29 + 1) = 0LL;
  *(_QWORD *)v29 = &CRectanglesShape::`vftable';
  *((_QWORD *)v29 + 2) = v29 + 48;
  *((_QWORD *)v29 + 3) = v29 + 48;
  *((_DWORD *)v29 + 8) = 1;
  *(_QWORD *)(v29 + 36) = 1LL;
  *((_QWORD *)v29 + 8) = 0LL;
LABEL_29:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v18;
  *((_BYTE *)a3 + 8) = 1;
  return v5;
}
