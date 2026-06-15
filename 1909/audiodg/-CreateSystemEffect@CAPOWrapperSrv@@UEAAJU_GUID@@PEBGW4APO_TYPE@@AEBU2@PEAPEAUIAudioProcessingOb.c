/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140007E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1400083C0 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C60 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CDC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0CSystemEffectWrapper@@QEAA@XZ @ 0x140008D14 (--0CSystemEffectWrapper@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x140035B10 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  void *v10; // rax
  CSystemEffectWrapper *v11; // rax
  CSystemEffectWrapper *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v21; // [rsp+20h] [rbp-D8h]
  char *v22; // [rsp+28h] [rbp-D0h]
  __int64 (__fastcall ****v23)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-C8h]
  __int64 v24; // [rsp+80h] [rbp-78h] BYREF
  __int64 v25; // [rsp+88h] [rbp-70h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-68h] BYREF
  __int128 v27; // [rsp+98h] [rbp-60h]
  __int128 v28; // [rsp+A8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v27 = *a2;
  v28 = v27;
  EtwEventActivityIdControl(4LL, &v28);
  *a6 = 0LL;
  if ( !a4 )
  {
    v15 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)0x80070057LL,
      v21);
    goto LABEL_23;
  }
  v9 = 0LL;
  v26 = 0LL;
  v10 = AERTGetDLLRTHeap();
  v11 = (CSystemEffectWrapper *)AERTAllocate(0xE8uLL, v10);
  if ( v11 && (v12 = CSystemEffectWrapper::CSystemEffectWrapper(v11)) != 0LL )
  {
    v23 = &v26;
    v14 = CSystemEffectWrapper::Init(v12, a5, v13, a3);
    v9 = v26;
    v15 = v14;
    if ( v14 >= 0 )
    {
      v24 = 0LL;
      v16 = (**v26)(v26, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v24);
      v15 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)(unsigned int)v16,
          a4);
      }
      else
      {
        v25 = 0LL;
        if ( v24
          && ((**(void (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
                v24,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v25),
              v25) )
        {
          v17 = *(_QWORD *)(a1 + 88);
          v18 = v24;
          if ( v17 != v24 )
          {
            if ( v24 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
              v17 = *(_QWORD *)(a1 + 88);
            }
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            *(_QWORD *)(a1 + 88) = v18;
          }
          if ( a1 )
            v19 = a1 + 8;
          else
            v19 = 0LL;
          *a6 = v19;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v15 = 0;
        }
        else
        {
          v15 = -2147467262;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x34,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
            (const char *)0x80004002LL,
            a4);
        }
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_21;
    }
  }
  else
  {
    v15 = -2147024882;
  }
  LODWORD(v23) = *(unsigned __int16 *)(a5 + 4);
  LODWORD(v22) = *(_DWORD *)a5;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x2E,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
    (const char *)v15,
    (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v22,
    v23,
    *(unsigned __int16 *)(a5 + 6),
    *(unsigned __int8 *)(a5 + 8),
    *(unsigned __int8 *)(a5 + 9),
    *(unsigned __int8 *)(a5 + 10),
    *(unsigned __int8 *)(a5 + 11),
    *(unsigned __int8 *)(a5 + 12),
    *(unsigned __int8 *)(a5 + 13),
    *(unsigned __int8 *)(a5 + 14),
    *(unsigned __int8 *)(a5 + 15));
LABEL_21:
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
LABEL_23:
  EtwEventActivityIdControl(4LL, &v28);
  return v15;
}
