/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400089C0
 * Callers:
 *     <none>
 * Callees:
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x140008FF0 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000ADF0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000AE7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0CSystemEffectWrapper@@QEAA@XZ @ 0x14000AEB4 (--0CSystemEffectWrapper@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003B14C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        char *a3,
        int a4,
        struct _GUID *a5,
        _QWORD *a6)
{
  __int128 v6; // xmm0
  int ExceptionRecord; // r15d
  char *v11; // rbx
  void *v12; // rax
  CSystemEffectWrapper *v13; // rax
  CSystemEffectWrapper *v14; // rax
  __int64 v15; // r8
  const struct _GUID *v16; // r9
  CSystemEffectWrapper *v17; // rbp
  struct _GUID v18; // xmm0
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  char *v21; // rax
  char *v22; // r10
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  char *v25; // rsi
  _WORD *v26; // rdx
  __int16 v27; // cx
  unsigned __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  CONTEXT *v31; // rcx
  PCONTEXT ContextRecord; // rdi
  __int64 v33; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  LPVOID *v37; // [rsp+20h] [rbp-F8h]
  struct _EXCEPTION_POINTERS *v38; // [rsp+28h] [rbp-F0h]
  struct _EXCEPTION_POINTERS v39; // [rsp+80h] [rbp-98h] BYREF
  __int64 v40; // [rsp+90h] [rbp-88h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp-80h]
  _OWORD v42[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v6 = *a2;
  v41 = a6;
  v42[1] = v6;
  v43 = v6;
  EtwEventActivityIdControl(4LL, &v43);
  ExceptionRecord = 0;
  *a6 = 0LL;
  if ( !a4 )
  {
    ExceptionRecord = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)0x80070057LL,
      (int)v37);
    goto LABEL_45;
  }
  v11 = 0LL;
  v12 = AERTGetDLLRTHeap();
  v13 = (CSystemEffectWrapper *)AERTAllocate(0xE0uLL, v12);
  if ( !v13 || (v14 = CSystemEffectWrapper::CSystemEffectWrapper(v13), (v17 = v14) == 0LL) )
  {
    ExceptionRecord = -2147024882;
    goto LABEL_62;
  }
  v18 = *a5;
  *((_DWORD *)v14 + 30) = a4;
  v19 = -1LL;
  *((_QWORD *)v14 + 16) = 0LL;
  *((struct _GUID *)v14 + 6) = v18;
  do
    ++v19;
  while ( *(_WORD *)&a3[2 * v19] );
  v20 = v19 + 1;
  *((_QWORD *)v14 + 14) = 0LL;
  if ( v19 + 1 < v19 )
  {
    ExceptionRecord = -2147024362;
  }
  else
  {
    *((_QWORD *)v14 + 14) = 0LL;
    if ( !is_mul_ok(v20, 2uLL) )
    {
      ExceptionRecord = -2147024362;
LABEL_21:
      LODWORD(v39.ExceptionRecord) = ExceptionRecord;
      if ( ExceptionRecord < 0 )
        goto LABEL_62;
      ExceptionRecord = APOCatchCoCreateInstance(a5, (struct IUnknown *)v17 + 1, v15, v16, (LPVOID *)v17 + 11, &v39);
      if ( ExceptionRecord < 0 )
      {
        v35 = *((unsigned int *)v17 + 30);
        v36 = *((_QWORD *)v17 + 14);
        v42[0] = *((_OWORD *)v17 + 6);
        v37 = (LPVOID *)"CSystemEffectWrapper::Init";
        APOTrackAndLogException(v29, v36, v35, v42);
      }
      else
      {
        ExceptionRecord = (int)v39.ExceptionRecord;
      }
      if ( ExceptionRecord < 0 )
        goto LABEL_62;
      v11 = (char *)v17 + 8;
      goto LABEL_26;
    }
    v21 = (char *)CoTaskMemAlloc(2 * v20);
    *((_QWORD *)v17 + 14) = v21;
    v22 = v21;
    if ( v21 )
    {
      if ( v20 > 0x7FFFFFFF )
      {
        if ( v19 != -1LL )
          *(_WORD *)v21 = 0;
      }
      else if ( v19 >= 0x7FFFFFFF )
      {
        if ( v19 != -1LL )
          *(_WORD *)v21 = 0;
      }
      else
      {
        if ( !a3 )
        {
          a3 = (char *)&unk_14006CF10;
          v19 = 0LL;
        }
        if ( v20 )
        {
          LODWORD(v15) = 0;
          v16 = 0LL;
          v23 = v19 - v20;
          v24 = v20;
          v25 = (char *)(a3 - v22);
          v26 = v22;
          while ( v23 + v24 )
          {
            v27 = *(_WORD *)((char *)v26 + (_QWORD)v25);
            if ( !v27 )
              break;
            *v26 = v27;
            v16 = (const struct _GUID *)((char *)v16 + 1);
            ++v26;
            if ( !--v24 )
            {
              --v26;
              LODWORD(v15) = -2147024774;
              v16 = (const struct _GUID *)((char *)v16 - 1);
              break;
            }
          }
          v28 = v20 - (_QWORD)v16;
          *v26 = 0;
          if ( (int)v15 >= 0 && v28 > 1 )
          {
            v15 = 2 * v28;
            if ( 2 * v28 > 2 )
              memset_0(&v22[2 * ((_QWORD)&v16->Data1 + 1)], 0, v15 - 2);
          }
        }
      }
      goto LABEL_21;
    }
    ExceptionRecord = -2147024882;
  }
LABEL_26:
  if ( ExceptionRecord >= 0 )
  {
    v39.ContextRecord = 0LL;
    v30 = (**(__int64 (__fastcall ***)(char *, GUID *, PCONTEXT *))v11)(
            v11,
            &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
            &v39.ContextRecord);
    ExceptionRecord = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
        (const char *)(unsigned int)v30,
        (int)v37);
    }
    else
    {
      v40 = 0LL;
      if ( v39.ContextRecord
        && ((*(void (__fastcall **)(PCONTEXT, GUID *, __int64 *))v39.ContextRecord->P1Home)(
              v39.ContextRecord,
              &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
              &v40),
            v40) )
      {
        v31 = *(CONTEXT **)(a1 + 88);
        ContextRecord = v39.ContextRecord;
        if ( v31 != v39.ContextRecord )
        {
          if ( v39.ContextRecord )
          {
            (*(void (__fastcall **)(PCONTEXT))(v39.ContextRecord->P1Home + 8))(v39.ContextRecord);
            v31 = *(CONTEXT **)(a1 + 88);
          }
          if ( v31 )
            (*(void (__fastcall **)(CONTEXT *))(v31->P1Home + 16))(v31);
          *(_QWORD *)(a1 + 88) = ContextRecord;
        }
        if ( a1 )
          v33 = a1 + 8;
        else
          v33 = 0LL;
        *v41 = v33;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
        ExceptionRecord = 0;
      }
      else
      {
        ExceptionRecord = -2147467262;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)0x80004002LL,
          (int)v37);
      }
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    if ( v39.ContextRecord )
      (*(void (__fastcall **)(PCONTEXT))(v39.ContextRecord->P1Home + 16))(v39.ContextRecord);
    goto LABEL_43;
  }
LABEL_62:
  LODWORD(v38) = a5->Data1;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x2E,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
    (const char *)(unsigned int)ExceptionRecord,
    (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    (const char *)v38,
    a5->Data2,
    a5->Data3,
    a5->Data4[0],
    a5->Data4[1],
    a5->Data4[2],
    a5->Data4[3],
    a5->Data4[4],
    a5->Data4[5],
    a5->Data4[6],
    a5->Data4[7]);
LABEL_43:
  if ( v11 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_45:
  EtwEventActivityIdControl(4LL, &v43);
  return (unsigned int)ExceptionRecord;
}
