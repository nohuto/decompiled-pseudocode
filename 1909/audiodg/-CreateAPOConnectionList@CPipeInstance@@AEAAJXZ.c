/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400091E0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009EBC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140005668 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x1400090B0 (-AddHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14000916C (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140009A10 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140009AB0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140009C1C (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION@@PEAVCProcessNode@@3@Z @ 0x140009C6C (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14000D040 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14000D950 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9D4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140034724 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x1400356E4 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  int v2; // ebx
  CConnectionInstance *v3; // rsi
  _BYTE *v4; // rdx
  __int64 v5; // r15
  CPipeInstance *v6; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  _QWORD *Head; // rax
  __int64 v9; // rsi
  CConnectionInstance *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rsi
  CConnectionInstance *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r12
  CConnectionInstance *v21; // rax
  CConnectionInstance *v22; // rsi
  int v23; // ecx
  __int64 v24; // r14
  __int64 v25; // rcx
  CConnectionInstance *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  CConnectionInstance *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 **v34; // rax
  __int64 **v35; // r14
  __int64 *v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rsi
  struct ATL::CAtlPlex *v39; // r8
  int v40; // edx
  _QWORD *v41; // rcx
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ecx
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // r14
  void *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  _BYTE v55[32]; // [rsp+0h] [rbp-C8h] BYREF
  int pExceptionObject; // [rsp+40h] [rbp-88h] BYREF
  int v57; // [rsp+44h] [rbp-84h] BYREF
  int v58; // [rsp+48h] [rbp-80h] BYREF
  int v59; // [rsp+4Ch] [rbp-7Ch] BYREF
  int v60; // [rsp+50h] [rbp-78h] BYREF
  int v61; // [rsp+54h] [rbp-74h] BYREF
  int v62; // [rsp+58h] [rbp-70h] BYREF
  int v63; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v64; // [rsp+60h] [rbp-68h] BYREF
  int v65; // [rsp+64h] [rbp-64h] BYREF
  int v66; // [rsp+68h] [rbp-60h] BYREF
  int v67; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int64 v68; // [rsp+70h] [rbp-58h]
  long *v69; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v70; // [rsp+80h] [rbp-48h] BYREF
  __int64 v71; // [rsp+D0h] [rbp+8h] BYREF
  CConnectionInstance *v72; // [rsp+D8h] [rbp+10h] BYREF
  _QWORD *v73; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v74; // [rsp+E8h] [rbp+20h]

  v68 = -2LL;
  try
  {
    v2 = 0;
    v74 = 0LL;
    v3 = 0LL;
    v72 = 0LL;
    v71 = *((_QWORD *)this + 3);
    if ( !v71 )
    {
      pExceptionObject = -2005139408;
      throw (long *)&pExceptionObject;
    }
    v5 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v71);
    v6 = *(CPipeInstance **)this;
    if ( *(_QWORD *)this )
    {
      if ( *((_DWORD *)this + 30) )
      {
        LoopbackConnection = CPipeInstance::GetLoopbackConnection(v6);
      }
      else
      {
        Head = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)v6 + 64);
        LoopbackConnection = *(const struct CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
      }
      v9 = *((_QWORD *)LoopbackConnection + 1);
      v10 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v72 = v10;
      if ( v10 )
        v12 = CConnectionInstance::CConnectionInstance(v10, v11, *((_QWORD *)this + 30), v9, *(_DWORD *)(v5 + 24), v5);
      else
        v12 = 0LL;
      v72 = (CConnectionInstance *)v12;
      if ( !v12 )
      {
        v57 = -2147024882;
        throw (long *)&v57;
      }
      v13 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( !v13 )
      {
        v59 = -2147024882;
        throw (long *)&v59;
      }
      *v13 = 0LL;
      v13[1] = 0LL;
      v13[2] = 0LL;
      v13[3] = 0LL;
      v13[4] = 0LL;
      *((_DWORD *)v13 + 10) = 10;
      v73 = v13;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v13, &v72);
      ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
        (struct ATL::CAtlPlex **)this + 8,
        &v73);
      v3 = 0LL;
      v72 = 0LL;
      if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
        goto LABEL_20;
      v15 = *((_QWORD *)CPipeInstance::GetSecondaryLoopbackConnection(*(CPipeInstance **)this) + 1);
      v16 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v72 = v16;
      if ( v16 )
        v18 = CConnectionInstance::CConnectionInstance(v16, v17, *((_QWORD *)this + 30), v15, *(_DWORD *)(v5 + 24), v5);
      else
        v18 = 0LL;
      v72 = (CConnectionInstance *)v18;
      if ( !v18 )
      {
        v58 = -2147024882;
        throw (long *)&v58;
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v14, &v72);
    }
    else
    {
      if ( !*((_DWORD *)this + 2) )
        goto LABEL_20;
      v26 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v72 = v26;
      if ( v26 )
        v28 = CConnectionInstance::CConnectionInstance(v26, v27, *((_QWORD *)this + 30), -1LL, *(_DWORD *)(v5 + 24), v5);
      else
        v28 = 0LL;
      v72 = (CConnectionInstance *)v28;
      if ( !v28 )
      {
        v60 = -2147024882;
        throw (long *)&v60;
      }
      v29 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v30 = v29;
      if ( !v29 )
      {
        v62 = -2147024882;
        throw (long *)&v62;
      }
      *v29 = 0LL;
      v29[1] = 0LL;
      v29[2] = 0LL;
      v29[3] = 0LL;
      v29[4] = 0LL;
      *((_DWORD *)v29 + 10) = 10;
      v73 = v29;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v29, &v72);
      ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
        (struct ATL::CAtlPlex **)this + 8,
        &v73);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
        (_QWORD *)this + 31,
        &v72);
      v3 = 0LL;
      v72 = 0LL;
      if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
        goto LABEL_20;
      v31 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v72 = v31;
      if ( v31 )
        v33 = CConnectionInstance::CConnectionInstance(v31, v32, *((_QWORD *)this + 30), -2LL, *(_DWORD *)(v5 + 24), v5);
      else
        v33 = 0LL;
      v72 = (CConnectionInstance *)v33;
      if ( !v33 )
      {
        v61 = -2147024882;
        throw (long *)&v61;
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v30, &v72);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
        (_QWORD *)this + 31,
        &v72);
    }
    v3 = 0LL;
    v72 = 0LL;
LABEL_20:
    v19 = v71;
    while ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      v19 = *(_QWORD *)(v19 + 8);
      v21 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v22 = v21;
      v71 = (__int64)v21;
      if ( v21 )
      {
        v23 = *(_DWORD *)(v20 + 24);
        v24 = *((_QWORD *)this + 30);
        *((_QWORD *)v21 + 6) = 0LL;
        *(_QWORD *)v21 = 1LL;
        *((_QWORD *)v21 + 1) = 0LL;
        *((_DWORD *)v21 + 4) = v23;
        *((_QWORD *)v21 + 3) = v20;
        *((_QWORD *)v21 + 4) = v5;
        *((_DWORD *)v21 + 10) = 0;
        *((_QWORD *)v21 + 7) = 0LL;
        v25 = *((_QWORD *)v21 + 6);
        if ( v25 != v24 )
        {
          if ( v24 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
            v25 = *((_QWORD *)v22 + 6);
          }
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          *((_QWORD *)v22 + 6) = v24;
        }
      }
      else
      {
        v22 = 0LL;
      }
      v72 = v22;
      if ( !v22 )
      {
        v63 = -2147024882;
        throw (long *)&v63;
      }
      v34 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v35 = v34;
      if ( !v34 )
      {
        v64 = -2147024882;
        throw (long *)&v64;
      }
      *v34 = 0LL;
      v34[1] = 0LL;
      v34[2] = 0LL;
      v34[3] = 0LL;
      v34[4] = 0LL;
      *((_DWORD *)v34 + 10) = 10;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v34);
      v36 = v35[4];
      v37 = (__int64 *)*v36;
      v36[2] = (__int64)v22;
      v35[4] = v37;
      v36[1] = 0LL;
      *v36 = 0LL;
      v35[2] = (__int64 *)((char *)v35[2] + 1);
      if ( *v35 )
        (*v35)[1] = (__int64)v36;
      else
        v35[1] = v36;
      *v35 = v36;
      v38 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v39 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v39 )
          ATL::AtlThrowImpl(-2147024882);
        v40 = *((_DWORD *)this + 26);
        v41 = (_QWORD *)((char *)v39 + 16 * (v40 - 1) + 8 * (unsigned int)(v40 - 1) + 8);
        for ( LODWORD(v4) = v40 - 1; (int)v4 >= 0; LODWORD(v4) = (_DWORD)v4 - 1 )
        {
          *v41 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v41;
          v41 -= 3;
        }
      }
      v42 = (__int64 *)*((_QWORD *)this + 12);
      v43 = *v42;
      v42[2] = (__int64)v35;
      *((_QWORD *)this + 12) = v43;
      v42[1] = 0LL;
      *v42 = v38;
      ++*((_QWORD *)this + 10);
      v44 = *((_QWORD *)this + 8);
      if ( v44 )
        *(_QWORD *)(v44 + 8) = v42;
      else
        *((_QWORD *)this + 9) = v42;
      *((_QWORD *)this + 8) = v42;
      v3 = 0LL;
      v72 = 0LL;
      v5 = v20;
    }
    v45 = *((_DWORD *)this + 28);
    if ( ((v45 - 1) & 0xFFFFFFFC) == 0 && v45 != 2 )
    {
      v46 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v71 = (__int64)v46;
      if ( v46 )
        v48 = CConnectionInstance::CConnectionInstance(
                v46,
                v47,
                *((_QWORD *)this + 30),
                *(unsigned int *)(v5 + 24),
                0LL,
                v5);
      else
        v48 = 0LL;
      v72 = (CConnectionInstance *)v48;
      if ( !v48 )
      {
        v65 = -2147024882;
        throw (long *)&v65;
      }
      v49 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v50 = v49;
      if ( !v49 )
      {
        v67 = -2147024882;
        throw (long *)&v67;
      }
      *v49 = 0LL;
      v49[1] = 0LL;
      v49[2] = 0LL;
      v49[3] = 0LL;
      v49[4] = 0LL;
      *((_DWORD *)v49 + 10) = 10;
      v71 = (__int64)v49;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v49, &v72);
      ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
        (struct ATL::CAtlPlex **)this + 8,
        &v71);
      v3 = 0LL;
      v72 = 0LL;
      if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 317) )
      {
        v51 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v71 = (__int64)v51;
        if ( v51 )
          v53 = CConnectionInstance::CConnectionInstance(
                  v51,
                  v52,
                  *((_QWORD *)this + 30),
                  *(unsigned int *)(v5 + 24),
                  0LL,
                  v5);
        else
          v53 = 0LL;
        v72 = (CConnectionInstance *)v53;
        if ( !v53 )
        {
          v66 = -2147024882;
          throw (long *)&v66;
        }
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v50, &v72);
        v3 = 0LL;
        v72 = 0LL;
      }
    }
  }
  catch ( ATL::CAtlException *v70 )
  {
    v4 = v55;
    LODWORD(v71) = *(_DWORD *)v70;
    v2 = v71;
    v3 = v72;
  }
  catch ( long *v69 )
  {
    v4 = v55;
    LODWORD(v71) = *(_DWORD *)v69;
    v2 = v71;
    v3 = v72;
  }
  if ( v2 < 0 )
  {
    if ( v3 )
      CConnectionInstance::`scalar deleting destructor'(v3, (unsigned int)v4);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        37LL,
        &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnectionList", 0xAC5u, v2);
  }
  return (unsigned int)v2;
}
