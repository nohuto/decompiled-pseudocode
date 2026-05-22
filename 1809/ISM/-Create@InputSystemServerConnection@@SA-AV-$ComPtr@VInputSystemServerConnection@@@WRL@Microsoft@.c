/*
 * XREFs of ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18001741C
 * Callers:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18000C384 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180010FFC (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
struct ISMBamos_AutoBamos::BamoConnection **__fastcall InputSystemServerConnection::Create(
        struct ISMBamos_AutoBamos::BamoConnection **a1,
        __int64 a2)
{
  BOOL v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  int v13; // ebx
  void (__fastcall ***v14)(_QWORD); // rax
  InputSystem *v15; // rax
  InputSystem *v16; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *v17; // rdi
  InputSystem *v18; // rcx
  __int64 v19; // rcx
  InputSystem *v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp+48h] BYREF

  SecurityDescriptor = 0LL;
  v4 = ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-2616"
          "377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL);
  v6 = retaddr;
  if ( !v4 )
    goto LABEL_18;
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         SecurityDescriptor,
         &v24);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x21,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800176BBLL);
  }
  DWORD2(v22) = 1;
  *(_QWORD *)&v22 = 0LL;
  v9 = v24;
  *a1 = 0LL;
  v10 = (char *)operator new(0xA0uLL);
  memset_0(v10, 0, 0xA0uLL);
  *(_QWORD *)v10 = &ISMBamos_AutoBamos::BamoConnection::`vftable';
  *((_DWORD *)v10 + 4) = 1;
  *((_QWORD *)v10 + 1) = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  *((_QWORD *)v10 + 3) = v10;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_DWORD *)v10 + 10) = 0;
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 7) = 0LL;
  *((_QWORD *)v10 + 8) = 0LL;
  *((_QWORD *)v10 + 9) = 0LL;
  *((_QWORD *)v10 + 10) = 0LL;
  *((_QWORD *)v10 + 11) = 0LL;
  v10[96] = 0;
  *((_QWORD *)v10 + 18) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v10 + 104));
  *((_QWORD *)v10 + 1) = &BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::`vftable';
  *(_QWORD *)v10 = &InputSystemServerConnection::`vftable';
  *((_QWORD *)v10 + 19) = 0LL;
  v11 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 24LL))(v10);
  v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v11, a2, v9, &v22, L"System\\InputSystemConversation", 1);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a1 = (struct ISMBamos_AutoBamos::BamoConnection *)v10;
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x658,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v12);
    v14 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 24LL))(v10);
    (**v14)(v14);
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
    wil::details::in1diag3::FailFast_GetLastError(
      v6,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      v5);
    goto LABEL_19;
  }
  v21 = (InputSystem *)operator new(0x80uLL);
  v15 = InputSystem::InputSystem(v21, *a1);
  v16 = v15;
  v17 = *a1;
  v18 = (InputSystem *)*((_QWORD *)*a1 + 19);
  if ( v18 != v15 )
  {
    if ( v15 )
    {
      (**(void (__fastcall ***)(InputSystem *))v15)(v15);
      v18 = (InputSystem *)*((_QWORD *)v17 + 19);
    }
    *((_QWORD *)v17 + 19) = v16;
    if ( v18 )
      (*(void (__fastcall **)(InputSystem *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return a1;
}
