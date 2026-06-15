/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000DB70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140001D7C (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046A4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14000DE00 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000DE5C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x14003DE6C (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(_QWORD *a1, _QWORD *a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 (__fastcall **v7)(_QWORD *, GUID *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  const struct tWAVEFORMATEX *v20; // rsi
  __int64 v21; // rax
  struct tWAVEFORMATEX *v22; // rbx
  __int64 v23; // rax
  int FormatConverterPipe; // eax
  int v25; // eax
  int v26; // [rsp+20h] [rbp-20h]
  void *v27; // [rsp+28h] [rbp-18h] BYREF
  char v28; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v30; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  if ( *((_BYTE *)a1 + 313) )
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x366,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v26);
    return v9;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 22));
  v7 = (__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2;
  v30 = 0LL;
  v8 = (*v7)(a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v30);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = (unsigned int)v8;
    v17 = 874LL;
  }
  else
  {
    if ( a1[38] )
    {
      v9 = -2005139410;
      v17 = 879LL;
    }
    else
    {
      if ( (a3 & 1) != 0 || a1[29] >= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 56LL))(v30) )
      {
        pv = 0LL;
        v27 = 0LL;
        v28 = 1;
        v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v30 + 72LL))(v30, &v27);
        if ( v28 )
        {
          v10 = pv;
          pv = v27;
          if ( v10 )
            CoTaskMemFree(v10);
        }
        if ( (v9 & 0x80000000) != 0 )
        {
          v18 = v9;
          v19 = 888LL;
        }
        else
        {
          if ( (unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a1[27], (const struct tWAVEFORMATEX *)pv) )
          {
            CFormatConverterPipe::Reset((CFormatConverterPipe *)(a1 + 34));
LABEL_12:
            v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 144LL))(a1, v30, 0LL);
            v9 = v11;
            if ( v11 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x392,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                (const char *)(unsigned int)v11,
                (int)&pv);
              (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 152LL))(a1, v30);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v30 + 80LL))(v30, a1);
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 136LL))(a1)
                && (v25 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v30 + 96LL))(v30, a1),
                    v9 = v25,
                    v25 < 0) )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3A4,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  (const char *)(unsigned int)v25,
                  (int)&pv);
                (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v30 + 88LL))(v30, a1);
              }
              else
              {
                wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(a1 + 38, (__int64)a2);
                PublishDeviceGraphWnfState(v13, v12);
                v9 = 0;
              }
            }
LABEL_15:
            v14 = pv;
            pv = 0LL;
            if ( v14 )
              CoTaskMemFree(v14);
            goto LABEL_17;
          }
          v20 = (const struct tWAVEFORMATEX *)pv;
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 56LL))(v30);
          if ( a1[34] && a1[36] == v21 && (unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a1[35], v20) )
            goto LABEL_12;
          v22 = (struct tWAVEFORMATEX *)pv;
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 56LL))(v30);
          FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, v22, v23);
          v9 = FormatConverterPipe;
          if ( FormatConverterPipe >= 0 )
            goto LABEL_12;
          v18 = (unsigned int)FormatConverterPipe;
          v19 = 897LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)v18,
          (int)&pv);
        goto LABEL_15;
      }
      v9 = -2005139386;
      v17 = 884LL;
    }
    v16 = v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v16,
    v26);
LABEL_17:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v30);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v9;
}
