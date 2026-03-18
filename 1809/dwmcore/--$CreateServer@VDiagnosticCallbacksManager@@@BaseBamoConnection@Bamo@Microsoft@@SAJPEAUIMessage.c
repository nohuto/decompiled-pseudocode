/*
 * XREFs of ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x180061DC4
 * Callers:
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180061AD4 (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x180061E90 (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800857D8 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18014BDBC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        DiagnosticCallbacksManager **a5)
{
  DiagnosticCallbacksManager *v8; // rax
  DiagnosticCallbacksManager *v9; // rax
  DiagnosticCallbacksManager *v10; // rsi
  Microsoft::Bamo::BaseBamoConnection *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  const char *v19; // [rsp+20h] [rbp-38h]
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = (DiagnosticCallbacksManager *)WPF::ProcessHeapImpl::AllocClear(0xB8uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9 = DiagnosticCallbacksManager::DiagnosticCallbacksManager(v8);
  v10 = v9;
  v11 = v9;
  if ( v9 )
  {
    v12 = *(_QWORD *)v9;
    v20 = *a3;
    v13 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(v12 + 24))(v11);
    v19 = L"Microsoft.DiagCallbackConversation";
    v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v13, a1, a2, &v20);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v11 = 0LL;
      *a5 = v10;
      v15 = 0;
      goto LABEL_5;
    }
    v18 = (unsigned int)v14;
    v17 = 1624LL;
  }
  else
  {
    v15 = -2147024882;
    v17 = 1622LL;
    v18 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v18,
    (int)v19);
LABEL_5:
  if ( v11 )
    Microsoft::Bamo::BaseBamoConnection::Release(v11);
  return v15;
}
