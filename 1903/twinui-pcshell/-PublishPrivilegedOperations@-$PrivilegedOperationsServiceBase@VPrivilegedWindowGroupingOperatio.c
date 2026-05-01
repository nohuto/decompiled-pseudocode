/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1801EB76C
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1801EB6F4 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPri.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data1;
  if ( *a3 == *(_QWORD *)&GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data4;
  if ( v3 )
  {
    v4 = -2147467263;
    v5 = 625LL;
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c,
         *(_QWORD *)(a1 + 8));
  if ( v4 < 0 )
  {
    v5 = 669LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
