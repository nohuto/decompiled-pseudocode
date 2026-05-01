/*
 * XREFs of ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1801EAF54
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180116F38 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1801EAFA8 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 */

__int64 __fastcall InitializePrivilegedOperationsForIam(struct IPrivilegedOperationsConsumer *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !PrivilegedOperationsService::s_this )
  {
    v1 = -2147467259;
    v2 = 932LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v1);
    return v1;
  }
  v1 = PrivilegedOperationsService::InitializePrivilegedOperationsForIam(a1, a1);
  if ( (v1 & 0x80000000) != 0 )
  {
    v2 = 933LL;
    goto LABEL_5;
  }
  return v1;
}
