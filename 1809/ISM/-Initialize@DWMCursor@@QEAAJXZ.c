/*
 * XREFs of ?Initialize@DWMCursor@@QEAAJXZ @ 0x180107DF8
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180108034 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCurs.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x18009ED5C (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106D34 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180108810 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Initialize(DWMCursor *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r15
  char *v12; // rbp
  DWORD LastError; // ebx
  int v14; // eax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  v5 = retaddr;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    JUMPOUT(0x180107FD2LL);
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 8))(
           *((_QWORD *)this + 8),
           &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
           &v18);
    v5 = retaddr;
    if ( v6 < 0 )
    {
      v7 = 53LL;
LABEL_17:
      wil::details::in1diag3::_Log_Hr(
        v5,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_18;
    }
    v8 = v18;
    v9 = (_QWORD *)((char *)this + 72);
    v10 = *((_QWORD *)this + 9);
    if ( v10 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v8 + 216LL))(
           v8,
           &GUID_16cdff07_c503_419c_83f2_0965c7af1fa6,
           (char *)this + 72);
    v5 = retaddr;
    if ( v6 < 0 )
    {
      v7 = 55LL;
      goto LABEL_17;
    }
    v11 = v18;
    v12 = (char *)*((_QWORD *)this + 10);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v12);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v11 + 224LL))(v11, *v9, (char *)this + 80);
    v5 = retaddr;
    if ( v6 < 0 )
    {
      v7 = 57LL;
      goto LABEL_17;
    }
  }
  TestCommandHost::RegisterForTestCommandMessage(
    (__int64)v5,
    (__int64)this,
    (__int64)lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_,
    (__int64)this + 136);
  v14 = DWMCursor::CheckAndUpdateDpiScale(this, 0);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v14);
  v6 = DWMCursorBroker::RegisterCursor(*((DWMCursorBroker **)this + 4), this);
  *((_BYTE *)this + 57) = v6 >= 0;
  v5 = retaddr;
  if ( v6 < 0 )
  {
    v7 = 74LL;
    goto LABEL_17;
  }
LABEL_18:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
