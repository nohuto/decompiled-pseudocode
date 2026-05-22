/*
 * XREFs of ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180106884
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I@Z @ 0x180106540 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I@Z.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106D34 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::DuplicateHandleAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  __int128 v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+48h] [rbp-21h]
  _BYTE v19[8]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v20; // [rsp+58h] [rbp-11h]
  __int128 v21; // [rsp+68h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v16 = 0LL;
  v4 = a3;
  v6 = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)a2 + 10), *((unsigned int *)this + 4 * a3 + 52), &v16);
  if ( v6 >= 0 )
    v7 = 0;
  else
    v7 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xAF,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
           (const char *)(unsigned int)v6);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)a2;
    v19[0] = 0;
    v9 = *(_OWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, __int128 *))(v8 + 40))(a2, &v17);
    v10 = *(_QWORD *)a2;
    v20 = v9;
    LODWORD(v17) = (*(__int64 (__fastcall **)(struct DWMCursor *))(v10 + 48))(a2);
    *((_QWORD *)&v17 + 1) = v16;
    v11 = (*(__int64 (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 56LL))(a2);
    v12 = *((_QWORD *)this + 22);
    LODWORD(v18) = v11;
    v13 = 2 * v4;
    v21 = v17;
    v14 = *((_QWORD *)this + v13 + 27);
    v22 = v18;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, int))(*(_QWORD *)v12 + 152LL))(
           v12,
           v14,
           4LL,
           v19,
           64);
    if ( v7 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 144LL))(
        *((_QWORD *)this + 22),
        *((_QWORD *)this + v13 + 27));
      *((_QWORD *)this + v13 + 27) = 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v7);
  }
  return (unsigned int)v7;
}
