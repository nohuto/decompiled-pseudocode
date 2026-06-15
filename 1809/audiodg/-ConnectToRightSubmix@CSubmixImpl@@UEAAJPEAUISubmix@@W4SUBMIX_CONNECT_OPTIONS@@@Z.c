/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FDE0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400318CC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x14004164C (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(__int64, GUID *, __int64 *),
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 (__fastcall **v7)(__int64, GUID *, __int64 *); // rax
  int v8; // eax
  int v9; // edi
  void *v10; // r14
  unsigned int v11; // edx
  CPipeInstance *v12; // rcx
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  const struct tWAVEFORMATEX *v17; // rdi
  __int64 v18; // rax
  struct tWAVEFORMATEX *v19; // rdi
  __int64 v20; // rax
  int FormatConverterPipe; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-38h]
  void *v24; // [rsp+28h] [rbp-30h] BYREF
  char v25; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  __int64 v27; // [rsp+80h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+40h] BYREF

  if ( *((_BYTE *)a1 + 313) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x361,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v23);
    return 2147549183LL;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 22));
  v7 = *a2;
  v27 = 0LL;
  v8 = (*v7)((__int64)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8,
      v23);
  }
  else if ( a1[38] )
  {
    v9 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C002ELL,
      v23);
  }
  else
  {
    if ( (a3 & 1) != 0 || a1[29] >= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 56LL))(v27) )
    {
      pv = 0LL;
      v24 = 0LL;
      v25 = 1;
      v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 72LL))(v27, &v24);
      if ( v25 )
      {
        v10 = v24;
        if ( v24 != pv )
        {
          if ( pv )
            CoTaskMemFree(pv);
          pv = v10;
        }
      }
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x373,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v9,
          (int)&pv);
      }
      else
      {
        if ( (unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a1[27], (const struct tWAVEFORMATEX *)pv) )
        {
          v12 = (CPipeInstance *)a1[34];
          if ( v12 )
            CPipeInstance::`scalar deleting destructor'(v12, v11);
          a1[34] = 0LL;
          v13 = (void *)a1[35];
          if ( v13 )
          {
            CoTaskMemFree(v13);
            a1[35] = 0LL;
          }
          *((_BYTE *)a1 + 296) = 0;
          goto LABEL_18;
        }
        v17 = (const struct tWAVEFORMATEX *)pv;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 56LL))(v27);
        if ( a1[34] && a1[36] == v18 && (unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a1[35], v17)
          || (v19 = (struct tWAVEFORMATEX *)pv,
              v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 56LL))(v27),
              FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, v19, v20),
              v9 = FormatConverterPipe,
              FormatConverterPipe >= 0) )
        {
LABEL_18:
          v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 144LL))(a1, v27, 0LL);
          v9 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x38D,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v14,
              (int)&pv);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 152LL))(a1, v27);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v27 + 80LL))(v27, a1);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 136LL))(a1)
              && (v22 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v27 + 96LL))(v27, a1),
                  v9 = v22,
                  v22 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x39F,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                (const char *)(unsigned int)v22,
                (int)&pv);
              (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v27 + 88LL))(v27, a1);
            }
            else
            {
              v15 = a1[38];
              a1[38] = a2;
              ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a2)[1])(a2);
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              PublishDeviceGraphWnfState();
              v9 = 0;
            }
          }
          goto LABEL_23;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37C,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)FormatConverterPipe,
          (int)&pv);
      }
LABEL_23:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_25;
    }
    v9 = -2005139386;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C0046LL,
      v23);
  }
LABEL_25:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
