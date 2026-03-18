/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180081C20
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180082278 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800C06EC (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180082060 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800C0EA4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801E1714 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  char v9; // r8
  char v10; // r9
  int v11; // edi
  int v12; // r12d
  bool v13; // cc
  int v14; // r8d
  float v15; // xmm1_4
  int *v16; // rdx
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // r14d
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // r14
  _DWORD *v26; // rcx
  int v27; // edx
  CKeyframeAnimation **v28; // rcx
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  __int128 v32; // xmm1
  __int64 v33; // rdi
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // r14d
  int v41; // edx
  CKeyframeAnimation *v42; // rcx
  __int64 v43; // r15
  int v44; // r15d
  int v45; // eax
  unsigned int v46; // r14d
  int v47; // eax
  __int64 v48; // rdx
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // edx
  CKeyframeAnimation *v53; // rcx
  __int64 v54; // r15
  int v55; // eax
  __int64 v56; // rdx
  int v57; // r15d
  unsigned int v58; // ecx
  int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v63[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  int v65; // [rsp+A0h] [rbp-68h]
  char v66; // [rsp+A4h] [rbp-64h]
  _OWORD v67[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-20h] BYREF
  int v69; // [rsp+F0h] [rbp-18h]
  char v70; // [rsp+F4h] [rbp-14h]
  _OWORD v71[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v72; // [rsp+138h] [rbp+30h]
  int v73; // [rsp+140h] [rbp+38h]
  char v74; // [rsp+144h] [rbp+3Ch]
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  v3 = *((_DWORD *)this + 28);
  if ( v3 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  v6 = *((_DWORD *)this + 23);
  v7 = *((_DWORD *)this + 20);
  if ( v6 < v7 )
  {
    v8 = *((_DWORD *)this + 20);
  }
  else
  {
    v8 = v6;
    if ( v6 > *((_DWORD *)this + 21) )
      v8 = *((_DWORD *)this + 21);
  }
  v9 = *((_BYTE *)this + 140);
  v10 = v9 & 8;
  if ( (v9 & 8) != 0 )
    v8 = *((_DWORD *)this + 30) - v8;
  v11 = v8 - *((_DWORD *)this + 31);
  v12 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    if ( v6 < v7 )
      goto LABEL_68;
    if ( v6 >= *((_DWORD *)this + 21) )
      goto LABEL_13;
    goto LABEL_10;
  }
  v13 = v6 < v7;
  if ( v6 > v7 )
  {
    if ( v6 > *((_DWORD *)this + 21) )
    {
LABEL_13:
      v13 = v6 < v7;
      goto LABEL_14;
    }
LABEL_10:
    if ( v11 >= 0 && v11 <= *((_DWORD *)this + 32) && (v9 & 0x20) == 0 )
      goto LABEL_28;
    goto LABEL_13;
  }
LABEL_14:
  if ( !v13 )
  {
    v14 = *((_DWORD *)this + 21);
    if ( v6 <= v14 )
      v14 = v6;
    goto LABEL_17;
  }
LABEL_68:
  v14 = *((_DWORD *)this + 20);
LABEL_17:
  v15 = (float)*((int *)this + 22);
  if ( (float)((float)v14 / v15) == 0.0 )
  {
    if ( v10 )
    {
      v39 = *((_DWORD *)this + 30);
      v40 = v3 - 1;
    }
    else
    {
      v39 = 0;
      v40 = 0;
    }
    *((_DWORD *)this + 29) = v40;
    *((_DWORD *)this + 31) = v39;
    *((_DWORD *)this + 32) = 0;
  }
  else
  {
    if ( v6 >= v7 )
    {
      v7 = v6;
      if ( v6 > *((_DWORD *)this + 21) )
        v7 = *((_DWORD *)this + 21);
    }
    if ( (float)((float)v7 / v15) == 1.0 )
    {
      if ( v10 )
      {
        v45 = 0;
        v46 = 0;
      }
      else
      {
        v45 = *((_DWORD *)this + 30);
        v46 = v3 - 1;
      }
      *((_DWORD *)this + 29) = v46;
      *((_DWORD *)this + 31) = v45;
      *((_DWORD *)this + 32) = 0;
    }
    else
    {
      v16 = (int *)*((_QWORD *)this + 13);
      v17 = 0;
      *((_DWORD *)this + 29) = 0;
      *(_QWORD *)((char *)this + 124) = 0LL;
      v18 = *v16;
      v19 = v3 - 1;
      if ( v19 )
      {
        while ( 1 )
        {
          v20 = (unsigned int)(v17 + 1);
          if ( v16[6 * v20] > v18 + v8 )
            break;
          ++v17;
          if ( (unsigned int)v20 >= v19 )
            goto LABEL_27;
        }
        *((_DWORD *)this + 29) = v17;
        *((_DWORD *)this + 31) = v16[6 * v17] - v18;
        *((_DWORD *)this + 32) = v16[6 * v20] - v16[6 * v17];
      }
    }
  }
LABEL_27:
  *((_BYTE *)this + 140) &= ~0x20u;
LABEL_28:
  memset_0(v67, 0, sizeof(v67));
  v68 = 0LL;
  v69 = 18;
  v70 = 0;
  memset_0(v63, 0, sizeof(v63));
  v64 = 0LL;
  v65 = 18;
  v66 = 0;
  memset_0(v71, 0, sizeof(v71));
  v72 = 0LL;
  v73 = 18;
  v74 = 0;
  v21 = *((_DWORD *)this + 29);
  v22 = *((_QWORD *)this + 13);
  if ( v21 >= *((_DWORD *)this + 28) - 1 )
  {
    v23 = v21 - 1;
  }
  else
  {
    v23 = *((_DWORD *)this + 29);
    ++v21;
  }
  v24 = 3LL * v21;
  v25 = 3LL * v23;
  v26 = *(_DWORD **)(v22 + 24LL * v23 + 8);
  v27 = v26[5];
  if ( v27 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v67, (const struct CExpressionValue *)(v26 + 6));
    goto LABEL_32;
  }
  v41 = v27 - 2;
  if ( v41 )
  {
    if ( v41 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, &_ImageBase);
    v42 = (CKeyframeAnimation *)*((_QWORD *)v26 + 3);
    v43 = *((_QWORD *)v42 + 44);
    if ( !*(_DWORD *)v43 )
    {
      v47 = CKeyframeAnimation::SampleStartingValue(v42);
      v12 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v42, 0LL, 0, v47, 0x6AFu, 0LL);
LABEL_55:
        v44 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          goto LABEL_32;
        }
LABEL_84:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v42, 0LL, 0, v12, 0x50u, 0LL);
LABEL_87:
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v44, 0x1CDu, 0LL);
        goto LABEL_39;
      }
      v12 = 0;
    }
    if ( *(_DWORD *)v43 != 18 )
    {
      switch ( *(_DWORD *)v43 )
      {
        case 0xB:
          v48 = *(_QWORD *)(v43 + 8);
          v69 = 11;
          v70 = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=(&v68, v48);
          goto LABEL_55;
        case 0x11:
          LOBYTE(v67[0]) = *(_BYTE *)(v43 + 8);
          v69 = 17;
          goto LABEL_54;
        case 0x23:
          v69 = 35;
          *(_QWORD *)&v67[0] = *(_QWORD *)(v43 + 8);
          goto LABEL_54;
        case 0x2A:
          v69 = 42;
          LODWORD(v67[0]) = *(_DWORD *)(v43 + 8);
          goto LABEL_54;
        case 0x34:
          v69 = 52;
          *(_QWORD *)&v67[0] = *(_QWORD *)(v43 + 8);
          DWORD2(v67[0]) = *(_DWORD *)(v43 + 16);
          goto LABEL_54;
        case 0x45:
          v69 = 69;
          v67[0] = *(_OWORD *)(v43 + 8);
          goto LABEL_54;
        case 0x46:
          v69 = 70;
          v67[0] = *(_OWORD *)(v43 + 8);
          goto LABEL_54;
        case 0x47:
          v69 = 71;
          v67[0] = *(_OWORD *)(v43 + 8);
          goto LABEL_54;
        default:
          v12 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v42, 0LL, 0, -2147467259, 0x6DFu, 0LL);
          v44 = -2147467259;
          goto LABEL_84;
      }
    }
    LODWORD(v67[0]) = *(_DWORD *)(v43 + 8);
LABEL_54:
    v70 = 1;
    goto LABEL_55;
  }
  v50 = CKeyframeAnimation::ProcessInnerExpression(
          *((CKeyframeAnimation **)v26 + 3),
          v26[8],
          a2,
          (struct CExpressionValue *)v67);
  v44 = v50;
  if ( v50 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x4Au, 0LL);
    goto LABEL_87;
  }
LABEL_32:
  v28 = *(CKeyframeAnimation ***)(v22 + 8 * v24 + 8);
  v29 = *((_DWORD *)v28 + 5);
  if ( v29 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v63, (const struct CExpressionValue *)(v28 + 3));
    goto LABEL_34;
  }
  v52 = v29 - 2;
  if ( !v52 )
  {
    v59 = CKeyframeAnimation::ProcessInnerExpression(v28[3], *((_DWORD *)v28 + 8), a2, (struct CExpressionValue *)v63);
    v57 = v59;
    if ( v59 >= 0 )
      goto LABEL_34;
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x4Au, 0LL);
LABEL_113:
    MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x1CEu, 0LL);
    goto LABEL_39;
  }
  if ( v52 != 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, &_ImageBase);
  v53 = v28[3];
  v54 = *((_QWORD *)v53 + 44);
  if ( !*(_DWORD *)v54 )
  {
    v55 = CKeyframeAnimation::SampleStartingValue(v53);
    v12 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v53, 0LL, 0, v55, 0x6AFu, 0LL);
      goto LABEL_109;
    }
    v12 = 0;
  }
  if ( *(_DWORD *)v54 != 18 )
  {
    switch ( *(_DWORD *)v54 )
    {
      case 0xB:
        v56 = *(_QWORD *)(v54 + 8);
        v65 = 11;
        v66 = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=(&v64, v56);
        goto LABEL_109;
      case 0x11:
        LOBYTE(v63[0]) = *(_BYTE *)(v54 + 8);
        v65 = 17;
        goto LABEL_108;
      case 0x23:
        v65 = 35;
        *(_QWORD *)&v63[0] = *(_QWORD *)(v54 + 8);
        goto LABEL_108;
      case 0x2A:
        v65 = 42;
        LODWORD(v63[0]) = *(_DWORD *)(v54 + 8);
        goto LABEL_108;
      case 0x34:
        v65 = 52;
        *(_QWORD *)&v63[0] = *(_QWORD *)(v54 + 8);
        DWORD2(v63[0]) = *(_DWORD *)(v54 + 16);
        goto LABEL_108;
      case 0x45:
        v65 = 69;
        v63[0] = *(_OWORD *)(v54 + 8);
        goto LABEL_108;
      case 0x46:
        v65 = 70;
        v63[0] = *(_OWORD *)(v54 + 8);
        goto LABEL_108;
      case 0x47:
        v65 = 71;
        v63[0] = *(_OWORD *)(v54 + 8);
        goto LABEL_108;
      default:
        v12 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v53, 0LL, 0, -2147467259, 0x6DFu, 0LL);
        v57 = -2147467259;
        goto LABEL_106;
    }
  }
  LODWORD(v63[0]) = *(_DWORD *)(v54 + 8);
LABEL_108:
  v66 = 1;
LABEL_109:
  v57 = v12;
  if ( v12 < 0 )
  {
LABEL_106:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v53, 0LL, 0, v12, 0x50u, 0LL);
    goto LABEL_113;
  }
LABEL_34:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *, _OWORD *, _OWORD *))(**(_QWORD **)(v22 + 8 * v24 + 16) + 24LL))(
    *(_QWORD *)(v22 + 8 * v24 + 16),
    *(_QWORD *)(v22 + 8 * v25 + 8),
    *(unsigned int *)(*(_QWORD *)(v22 + 8 * v25 + 8) + 16LL),
    v67,
    v63,
    v71);
  v30 = *((_DWORD *)this + 23);
  v31 = *((_DWORD *)this + 20);
  if ( *((_BYTE *)this + 96) )
  {
    if ( v30 > v31 && v30 <= *((_DWORD *)this + 21) )
      goto LABEL_37;
  }
  else if ( v30 >= v31 && v30 < *((_DWORD *)this + 21) )
  {
    goto LABEL_37;
  }
  *((_BYTE *)this + 140) &= ~2u;
LABEL_37:
  v32 = v71[1];
  v33 = v72;
  *(_OWORD *)this = v71[0];
  v34 = v71[2];
  *((_OWORD *)this + 1) = v32;
  v35 = v71[3];
  *((_OWORD *)this + 2) = v34;
  *((_OWORD *)this + 3) = v35;
  if ( *((_QWORD *)this + 8) != v33 )
  {
    v62 = v33;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v62);
    v61 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v33;
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  *((_DWORD *)this + 18) = v73;
  *((_BYTE *)this + 76) = v74;
LABEL_39:
  v36 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
}
