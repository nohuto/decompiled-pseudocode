/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4740
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x1800227D8 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002283C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x1800229BC (--0AlpcPort@@AEAA@_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800250B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1800D43C0 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800D4510 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800D57CC (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800D5BA4 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800D647C (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800D65A8 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800D6CAC (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        unsigned int a2,
        void *a3,
        wil::details **a4,
        void **a5,
        void ***a6)
{
  void **v6; // rdi
  _DWORD *v10; // rsi
  int v11; // ebx
  __int64 result; // rax
  unsigned __int16 v13; // bx
  unsigned __int8 *v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // ax
  void *v17; // rdx
  AlpcPort *v18; // rax
  int *v19; // rax
  AlpcPort *v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // edx
  wil::details *v24; // rax
  wil::details *v25; // [rsp+50h] [rbp-B0h] BYREF
  wil::details *v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  AlpcPort *v28; // [rsp+68h] [rbp-98h]
  void *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int16 v31; // [rsp+80h] [rbp-80h]
  _QWORD v32[2]; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v33[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v34[72]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v35[25]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v36[68]; // [rsp+184h] [rbp+84h] BYREF
  _BYTE v37[72]; // [rsp+1C8h] [rbp+C8h] BYREF

  v6 = 0LL;
  *a4 = 0LL;
  v29 = a3;
  v28 = this;
  *a5 = 0LL;
  *a6 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v32[0] = 0LL;
  v32[1] = 0LL;
  memset_0(v33, 0, sizeof(v33));
  memset_0(v34, 0, 0x44uLL);
  v10 = (_DWORD *)((char *)this + 88);
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 88), 0xA4uLL, &v30) != 164 )
  {
    v11 = -2147418113;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL);
    return (unsigned int)v11;
  }
  v25 = 0LL;
  v26 = 0LL;
  memset_0(v35, 0, 0x54uLL);
  *(_QWORD *)&v35[21] = 0LL;
  *(_QWORD *)&v35[23] = 0LL;
  memset_0(v36, 0, sizeof(v36));
  memset_0(v37, 0, 0x44uLL);
  v11 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v35, (const struct SipcPrivateNamespaceAttributes *)v32);
  if ( v11 < 0 )
  {
    SipcPrivateNamespace::~SipcPrivateNamespace((void **)v35);
    return (unsigned int)v11;
  }
  v13 = 0;
  v14 = (unsigned __int8 *)&v30;
  v15 = 2LL;
  do
  {
    v16 = *v14++;
    v13 = v16 | (v13 << 8);
    --v15;
  }
  while ( v15 );
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v26,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v25,
    0LL);
  v11 = SipcSignalFactory::OpenServerEvents(v13, (const struct SipcPrivateNamespace *)v35, (void **)&v25, (void **)&v26);
  SipcPrivateNamespace::~SipcPrivateNamespace((void **)v35);
  if ( v11 < 0 )
  {
LABEL_9:
    if ( v26 )
      wil::details::CloseHandle(v26, v17);
    if ( v25 )
      wil::details::CloseHandle(v25, v17);
    return (unsigned int)v11;
  }
  v18 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v18 )
    v6 = (void **)AlpcPort::AlpcPort(v18, 0);
  if ( !v6 )
  {
    v11 = -2147024882;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
    goto LABEL_9;
  }
  v11 = SipcPort::InitializeSectionState((SipcPort *)v6, 0);
  if ( v11 < 0 )
  {
LABEL_18:
    AlpcPort::`scalar deleting destructor'((AlpcPort *)v6, 1);
    goto LABEL_9;
  }
  v27 = 0;
  v19 = (int *)((char *)&v27 + 3);
  do
  {
    *(_BYTE *)v19 = a2;
    a2 >>= 8;
    v19 = (int *)((char *)v19 - 1);
  }
  while ( v19 >= &v27 );
  v20 = v28;
  v10[10] = v27;
  *v10 = 2883588;
  v21 = *((_QWORD *)v20 + 7);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v6 + 7,
    0LL);
  v22 = NtAlpcAcceptConnectPort(v6 + 7, v21, 0LL, 0LL, &AlpcPort::ServerEndpointAlpcAttributes, v29, v10, 0LL, 1);
  if ( v22 < 0 )
  {
    v11 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v22, v23);
    goto LABEL_18;
  }
  if ( (((unsigned __int64)v6[7] + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = v22 | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(v22 | 0x90000000));
    goto LABEL_18;
  }
  v11 = AlpcPort::FillSectionListEntryPool((AlpcPort *)v6, 0x20uLL);
  if ( v11 < 0 )
    goto LABEL_18;
  memset_0(v10, 0, 0x28uLL);
  *((_QWORD *)v10 + 42) = 0LL;
  v24 = v25;
  *((_WORD *)v10 + 1) = 40;
  v10[84] = 1610612736;
  *a4 = v24;
  *a5 = v26;
  result = 0LL;
  *a6 = v6;
  return result;
}
