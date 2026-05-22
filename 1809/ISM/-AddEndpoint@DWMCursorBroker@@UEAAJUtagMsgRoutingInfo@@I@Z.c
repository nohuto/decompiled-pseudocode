/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I@Z @ 0x180106540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180106884 (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, __int64 a2, int a3)
{
  DWMCursorBroker *v4; // r14
  _QWORD *v6; // rbx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  __int64 ***v14; // rdi
  __int64 **i; // rbx
  _BYTE v17[40]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (DWMCursorBroker *)(a1 - 8);
  v6 = (_QWORD *)(a1 + 208);
  v8 = 0;
  while ( *v6 )
  {
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**(_QWORD **)(a1 + 168) + 112LL))(
           *(_QWORD *)(a1 + 168),
           *v6,
           v17) >= 0 )
    {
      v9 = *v6;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 144LL))(*(_QWORD *)(a1 + 168), *v6);
      *v6 = 0LL;
      v9 = 0LL;
    }
    if ( !v9 )
      break;
    ++v8;
    v6 += 2;
    if ( v8 >= 0xA )
    {
      v10 = 2147500037LL;
      v11 = 212LL;
LABEL_17:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)v10);
      return 0LL;
    }
  }
  v12 = 16LL * v8;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 168) + 96LL))(
          *(_QWORD *)(a1 + 168),
          a2,
          v12 + a1 + 208);
  if ( v13 < 0 )
  {
    v11 = 216LL;
LABEL_16:
    v10 = (unsigned int)v13;
    goto LABEL_17;
  }
  *(_DWORD *)(v12 + a1 + 200) = a3;
  v14 = *(__int64 ****)(a1 + 48);
  for ( i = *v14; i != (__int64 **)v14; i = (__int64 **)*i )
  {
    v13 = DWMCursorBroker::DuplicateHandleAndVerifySend(v4, (struct DWMCursor *)i[4], v8);
    if ( v13 < 0 )
    {
      v11 = 222LL;
      goto LABEL_16;
    }
  }
  return 0LL;
}
