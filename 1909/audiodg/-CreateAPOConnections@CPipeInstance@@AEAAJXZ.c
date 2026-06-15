/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000A0D0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009EBC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040E8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x14000A2DC (-CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z.c)
 *     ?CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z @ 0x14000A3E0 (-CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14000B370 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000B394 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x140035824 (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnections(struct IUnknown **this)
{
  CPipeInstance *v1; // r15
  struct IUnknown **v2; // rbx
  char v3; // r12
  struct IUnknown *v4; // rdi
  struct IUnknown *v5; // rax
  struct IUnknown *Prev; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  _QWORD *v8; // rbp
  CConnectionInstance *v9; // r14
  HRESULT (__stdcall *v10)(IUnknown *, const IID *const, void **); // rdx
  struct CConnectionInstance *v11; // rdx
  int Connection; // eax
  unsigned int v13; // esi
  int v15; // eax
  struct IUnknown *v16; // rdx
  unsigned __int64 v17; // rax
  CConnectionInstance **Next; // rax
  int v19; // eax
  unsigned __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IUnknown *v22; // [rsp+80h] [rbp+8h] BYREF
  struct IUnknown **v23; // [rsp+88h] [rbp+10h]
  _QWORD *v24; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v20[1] = -2LL;
  v1 = (CPipeInstance *)this;
  v2 = 0LL;
  v23 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 3) )
    v4 = this[9];
  else
    v4 = this[8];
  v22 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v1 + 3) )
      {
        Prev = (struct IUnknown *)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                                    this,
                                    &v22);
        v4 = v22;
      }
      else
      {
        v5 = v4;
        v4 = (struct IUnknown *)v4->lpVtbl;
        v22 = v4;
        Prev = v5 + 2;
      }
      QueryInterface = Prev->lpVtbl->QueryInterface;
      if ( !QueryInterface )
        ATL::AtlThrowImpl(-2147467259);
      v8 = *(_QWORD **)QueryInterface;
      v24 = *(_QWORD **)QueryInterface;
      v9 = (CConnectionInstance *)*((_QWORD *)QueryInterface + 2);
      if ( v4 )
      {
        v10 = v4[2].lpVtbl->QueryInterface;
        if ( !v10 )
          ATL::AtlThrowImpl(-2147467259);
        v11 = (struct CConnectionInstance *)*((_QWORD *)v10 + 2);
      }
      else
      {
        v11 = 0LL;
      }
      if ( (unsigned int)CConnectionInstance::CanDoInPlace(v9, v11) )
      {
        if ( !v2 )
        {
          v15 = CConnectionInstance::CreateConnectionBuffer(v9, &v25, v20);
          v13 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB07,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
              (const char *)(unsigned int)v15,
              v20[0]);
            goto LABEL_20;
          }
          v2 = (struct IUnknown **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v23 = v2;
          if ( v2 )
          {
            v16 = (struct IUnknown *)*((_QWORD *)v1 + 30);
            v17 = v25;
            v2[3] = 0LL;
            v2[1] = (struct IUnknown *)v17;
            *v2 = (struct IUnknown *)v20[0];
            *((_DWORD *)v2 + 4) = 1;
            if ( v2[3] != v16 )
              ATL::AtlComPtrAssign(v2 + 3, v16);
          }
          else
          {
            v2 = 0LL;
          }
          v23 = v2;
          if ( !v2 )
          {
            v13 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB0C,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
              (const char *)0x8007000ELL,
              v20[0]);
            (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)v1 + 30) + 48LL))(
              *((_QWORD *)v1 + 30),
              v25);
            goto LABEL_20;
          }
          v3 = 1;
        }
      }
      else if ( v2 )
      {
        v3 = 0;
      }
      Connection = CConnectionInstance::CreateConnection(v9, (struct CInPlaceBuffer *)v2);
      v13 = Connection;
      if ( Connection < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1D,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)Connection,
          v20[0]);
        goto LABEL_20;
      }
      if ( !v3 )
      {
        this = v2;
        v2 = 0LL;
        v23 = 0LL;
        if ( this )
          CInPlaceBuffer::Release((CInPlaceBuffer *)this);
      }
      if ( v8 )
        break;
LABEL_18:
      if ( !v4 )
        goto LABEL_19;
    }
    while ( 1 )
    {
      Next = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                       (__int64)this,
                                       &v24);
      v19 = CConnectionInstance::CreateConnection(*Next, 0LL);
      v13 = v19;
      if ( v19 < 0 )
        break;
      if ( !v24 )
        goto LABEL_18;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB29,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v19,
      v20[0]);
  }
  else
  {
LABEL_19:
    v13 = 0;
  }
LABEL_20:
  if ( v2 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v2);
  return v13;
}
