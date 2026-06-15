/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140007AA0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x140004CAC (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140005A40 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140008380 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001D997 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140039AD0 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140039C08 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140039CE4 (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140039DA0 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003ABAC (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  int v2; // edi
  CConnectionInstance *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  CConnectionInstance *v7; // rbx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 **v12; // rsi
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  int i; // edx
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rsi
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  CConnectionInstance *v31; // rsi
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 **v35; // rax
  __int64 **v36; // rbx
  __int64 *v37; // rax
  int v38; // edx
  _BYTE *v39; // rdx
  _QWORD *v40; // rsi
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 **v44; // rax
  __int64 **v45; // rbx
  __int64 *v46; // rax
  int v47; // edx
  __int64 *v48; // rcx
  __int64 *v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rsi
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  struct ATL::CAtlPlex *v56; // r8
  int v57; // edx
  _QWORD *v58; // rcx
  int j; // edx
  _QWORD **Head; // rax
  const struct CConnectionInstance *LoopbackConnection; // rax
  struct IUnknown *v62; // rbx
  struct IUnknown **v63; // rsi
  int v64; // eax
  struct IUnknown *v65; // rdx
  __int64 **v66; // rax
  __int64 **v67; // rbx
  __int64 *v68; // rcx
  __int64 *v69; // rax
  __int64 v70; // r15
  __int64 *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  struct IUnknown *v74; // r15
  struct IUnknown **v75; // rsi
  int v76; // eax
  struct IUnknown *v77; // rdx
  __int64 *v78; // r15
  __int64 *v79; // rcx
  __int64 *v80; // rax
  __int64 **v81; // rax
  void *v82; // rsi
  int v83; // eax
  struct IUnknown *v84; // rdx
  __int64 *v85; // r14
  __int64 *v86; // rcx
  __int64 *v87; // rax
  __int64 **v88; // rax
  __int64 v89; // rdx
  CConnectionInstance *v90; // rcx
  __int64 v91; // rax
  struct ATL::CAtlPlex *v92; // r8
  int v93; // edx
  _QWORD *v94; // rcx
  _BYTE v95[32]; // [rsp+0h] [rbp-C8h] BYREF
  int pExceptionObject; // [rsp+40h] [rbp-88h] BYREF
  int v97; // [rsp+44h] [rbp-84h] BYREF
  int v98; // [rsp+48h] [rbp-80h] BYREF
  int v99; // [rsp+4Ch] [rbp-7Ch] BYREF
  int v100; // [rsp+50h] [rbp-78h] BYREF
  int v101; // [rsp+54h] [rbp-74h] BYREF
  int v102; // [rsp+58h] [rbp-70h] BYREF
  int v103; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v104; // [rsp+60h] [rbp-68h] BYREF
  int v105; // [rsp+64h] [rbp-64h] BYREF
  int v106; // [rsp+68h] [rbp-60h] BYREF
  __int64 v107; // [rsp+70h] [rbp-58h]
  long *v108; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v109; // [rsp+80h] [rbp-48h] BYREF
  __int64 v110; // [rsp+D0h] [rbp+8h]
  CConnectionInstance *v111; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v112; // [rsp+E0h] [rbp+18h]

  v107 = -2LL;
  try
  {
    v2 = 0;
    v112 = 0LL;
    v3 = 0LL;
    v111 = 0LL;
    v4 = *((_QWORD *)this + 3);
    if ( !v4 )
      ATL::AtlThrowImpl(-2147467259);
    v5 = *(_QWORD *)(v4 + 8);
    v110 = v5;
    v6 = *(_QWORD *)(v4 + 16);
    if ( *(_QWORD *)this )
    {
      if ( *((_DWORD *)this + 30) )
      {
        LoopbackConnection = CPipeInstance::GetLoopbackConnection(*(CPipeInstance **)this);
      }
      else
      {
        Head = (_QWORD **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)this + 64LL));
        LoopbackConnection = *(const struct CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
      }
      v62 = (struct IUnknown *)*((_QWORD *)LoopbackConnection + 1);
      v63 = (struct IUnknown **)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v111 = (CConnectionInstance *)v63;
      if ( v63 )
      {
        v64 = *(_DWORD *)(v6 + 24);
        v65 = (struct IUnknown *)*((_QWORD *)this + 29);
        v63[6] = 0LL;
        *v63 = 0LL;
        v63[1] = v62;
        *((_DWORD *)v63 + 4) = v64;
        v63[3] = (struct IUnknown *)v6;
        v63[4] = 0LL;
        *((_DWORD *)v63 + 10) = 0;
        v63[7] = 0LL;
        if ( v63[6] != v65 )
          ATL::AtlComPtrAssign(v63 + 6, v65);
      }
      else
      {
        v63 = 0LL;
      }
      v111 = (CConnectionInstance *)v63;
      if ( !v63 )
      {
        pExceptionObject = -2147024882;
        throw (long *)&pExceptionObject;
      }
      v66 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v67 = v66;
      if ( !v66 )
      {
        v98 = -2147024882;
        throw (long *)&v98;
      }
      *v66 = 0LL;
      v66[1] = 0LL;
      v66[2] = 0LL;
      v66[3] = 0LL;
      v66[4] = 0LL;
      *((_DWORD *)v66 + 10) = 10;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v66);
      v68 = v67[4];
      v69 = (__int64 *)*v68;
      v68[2] = (__int64)v63;
      v67[4] = v69;
      v68[1] = 0LL;
      *v68 = 0LL;
      v67[2] = (__int64 *)((char *)v67[2] + 1);
      if ( *v67 )
        (*v67)[1] = (__int64)v68;
      else
        v67[1] = v68;
      *v67 = v68;
      v70 = *((_QWORD *)this + 8);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
      v71 = (__int64 *)*((_QWORD *)this + 12);
      v72 = *v71;
      v71[2] = (__int64)v67;
      *((_QWORD *)this + 12) = v72;
      v71[1] = 0LL;
      *v71 = v70;
      ++*((_QWORD *)this + 10);
      v73 = *((_QWORD *)this + 8);
      if ( v73 )
        *(_QWORD *)(v73 + 8) = v71;
      else
        *((_QWORD *)this + 9) = v71;
      *((_QWORD *)this + 8) = v71;
      v3 = 0LL;
      v111 = 0LL;
      if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 308) )
      {
        v74 = (struct IUnknown *)*((_QWORD *)CPipeInstance::GetSecondaryLoopbackConnection(*(CPipeInstance **)this) + 1);
        v75 = (struct IUnknown **)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v111 = (CConnectionInstance *)v75;
        if ( v75 )
        {
          v76 = *(_DWORD *)(v6 + 24);
          v77 = (struct IUnknown *)*((_QWORD *)this + 29);
          v75[6] = 0LL;
          *v75 = 0LL;
          v75[1] = v74;
          *((_DWORD *)v75 + 4) = v76;
          v75[3] = (struct IUnknown *)v6;
          v75[4] = 0LL;
          *((_DWORD *)v75 + 10) = 0;
          v75[7] = 0LL;
          if ( v75[6] != v77 )
            ATL::AtlComPtrAssign(v75 + 6, v77);
        }
        else
        {
          v75 = 0LL;
        }
        v111 = (CConnectionInstance *)v75;
        if ( !v75 )
        {
          v97 = -2147024882;
          throw (long *)&v97;
        }
        v78 = v67[1];
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v67);
        v79 = v67[4];
        v80 = (__int64 *)*v79;
        v79[2] = (__int64)v75;
        v67[4] = v80;
        v79[1] = (__int64)v78;
        *v79 = 0LL;
        v67[2] = (__int64 *)((char *)v67[2] + 1);
        v81 = (__int64 **)v67[1];
        if ( v81 )
          *v81 = v79;
        else
          *v67 = v79;
        v67[1] = v79;
        goto LABEL_30;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 2) )
        goto LABEL_32;
      v7 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v111 = v7;
      if ( v7 )
      {
        v8 = *(_DWORD *)(v6 + 24);
        v9 = *((_QWORD *)this + 29);
        *((_QWORD *)v7 + 6) = 0LL;
        *(_QWORD *)v7 = 0LL;
        *((_QWORD *)v7 + 1) = -1LL;
        *((_DWORD *)v7 + 4) = v8;
        *((_QWORD *)v7 + 3) = v6;
        *((_QWORD *)v7 + 4) = 0LL;
        *((_DWORD *)v7 + 10) = 0;
        *((_QWORD *)v7 + 7) = 0LL;
        v10 = *((_QWORD *)v7 + 6);
        if ( v10 != v9 )
        {
          if ( v9 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            v10 = *((_QWORD *)v7 + 6);
          }
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          *((_QWORD *)v7 + 6) = v9;
        }
      }
      else
      {
        v7 = 0LL;
      }
      v111 = v7;
      if ( !v7 )
      {
        v99 = -2147024882;
        throw (long *)&v99;
      }
      v11 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( !v11 )
      {
        v101 = -2147024882;
        throw (long *)&v101;
      }
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
      v11[3] = 0LL;
      v11[4] = 0LL;
      *((_DWORD *)v11 + 10) = 10;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v11);
      v13 = v12[4];
      v14 = (__int64 *)*v13;
      v13[2] = (__int64)v7;
      v12[4] = v14;
      v13[1] = 0LL;
      *v13 = 0LL;
      v12[2] = (__int64 *)((char *)v12[2] + 1);
      if ( *v12 )
        (*v12)[1] = (__int64)v13;
      else
        v12[1] = v13;
      *v12 = v13;
      v15 = *((_QWORD *)this + 8);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
      v16 = (__int64 *)*((_QWORD *)this + 12);
      v17 = *v16;
      v16[2] = (__int64)v12;
      *((_QWORD *)this + 12) = v17;
      v16[1] = 0LL;
      *v16 = v15;
      ++*((_QWORD *)this + 10);
      v18 = *((_QWORD *)this + 8);
      if ( v18 )
        *(_QWORD *)(v18 + 8) = v16;
      else
        *((_QWORD *)this + 9) = v16;
      *((_QWORD *)this + 8) = v16;
      v19 = *((_QWORD *)this + 30);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 240);
      v20 = (__int64 *)*((_QWORD *)this + 34);
      v21 = *v20;
      v20[2] = (__int64)v7;
      *((_QWORD *)this + 34) = v21;
      v20[1] = 0LL;
      *v20 = v19;
      ++*((_QWORD *)this + 32);
      if ( *((_QWORD *)this + 30) )
        *(_QWORD *)(*((_QWORD *)this + 30) + 8LL) = v20;
      else
        *((_QWORD *)this + 31) = v20;
      *((_QWORD *)this + 30) = v20;
      v3 = 0LL;
      v111 = 0LL;
      if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 308) )
      {
        v90 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v111 = v90;
        if ( v90 )
          v91 = CConnectionInstance::CConnectionInstance(
                  v90,
                  v89,
                  *((_QWORD *)this + 29),
                  -2LL,
                  *(_DWORD *)(v6 + 24),
                  v6);
        else
          v91 = 0LL;
        v111 = (CConnectionInstance *)v91;
        if ( !v91 )
        {
          v100 = -2147024882;
          throw (long *)&v100;
        }
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v12, &v111);
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
          (char *)this + 240,
          &v111);
        goto LABEL_30;
      }
    }
    while ( 1 )
    {
      v5 = v110;
LABEL_32:
      if ( !v5 )
        break;
      v30 = *(_QWORD *)(v5 + 16);
      v110 = *(_QWORD *)(v5 + 8);
      v31 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v111 = v31;
      if ( v31 )
      {
        v32 = *(_DWORD *)(v30 + 24);
        v33 = *((_QWORD *)this + 29);
        *((_QWORD *)v31 + 6) = 0LL;
        *(_QWORD *)v31 = 1LL;
        *((_QWORD *)v31 + 1) = 0LL;
        *((_DWORD *)v31 + 4) = v32;
        *((_QWORD *)v31 + 3) = v30;
        *((_QWORD *)v31 + 4) = v6;
        *((_DWORD *)v31 + 10) = 0;
        *((_QWORD *)v31 + 7) = 0LL;
        v34 = *((_QWORD *)v31 + 6);
        if ( v34 != v33 )
        {
          if ( v33 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            v34 = *((_QWORD *)v31 + 6);
          }
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          *((_QWORD *)v31 + 6) = v33;
        }
      }
      else
      {
        v31 = 0LL;
      }
      v111 = v31;
      if ( !v31 )
      {
        v102 = -2147024882;
        throw (long *)&v102;
      }
      v35 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v36 = v35;
      if ( !v35 )
      {
        v103 = -2147024882;
        throw (long *)&v103;
      }
      *v35 = 0LL;
      v35[1] = 0LL;
      v35[2] = 0LL;
      v35[3] = 0LL;
      v35[4] = 0LL;
      *((_DWORD *)v35 + 10) = 10;
      v37 = (__int64 *)malloc(0xF8uLL);
      if ( !v37 )
        ATL::AtlThrowImpl(-2147024882);
      *v37 = (__int64)v36[3];
      v36[3] = v37;
      v38 = *((_DWORD *)v36 + 10);
      v22 = &v37[2 * (v38 - 1) + 1 + (unsigned int)(v38 - 1)];
      for ( i = v38 - 1; i >= 0; --i )
      {
        *v22 = (__int64)v36[4];
        v36[4] = v22;
        v22 -= 3;
      }
      v24 = v36[4];
      v25 = (__int64 *)*v24;
      v24[2] = (__int64)v31;
      v36[4] = v25;
      v24[1] = 0LL;
      *v24 = 0LL;
      v36[2] = (__int64 *)((char *)v36[2] + 1);
      if ( *v36 )
        (*v36)[1] = (__int64)v24;
      else
        v36[1] = v24;
      *v36 = v24;
      v26 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v56 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v56 )
          ATL::AtlThrowImpl(-2147024882);
        v57 = *((_DWORD *)this + 26);
        v58 = (_QWORD *)((char *)v56 + 16 * (v57 - 1) + 8 * (unsigned int)(v57 - 1) + 8);
        for ( j = v57 - 1; j >= 0; --j )
        {
          *v58 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v58;
          v58 -= 3;
        }
      }
      v27 = (__int64 *)*((_QWORD *)this + 12);
      v28 = *v27;
      v27[2] = (__int64)v36;
      *((_QWORD *)this + 12) = v28;
      v27[1] = 0LL;
      *v27 = v26;
      ++*((_QWORD *)this + 10);
      v29 = *((_QWORD *)this + 8);
      if ( v29 )
        *(_QWORD *)(v29 + 8) = v27;
      else
        *((_QWORD *)this + 9) = v27;
      *((_QWORD *)this + 8) = v27;
      v6 = v30;
LABEL_30:
      v3 = 0LL;
      v111 = 0LL;
    }
    LODWORD(v39) = *((_DWORD *)this + 28);
    if ( (((_DWORD)v39 - 1) & 0xFFFFFFFC) == 0 && (_DWORD)v39 != 2 )
    {
      v40 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v40 )
      {
        v41 = *(_DWORD *)(v6 + 24);
        v42 = *((_QWORD *)this + 29);
        v40[6] = 0LL;
        *v40 = 1LL;
        v40[1] = 0LL;
        *((_DWORD *)v40 + 4) = v41;
        v40[3] = 0LL;
        v40[4] = v6;
        *((_DWORD *)v40 + 10) = 0;
        v40[7] = 0LL;
        v43 = v40[6];
        if ( v43 != v42 )
        {
          if ( v42 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
            v43 = v40[6];
          }
          if ( v43 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          v40[6] = v42;
        }
      }
      else
      {
        v40 = 0LL;
      }
      v111 = (CConnectionInstance *)v40;
      if ( !v40 )
      {
        v104 = -2147024882;
        throw (long *)&v104;
      }
      v44 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v45 = v44;
      if ( !v44 )
      {
        v106 = -2147024882;
        throw (long *)&v106;
      }
      *v44 = 0LL;
      v44[1] = 0LL;
      v44[2] = 0LL;
      v44[3] = 0LL;
      v44[4] = 0LL;
      *((_DWORD *)v44 + 10) = 10;
      v46 = (__int64 *)malloc(0xF8uLL);
      if ( !v46 )
        ATL::AtlThrowImpl(-2147024882);
      *v46 = (__int64)v45[3];
      v45[3] = v46;
      v47 = *((_DWORD *)v45 + 10);
      v48 = &v46[2 * (v47 - 1) + 1 + (unsigned int)(v47 - 1)];
      for ( LODWORD(v39) = v47 - 1; (int)v39 >= 0; LODWORD(v39) = (_DWORD)v39 - 1 )
      {
        *v48 = (__int64)v45[4];
        v45[4] = v48;
        v48 -= 3;
      }
      v49 = v45[4];
      v50 = (__int64 *)*v49;
      v49[2] = (__int64)v40;
      v45[4] = v50;
      v49[1] = 0LL;
      *v49 = 0LL;
      v45[2] = (__int64 *)((char *)v45[2] + 1);
      if ( *v45 )
        (*v45)[1] = (__int64)v49;
      else
        v45[1] = v49;
      *v45 = v49;
      v51 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v92 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v92 )
          ATL::AtlThrowImpl(-2147024882);
        v93 = *((_DWORD *)this + 26);
        v94 = (_QWORD *)((char *)v92 + 16 * (v93 - 1) + 8 * (unsigned int)(v93 - 1) + 8);
        for ( LODWORD(v39) = v93 - 1; (int)v39 >= 0; LODWORD(v39) = (_DWORD)v39 - 1 )
        {
          *v94 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v94;
          v94 -= 3;
        }
      }
      v52 = (__int64 *)*((_QWORD *)this + 12);
      v53 = *v52;
      v52[2] = (__int64)v45;
      *((_QWORD *)this + 12) = v53;
      v52[1] = 0LL;
      *v52 = v51;
      ++*((_QWORD *)this + 10);
      v54 = *((_QWORD *)this + 8);
      if ( v54 )
        *(_QWORD *)(v54 + 8) = v52;
      else
        *((_QWORD *)this + 9) = v52;
      *((_QWORD *)this + 8) = v52;
      v3 = 0LL;
      v111 = 0LL;
      if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 309) )
      {
        v82 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v82 )
        {
          v83 = *(_DWORD *)(v6 + 24);
          v84 = (struct IUnknown *)*((_QWORD *)this + 29);
          *((_QWORD *)v82 + 6) = 0LL;
          *(_QWORD *)v82 = 1LL;
          *((_QWORD *)v82 + 1) = 0LL;
          *((_DWORD *)v82 + 4) = v83;
          *((_QWORD *)v82 + 3) = 0LL;
          *((_QWORD *)v82 + 4) = v6;
          *((_DWORD *)v82 + 10) = 0;
          *((_QWORD *)v82 + 7) = 0LL;
          if ( *((struct IUnknown **)v82 + 6) != v84 )
            ATL::AtlComPtrAssign((struct IUnknown **)v82 + 6, v84);
        }
        else
        {
          v82 = 0LL;
        }
        v111 = (CConnectionInstance *)v82;
        if ( !v82 )
        {
          v105 = -2147024882;
          throw (long *)&v105;
        }
        v85 = v45[1];
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v45);
        v86 = v45[4];
        v87 = (__int64 *)*v86;
        v86[2] = (__int64)v82;
        v45[4] = v87;
        v86[1] = (__int64)v85;
        *v86 = 0LL;
        v45[2] = (__int64 *)((char *)v45[2] + 1);
        v88 = (__int64 **)v45[1];
        if ( v88 )
          *v88 = v86;
        else
          *v45 = v86;
        v45[1] = v86;
        v3 = 0LL;
        v111 = 0LL;
      }
    }
  }
  catch ( ATL::CAtlException *v109 )
  {
    v39 = v95;
    v2 = *(_DWORD *)v109;
    v3 = v111;
  }
  catch ( long *v108 )
  {
    v39 = v95;
    v2 = *(_DWORD *)v108;
    v3 = v111;
  }
  if ( v2 < 0 )
  {
    if ( v3 )
      CConnectionInstance::`scalar deleting destructor'(v3, (unsigned int)v39);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        37LL,
        &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnectionList", 0xABFu, v2);
  }
  return (unsigned int)v2;
}
