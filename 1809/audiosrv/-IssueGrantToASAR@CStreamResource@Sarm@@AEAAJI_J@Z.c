/*
 * XREFs of ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x180117E38
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1801183DC (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B3720 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::IssueGrantToASAR(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  int v17; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  char *v21; // [rsp+80h] [rbp-29h]
  int v22; // [rsp+88h] [rbp-21h]
  int v23; // [rsp+8Ch] [rbp-1Dh]
  char *v24; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+98h] [rbp-11h]
  int v26; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v27; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]
  _QWORD *v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  int v32; // [rsp+BCh] [rbp+13h]
  int *v33; // [rsp+C0h] [rbp+17h]
  int v34; // [rsp+C8h] [rbp+1Fh]
  int v35; // [rsp+CCh] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v19[1] = -2LL;
  v16 = a2;
  v5 = *(_QWORD *)this;
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      249LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v5 + 128LL))(v5, &v18);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = 252LL;
LABEL_10:
    v12 = (unsigned int)v6;
    goto LABEL_11;
  }
  v11 = v18;
  if ( !v18 )
  {
    v9 = -2005139195;
    v12 = 2289828101LL;
    v10 = 253LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)v12);
    goto LABEL_15;
  }
  if ( (*((_DWORD *)this + 12) & 0x800000) != 0 )
  {
    v13 = *v18;
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v13 + 64))(v11, v14, v16, a3);
    v9 = v6;
    if ( v6 < 0 )
    {
      v10 = 258LL;
      goto LABEL_10;
    }
  }
  if ( (unsigned int)dword_1801B1350 > 4 )
  {
    v21 = (char *)this + 40;
    v22 = 8;
    v23 = 0;
    v24 = (char *)this + 16;
    v25 = 16;
    v26 = 0;
    v27 = &v16;
    v28 = 4;
    v29 = 0;
    v19[0] = a3;
    v30 = v19;
    v31 = 8;
    v32 = 0;
    v17 = *((_DWORD *)this + 13);
    v33 = &v17;
    v34 = 4;
    v35 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_18017576A, v7, v8, 7u, &pData);
  }
  v9 = 0;
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
  return v9;
}
