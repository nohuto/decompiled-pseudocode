/*
 * XREFs of ?Initialize@CursorManager@@IEAAJXZ @ 0x1800D982C
 * Callers:
 *     ?Initialize@SystemCursorService@@QEAAJXZ @ 0x1800953C4 (-Initialize@SystemCursorService@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D964C (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x1800D9FD8 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Det.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorManager::Initialize(CursorManager *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int Descriptor; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  void *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v24; // [rsp+80h] [rbp+30h] BYREF
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF
  _QWORD *v26; // [rsp+90h] [rbp+40h] BYREF
  CursorManager *v27; // [rsp+98h] [rbp+48h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v2 = (_QWORD *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Descriptor = CoreUICreate(v2);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 64LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)Descriptor);
    goto LABEL_24;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v21, v5, (__int64)L"System\\Input\\CursorManagerPort");
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 68LL;
    goto LABEL_19;
  }
  v8 = *v2;
  v9 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD **))(*(_QWORD *)v8 + 48LL))(
                 v8,
                 v21,
                 L"System\\Input\\CursorManagerPort",
                 &v26);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 73LL;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), CursorManager *, _QWORD *, char *))(*(_QWORD *)*v2 + 80LL))(
                 *v2,
                 CursorManager::OnCoreMessageStatic,
                 this,
                 v26,
                 (char *)this + 64);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 79LL;
    goto LABEL_19;
  }
  v10 = *v2;
  v11 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v25);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 81LL;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v25 + 40LL))(
                 v25,
                 L"System\\Input\\CursorManagerEndpoint",
                 *((_QWORD *)this + 8),
                 1LL);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 86LL;
    goto LABEL_19;
  }
  v27 = this;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,CursorManager *>(
          (char *)this + 48,
          v12,
          v13,
          &v27);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x1800D9A62LL);
  }
  v24 = 1;
  v15 = RtlPublishWnfStateData(WNF_ISM_CURSOR_MANAGER_READY, 0LL, &v24, 4LL, 0LL);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_NtStatus(retaddr, v16, v17, (const char *)(unsigned int)v15);
  v6 = 0;
LABEL_24:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v21);
  v18 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 16LL))(v19, *v19);
  }
  return v6;
}
