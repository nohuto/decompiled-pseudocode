/*
 * XREFs of ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800E2D18
 * Callers:
 *     ?Thunk_MarkProxyReady_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800E2640 (-Thunk_MarkProxyReady_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diagnos.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800E2B10 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180196D00 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180250ECC (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180250FF8 (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct Microsoft::BamoImpl::ConversationItem *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  if ( (_DWORD)a3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 5) + 56LL))(
           *((_QWORD *)this + 5),
           a2,
           a3,
           &v8);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29A,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4,
        v6);
      __debugbreak();
    }
    return (struct Microsoft::BamoImpl::ConversationItem *)v8;
  }
  return (struct Microsoft::BamoImpl::ConversationItem *)v3;
}
