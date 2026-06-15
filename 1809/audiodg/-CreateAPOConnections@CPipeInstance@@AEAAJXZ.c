/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140006A10
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000852C (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x1400085F4 (-CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x140039C88 (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14003AD10 (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14003AE94 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this, __int64 a2)
{
  CPipeInstance *v2; // r13
  int v3; // esi
  unsigned __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 **Prev; // rax
  __int64 v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  BOOL v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  char v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, CPipeInstance **); // rax
  int v23; // eax
  CPipeInstance *v24; // rsi
  unsigned __int64 v25; // rax
  CConnectionInstance *v28; // rcx
  int Connection; // eax
  __int64 v30; // rsi
  wil::details::in1diag3 *v31; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  CPipeInstance *v34; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v35; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 *v36; // [rsp+30h] [rbp-39h]
  unsigned __int64 v37; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-29h] BYREF
  char v39[8]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-19h]
  int v41; // [rsp+58h] [rbp-11h]
  CPipeInstance *v42; // [rsp+60h] [rbp-9h] BYREF
  int v43; // [rsp+68h] [rbp-1h]
  __int64 v44; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  CPipeInstance *v46; // [rsp+D0h] [rbp+67h]
  char v47; // [rsp+D8h] [rbp+6Fh]
  _QWORD *v48; // [rsp+E0h] [rbp+77h]
  __int64 v49; // [rsp+E8h] [rbp+7Fh] BYREF

  v46 = this;
  v44 = -2LL;
  v2 = this;
  v3 = 0;
  v4 = 0LL;
  v36 = 0LL;
  v47 = 0;
  if ( *((_DWORD *)this + 3) )
    v5 = (__int64 *)*((_QWORD *)this + 9);
  else
    v5 = (__int64 *)*((_QWORD *)this + 8);
  v35 = v5;
  while ( v5 )
  {
    if ( *((_DWORD *)v2 + 3) )
    {
      Prev = (__int64 **)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                           this,
                           &v35);
      v5 = v35;
    }
    else
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
      v35 = v5;
      Prev = (__int64 **)(v6 + 2);
    }
    v8 = **Prev;
    if ( !v8 )
LABEL_86:
      ATL::AtlThrowImpl(-2147467259);
    v9 = *(_QWORD **)v8;
    v48 = *(_QWORD **)v8;
    v10 = *(_QWORD *)(v8 + 16);
    if ( v5 )
    {
      v11 = *(_QWORD *)v5[2];
      if ( !v11 )
        goto LABEL_86;
      v12 = *(_QWORD *)(v11 + 16);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = 0;
    v34 = 0LL;
    v14 = 0LL;
    v49 = 0LL;
    v15 = *(_QWORD *)(v10 + 24);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v10 + 32);
      if ( v16 && v12 && *(_DWORD *)(v15 + 40) == 2 && *(_DWORD *)(v16 + 40) == 2 )
      {
        if ( *(_DWORD *)(v10 + 16) )
        {
          if ( (*(_BYTE *)(v15 + 48) & 1) != 0 )
          {
            a2 = *(_QWORD *)(v12 + 24);
            if ( a2 )
            {
              if ( *(_DWORD *)(a2 + 40) == 2 )
              {
                (*(void (__fastcall **)(_QWORD, CPipeInstance **))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(v10 + 24), &v34);
                v30 = (*(__int64 (__fastcall **)(CPipeInstance *))(*(_QWORD *)v34 + 40LL))(v34);
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 16LL))(v15, &v49);
                v13 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 40LL))(v49) + 8) >= *(_DWORD *)(v30 + 8);
                v14 = v49;
              }
            }
          }
        }
        else if ( (*(_BYTE *)(v16 + 48) & 1) != 0 )
        {
          a2 = *(_QWORD *)(v12 + 32);
          if ( a2 )
          {
            if ( *(_DWORD *)(a2 + 40) == 2 )
            {
              (*(void (__fastcall **)(_QWORD, CPipeInstance **))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(v10 + 32), &v34);
              v17 = (*(__int64 (__fastcall **)(CPipeInstance *))(*(_QWORD *)v34 + 40LL))(v34);
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 16LL))(v16, &v49);
              v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 40LL))(v49);
              v9 = v48;
              v14 = v49;
              v13 = *(_DWORD *)(v17 + 8) >= *(_DWORD *)(v18 + 8);
              goto LABEL_22;
            }
          }
        }
      }
      v9 = v48;
    }
LABEL_22:
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    this = v34;
    if ( v34 )
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v34 + 16LL))(v34);
    if ( !v13 )
    {
      v19 = v47;
      if ( v4 )
        v19 = 0;
      v47 = v19;
      goto LABEL_30;
    }
    if ( v4 )
    {
      v19 = v47;
LABEL_30:
      v2 = v46;
      goto LABEL_31;
    }
    v23 = CConnectionInstance::CreateConnectionBuffer((CConnectionInstance *)v10, &v37, &v38);
    v3 = v23;
    if ( v23 < 0 )
    {
      v31 = retaddr;
      v32 = (unsigned int)v23;
      v33 = 2817LL;
LABEL_79:
      wil::details::in1diag3::Return_Hr(
        v31,
        (void *)v33,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)v32,
        (int)v34);
      break;
    }
    v4 = (unsigned __int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v2 = v46;
    this = 0LL;
    if ( v4 )
    {
      v24 = (CPipeInstance *)*((_QWORD *)v46 + 29);
      v25 = v37;
      v4[3] = 0LL;
      v4[1] = v25;
      *v4 = v38;
      *((_DWORD *)v4 + 4) = 1;
      this = (CPipeInstance *)v4[3];
      if ( this != v24 )
      {
        if ( v24 )
        {
          (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v24 + 8LL))(v24);
          this = (CPipeInstance *)v4[3];
        }
        if ( this )
          (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)this + 16LL))(this);
        v4[3] = (unsigned __int64)v24;
      }
    }
    else
    {
      v4 = 0LL;
    }
    v36 = v4;
    if ( !v4 )
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB06,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)0x8007000ELL,
        (int)v34);
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)v46 + 29) + 48LL))(*((_QWORD *)v46 + 29), v37);
      break;
    }
    v19 = 1;
    v47 = 1;
LABEL_31:
    if ( !*(_DWORD *)v10 )
      goto LABEL_43;
    v41 = *(_DWORD *)(v10 + 40);
    v43 = 1094927443;
    v20 = 0LL;
    v42 = 0LL;
    if ( v4 )
      v20 = *v4;
    v40 = v20;
    v21 = *(_QWORD *)(v10 + 24);
    if ( v21 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, CPipeInstance **))(*(_QWORD *)v21 + 16LL);
      goto LABEL_36;
    }
    v21 = *(_QWORD *)(v10 + 32);
    if ( v21 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, CPipeInstance **))(*(_QWORD *)v21 + 8LL);
LABEL_36:
      v3 = v22(v21, &v42);
      if ( v3 < 0 )
        goto LABEL_40;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v10 + 48) + 56LL))(
           *(_QWORD *)(v10 + 48),
           v39,
           v10 + 8);
    if ( v3 >= 0 && v4 )
    {
      *(_QWORD *)(v10 + 56) = v4;
      ++*((_DWORD *)v4 + 4);
    }
LABEL_40:
    this = v42;
    if ( v42 )
    {
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v42 + 16LL))(v42);
      this = 0LL;
      v42 = 0LL;
    }
    if ( v3 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_05a381e239823bc015f0eea1d9bc1631_Traceguids,
          (unsigned int)v3);
      }
      AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v3);
      v31 = retaddr;
      v32 = (unsigned int)v3;
      v33 = 2839LL;
      goto LABEL_79;
    }
LABEL_43:
    if ( !v19 )
    {
      this = (CPipeInstance *)v4;
      v4 = 0LL;
      v36 = 0LL;
      if ( this )
      {
        if ( (*((_DWORD *)this + 4))-- == 1 )
          CInPlaceBuffer::`scalar deleting destructor'(this, a2);
      }
    }
    if ( v9 )
    {
      while ( 1 )
      {
        v28 = (CConnectionInstance *)v9[2];
        v9 = (_QWORD *)*v9;
        Connection = CConnectionInstance::CreateConnection(v28, 0LL);
        v3 = Connection;
        if ( Connection < 0 )
          break;
        if ( !v9 )
          goto LABEL_46;
      }
      v31 = retaddr;
      v32 = (unsigned int)Connection;
      v33 = 2851LL;
      goto LABEL_79;
    }
LABEL_46:
    v3 = 0;
  }
  if ( v4 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v4);
  return (unsigned int)v3;
}
