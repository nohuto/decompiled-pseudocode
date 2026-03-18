/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180042E30
 * Callers:
 *     <none>
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x180020524 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800580A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // ebp
  float *v4; // rdi
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
  __int64 v19; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // ecx
  _QWORD *v23; // rax
  CThreadContext *v24; // rax
  unsigned int v25; // ecx
  CThreadContext *v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-B8h]
  _DWORD v28[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v29[3]; // [rsp+40h] [rbp-98h] BYREF
  int v30; // [rsp+70h] [rbp-68h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = 0;
  v4 = (float *)((char *)this + 136);
  if ( a2 )
  {
    v6 = *(_OWORD *)v4;
    v7 = *(_OWORD *)((char *)this + 152);
    v30 = *((_DWORD *)this + 46);
    v29[0] = v6;
    v8 = *(_OWORD *)((char *)this + 168);
    v4 = (float *)v29;
    v29[1] = v7;
    *(float *)&v7 = a2->height - *((float *)this + 37);
    v29[2] = v8;
    *((_QWORD *)&v29[0] + 1) = __PAIR64__(v7, a2->width - *((float *)this + 36));
  }
  v9 = *((_BYTE *)this + 184);
  v10 = *v4;
  v11 = v4[1];
  if ( v9 )
  {
    v12 = v10 + v4[2];
    v13 = v11 + v4[3];
  }
  else
  {
    v12 = v4[2];
    v13 = v4[3];
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
        v24 = (CThreadContext *)operator new(0x128uLL);
        if ( !v24 || (v26 = CThreadContext::CThreadContext(v24), (Value = v26) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v26);
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
        v18 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
        if ( !v18 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v18[1] = 0LL;
      *v18 = &CRectanglesShape::`vftable';
      *((_DWORD *)v18 + 8) = 1;
      v18[2] = v18 + 6;
      v18[3] = v18 + 6;
      *(_QWORD *)((char *)v18 + 36) = 1LL;
      v18[8] = 0LL;
      *((_DWORD *)v18 + 10) = 0;
      DynArrayImpl<0>::ShrinkToSize(v18 + 2, 16LL);
      v19 = v18[8];
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v18[8] = 0LL;
      }
      *(float *)v28 = v10;
      *(float *)&v28[1] = v11;
      *(float *)&v28[2] = v12;
      *(float *)&v28[3] = v13;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        v18 + 2,
        v28,
        1LL);
      goto LABEL_27;
    }
    v21 = operator new(0x50uLL);
    v18 = v21;
    if ( v21 )
    {
      v21[1] = 0LL;
      *v21 = &CRoundedRectangleShape::`vftable';
      *((_OWORD *)v21 + 1) = *(_OWORD *)v4;
      *((_OWORD *)v21 + 2) = *((_OWORD *)v4 + 1);
      *((_OWORD *)v21 + 3) = *((_OWORD *)v4 + 2);
      *((float *)v21 + 16) = v4[12];
      v21[9] = 0LL;
      goto LABEL_27;
    }
    v27 = 218;
LABEL_47:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, v27);
    return v3;
  }
  v23 = CRectanglesShape::operator new(this);
  v18 = v23;
  if ( !v23 )
  {
    v27 = 211;
    goto LABEL_47;
  }
  v23[1] = 0LL;
  *v23 = &CRectanglesShape::`vftable';
  v23[2] = v23 + 6;
  v23[3] = v23 + 6;
  *((_DWORD *)v23 + 8) = 1;
  *(_QWORD *)((char *)v23 + 36) = 1LL;
  v23[8] = 0LL;
LABEL_27:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v18;
  *((_BYTE *)a3 + 8) = 1;
  return v3;
}
