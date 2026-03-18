/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180052A50
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800E6E2C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180054AB4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801A3B6C (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  unsigned int v2; // r11d
  struct CExpressionValueStack *v3; // r15
  int v5; // ecx
  int v6; // edx
  int v7; // r8d
  char v8; // r9
  char v9; // r10
  int v10; // edi
  int v11; // r12d
  bool v12; // cc
  int v13; // r9d
  float v14; // xmm1_4
  int *v15; // rdx
  int v16; // ecx
  int v17; // esi
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r14
  CKeyframeAnimation **v25; // r10
  int v26; // ecx
  CKeyframeAnimation **v27; // rcx
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  __int128 v31; // xmm1
  __int64 v32; // rdi
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // ecx
  CKeyframeAnimation *v39; // r13
  __int64 v40; // r15
  int v41; // r15d
  int v42; // eax
  unsigned int v43; // r11d
  int v44; // eax
  unsigned int v45; // r11d
  int v46; // eax
  __int64 v47; // rdx
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // edx
  CKeyframeAnimation *v52; // r13
  __int64 v53; // r15
  int v54; // eax
  __int64 v55; // rdx
  int v56; // r15d
  unsigned int v57; // ecx
  int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rcx
  struct CExpressionValueStack *v61; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v62[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-70h] BYREF
  int v64; // [rsp+98h] [rbp-68h]
  char v65; // [rsp+9Ch] [rbp-64h]
  _OWORD v66[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-20h] BYREF
  int v68; // [rsp+E8h] [rbp-18h]
  char v69; // [rsp+ECh] [rbp-14h]
  _OWORD v70[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h]
  char v73; // [rsp+13Ch] [rbp+3Ch]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *((_DWORD *)this + 28);
  v3 = a2;
  v61 = a2;
  if ( v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = *((_DWORD *)this + 23);
  v6 = *((_DWORD *)this + 20);
  if ( v5 < v6 )
  {
    v7 = *((_DWORD *)this + 20);
  }
  else
  {
    v7 = v5;
    if ( v5 > *((_DWORD *)this + 21) )
      v7 = *((_DWORD *)this + 21);
  }
  v8 = *((_BYTE *)this + 140);
  v9 = v8 & 8;
  if ( (v8 & 8) != 0 )
    v7 = *((_DWORD *)this + 30) - v7;
  v10 = v7 - *((_DWORD *)this + 31);
  v11 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    if ( v5 < v6 )
      goto LABEL_71;
    if ( v5 >= *((_DWORD *)this + 21) )
      goto LABEL_13;
    goto LABEL_10;
  }
  v12 = v5 < v6;
  if ( v5 > v6 )
  {
    if ( v5 > *((_DWORD *)this + 21) )
    {
LABEL_13:
      v12 = v5 < v6;
      goto LABEL_14;
    }
LABEL_10:
    if ( v10 >= 0 && v10 <= *((_DWORD *)this + 32) && (v8 & 0x20) == 0 )
      goto LABEL_28;
    goto LABEL_13;
  }
LABEL_14:
  if ( !v12 )
  {
    v13 = *((_DWORD *)this + 21);
    if ( v5 <= v13 )
      v13 = v5;
    goto LABEL_17;
  }
LABEL_71:
  v13 = *((_DWORD *)this + 20);
LABEL_17:
  v14 = (float)*((int *)this + 22);
  if ( (float)((float)v13 / v14) == 0.0 )
  {
    if ( v9 )
    {
      v42 = *((_DWORD *)this + 30);
      v43 = v2 - 1;
    }
    else
    {
      v42 = 0;
      v43 = 0;
    }
    *((_DWORD *)this + 29) = v43;
    *((_DWORD *)this + 31) = v42;
    *((_DWORD *)this + 32) = 0;
  }
  else
  {
    if ( v5 >= v6 )
    {
      v6 = v5;
      if ( v5 > *((_DWORD *)this + 21) )
        v6 = *((_DWORD *)this + 21);
    }
    if ( (float)((float)v6 / v14) == 1.0 )
    {
      if ( v9 )
      {
        v44 = 0;
        v45 = 0;
      }
      else
      {
        v44 = *((_DWORD *)this + 30);
        v45 = v2 - 1;
      }
      *((_DWORD *)this + 29) = v45;
      *((_DWORD *)this + 31) = v44;
      *((_DWORD *)this + 32) = 0;
    }
    else
    {
      v15 = (int *)*((_QWORD *)this + 13);
      *((_DWORD *)this + 29) = 0;
      v16 = 0;
      *(_QWORD *)((char *)this + 124) = 0LL;
      v17 = *v15;
      while ( 1 )
      {
        v18 = (unsigned int)(v16 + 1);
        if ( v15[6 * v18] > v17 + v7 )
          break;
        ++v16;
        if ( (unsigned int)v18 >= v2 - 1 )
          goto LABEL_27;
      }
      *((_DWORD *)this + 29) = v16;
      *((_DWORD *)this + 31) = v15[6 * v16] - v17;
      *((_DWORD *)this + 32) = v15[6 * v18] - v15[6 * v16];
    }
  }
LABEL_27:
  *((_BYTE *)this + 140) &= ~0x20u;
LABEL_28:
  memset_0(v66, 0, sizeof(v66));
  v67 = 0LL;
  v68 = 18;
  v69 = 0;
  memset_0(v62, 0, sizeof(v62));
  v63 = 0LL;
  v64 = 18;
  v65 = 0;
  memset_0(v70, 0, sizeof(v70));
  v71 = 0LL;
  v72 = 18;
  v73 = 0;
  v19 = *((unsigned int *)this + 29);
  v20 = *((_QWORD *)this + 13);
  v21 = *((_DWORD *)this + 28) - 1;
  v22 = (unsigned int)(v19 + 1);
  if ( (unsigned int)v19 >= v21 )
    v22 = (unsigned int)v19;
  v23 = 3 * v22;
  if ( (unsigned int)v19 >= v21 )
    v19 = (unsigned int)(v19 - 1);
  v24 = 3 * v19;
  v25 = *(CKeyframeAnimation ***)(v20 + 24 * v19 + 8);
  v26 = *((_DWORD *)v25 + 5);
  if ( v26 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v66, (const struct CExpressionValue *)(v25 + 3));
    goto LABEL_34;
  }
  v38 = v26 - 2;
  if ( !v38 )
  {
    v49 = CKeyframeAnimation::ProcessInnerExpression(v25[3], *((_DWORD *)v25 + 8), v3, (struct CExpressionValue *)v66);
    v41 = v49;
    if ( v49 >= 0 )
      goto LABEL_56;
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x4Du);
LABEL_89:
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v41, 0x1D0u);
    goto LABEL_41;
  }
  if ( v38 != 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v39 = v25[3];
  v40 = *((_QWORD *)v39 + 41);
  if ( !*(_DWORD *)v40 )
  {
    v46 = CKeyframeAnimation::SampleStartingValue(v25[3]);
    v11 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v46, 0x6B9u);
      goto LABEL_54;
    }
    v11 = 0;
  }
  if ( *(_DWORD *)v40 != 18 )
  {
    switch ( *(_DWORD *)v40 )
    {
      case 0xB:
        v47 = *((_QWORD *)v39 + 50);
        v68 = 11;
        v69 = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=(&v67, v47);
        goto LABEL_54;
      case 0x11:
        LOBYTE(v66[0]) = *(_BYTE *)(v40 + 8);
        v68 = 17;
        goto LABEL_53;
      case 0x23:
        v68 = 35;
        *(_QWORD *)&v66[0] = *(_QWORD *)(v40 + 8);
        goto LABEL_53;
      case 0x2A:
        v68 = 42;
        LODWORD(v66[0]) = *(_DWORD *)(v40 + 8);
        goto LABEL_53;
      case 0x34:
        v68 = 52;
        *(_QWORD *)&v66[0] = *(_QWORD *)(v40 + 8);
        DWORD2(v66[0]) = *(_DWORD *)(v40 + 16);
        goto LABEL_53;
      case 0x45:
        v68 = 69;
        v66[0] = *(_OWORD *)(v40 + 8);
        goto LABEL_53;
      case 0x46:
        v68 = 70;
        v66[0] = *(_OWORD *)(v40 + 8);
        goto LABEL_53;
      case 0x47:
        v68 = 71;
        v66[0] = *(_OWORD *)(v40 + 8);
        goto LABEL_53;
      default:
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147467259, 0x6ECu);
        v41 = -2147467259;
        goto LABEL_86;
    }
  }
  LODWORD(v66[0]) = *(_DWORD *)(v40 + 8);
  v68 = 18;
LABEL_53:
  v69 = 1;
LABEL_54:
  v41 = v11;
  if ( v11 < 0 )
  {
LABEL_86:
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v11, 0x53u);
    goto LABEL_89;
  }
  v11 = 0;
LABEL_56:
  v3 = v61;
LABEL_34:
  v27 = *(CKeyframeAnimation ***)(v20 + 8 * v23 + 8);
  v28 = *((_DWORD *)v27 + 5);
  if ( v28 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v62, (const struct CExpressionValue *)(v27 + 3));
    goto LABEL_36;
  }
  v51 = v28 - 2;
  if ( !v51 )
  {
    v58 = CKeyframeAnimation::ProcessInnerExpression(v27[3], *((_DWORD *)v27 + 8), v3, (struct CExpressionValue *)v62);
    v56 = v58;
    if ( v58 >= 0 )
      goto LABEL_36;
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x4Du);
LABEL_116:
    MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x1D1u);
    goto LABEL_41;
  }
  if ( v51 != 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v52 = v27[3];
  v53 = *((_QWORD *)v52 + 41);
  if ( !*(_DWORD *)v53 )
  {
    v54 = CKeyframeAnimation::SampleStartingValue(v27[3]);
    v11 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, v54, 0x6B9u);
      goto LABEL_112;
    }
    v11 = 0;
  }
  if ( *(_DWORD *)v53 != 18 )
  {
    switch ( *(_DWORD *)v53 )
    {
      case 0xB:
        v55 = *((_QWORD *)v52 + 50);
        v64 = 11;
        v65 = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=(&v63, v55);
        goto LABEL_112;
      case 0x11:
        LOBYTE(v62[0]) = *(_BYTE *)(v53 + 8);
        v64 = 17;
        goto LABEL_111;
      case 0x23:
        v64 = 35;
        *(_QWORD *)&v62[0] = *(_QWORD *)(v53 + 8);
        goto LABEL_111;
      case 0x2A:
        v64 = 42;
        LODWORD(v62[0]) = *(_DWORD *)(v53 + 8);
        goto LABEL_111;
      case 0x34:
        v64 = 52;
        *(_QWORD *)&v62[0] = *(_QWORD *)(v53 + 8);
        DWORD2(v62[0]) = *(_DWORD *)(v53 + 16);
        goto LABEL_111;
      case 0x45:
        v64 = 69;
        v62[0] = *(_OWORD *)(v53 + 8);
        goto LABEL_111;
      case 0x46:
        v64 = 70;
        v62[0] = *(_OWORD *)(v53 + 8);
        goto LABEL_111;
      case 0x47:
        v64 = 71;
        v62[0] = *(_OWORD *)(v53 + 8);
        goto LABEL_111;
      default:
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, -2147467259, 0x6ECu);
        v56 = -2147467259;
        goto LABEL_109;
    }
  }
  LODWORD(v62[0]) = *(_DWORD *)(v53 + 8);
  v64 = 18;
LABEL_111:
  v65 = 1;
LABEL_112:
  v56 = v11;
  if ( v11 < 0 )
  {
LABEL_109:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, v11, 0x53u);
    goto LABEL_116;
  }
LABEL_36:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *, _OWORD *, _OWORD *))(**(_QWORD **)(v20 + 8 * v23 + 16) + 24LL))(
    *(_QWORD *)(v20 + 8 * v23 + 16),
    *(_QWORD *)(v20 + 8 * v24 + 8),
    *(unsigned int *)(*(_QWORD *)(v20 + 8 * v24 + 8) + 16LL),
    v66,
    v62,
    v70);
  v29 = *((_DWORD *)this + 23);
  v30 = *((_DWORD *)this + 20);
  if ( *((_BYTE *)this + 96) )
  {
    if ( v29 > v30 && v29 <= *((_DWORD *)this + 21) )
      goto LABEL_39;
  }
  else if ( v29 >= v30 && v29 < *((_DWORD *)this + 21) )
  {
    goto LABEL_39;
  }
  *((_BYTE *)this + 140) &= ~2u;
LABEL_39:
  v31 = v70[1];
  v32 = v71;
  *(_OWORD *)this = v70[0];
  v33 = v70[2];
  *((_OWORD *)this + 1) = v31;
  v34 = v70[3];
  *((_OWORD *)this + 2) = v33;
  *((_OWORD *)this + 3) = v34;
  if ( *((_QWORD *)this + 8) != v32 )
  {
    v61 = (struct CExpressionValueStack *)v32;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v61);
    v60 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v32;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  *((_DWORD *)this + 18) = v72;
  *((_BYTE *)this + 76) = v73;
LABEL_41:
  v35 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
}
