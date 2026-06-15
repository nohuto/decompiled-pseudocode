/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18002ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edi
  int v27; // eax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v43[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( !*((_BYTE *)this + 45) )
    *((_DWORD *)this + 31) = 1;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v42 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v8 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v41 = 0LL;
      v10 = (**v9)(v9, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v41);
      v11 = v41;
      if ( v10 >= 0 )
      {
        v29 = *((_QWORD *)this + 21);
        *((_QWORD *)this + 21) = v41;
        if ( v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          v11 = v41;
        }
        if ( v29 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          v11 = v41;
        }
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v41 = 0LL;
      v13 = (**v12)(v12, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v41);
      v14 = v41;
      if ( v13 >= 0 )
      {
        v30 = *((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = v41;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v14 = v41;
        }
        if ( v30 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          v14 = v41;
        }
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v41 = 0LL;
      v16 = (**v15)(v15, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v41);
      v17 = v41;
      if ( v16 >= 0 )
      {
        v34 = *((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = v41;
        if ( v17 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          v17 = v41;
        }
        if ( v34 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          v17 = v41;
        }
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v41 = 0LL;
      if ( (int)(**v18)(v18, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v41) >= 0 )
      {
        v31 = v41;
        v32 = *((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = v41;
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v33 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 32LL))(
                *((_QWORD *)this + 23),
                (char *)this + 88);
        if ( v33 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x27F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v33,
            v41);
      }
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v41 = 0LL;
      if ( (int)(**v19)(v19, &GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae, &v41) >= 0 )
      {
        v35 = v41;
        v36 = *((_QWORD *)this + 25);
        *((_QWORD *)this + 25) = v41;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 32LL))(
                *((_QWORD *)this + 25),
                *((unsigned int *)this + 20));
        if ( v37 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x288,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v37,
            v41);
      }
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v41 = 0LL;
      v21 = (**v20)(v20, &GUID_8ab91395_f920_4132_873f_7a40607f7901, &v41);
      v22 = v41;
      if ( v21 >= 0 )
      {
        v38 = *((_QWORD *)this + 26);
        *((_QWORD *)this + 26) = v41;
        if ( v22 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          v22 = v41;
        }
        if ( v38 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          v22 = v41;
        }
      }
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v23 = v42;
      v42 = 0LL;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( ((__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_0e0823fe_8765_49d4_9cca_c008a449bef1,
             &v42) >= 0 )
      {
        v39 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 9) + 528LL))(*((_QWORD *)this + 9), v43);
        v26 = v39;
        if ( v39 < 0 )
        {
          v40 = 668LL;
LABEL_77:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v40,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v39);
          if ( v7 )
            LeaveCriticalSection(v7);
          goto LABEL_37;
        }
        v39 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v42 + 24LL))(v42, v43);
        v26 = v39;
        if ( v39 < 0 )
        {
          v40 = 669LL;
          goto LABEL_77;
        }
      }
      if ( !*((_QWORD *)this + 21)
        || !*((_QWORD *)this + 22)
        || !*((_QWORD *)this + 24)
        || !*((_QWORD *)this + 23)
        || !*((_QWORD *)this + 25)
        || !v42 )
      {
        ++v8;
        ++a4;
        if ( v8 < a3 )
          continue;
      }
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( *((_BYTE *)this + 45) )
    goto LABEL_36;
  v24 = *((_QWORD *)this + 21);
  if ( !v24 )
  {
    v26 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL);
    goto LABEL_37;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v26 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL);
    goto LABEL_37;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 40LL))(v24, &v41);
  v26 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_37;
  }
  v27 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)this + 144LL))(this, (unsigned int)v41);
  v26 = v27;
  if ( v27 >= 0 )
  {
LABEL_36:
    v26 = 0;
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B3,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v27);
LABEL_37:
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  return v26;
}
