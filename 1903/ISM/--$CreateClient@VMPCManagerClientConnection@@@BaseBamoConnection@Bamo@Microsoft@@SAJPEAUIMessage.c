/*
 * XREFs of ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18010EDD4
 * Callers:
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x180113E80 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ @ 0x1800244C4 (--0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180024780 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(
        __int64 *a1,
        __int128 *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0xA8uLL);
  memset_0(v7, 0, 0xA8uLL);
  MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection((MPCManagerBamo_AutoBamos::BamoConnection *)v7);
  *v7 = &MPCManagerClientConnection::`vftable';
  v7[19] = 0LL;
  v7[20] = 0LL;
  v8 = (Microsoft::Bamo::BaseBamoConnection *)v7;
  v9 = ((__int64 (__fastcall *)(_QWORD *))*(&MPCManagerClientConnection::`vftable' + 3))(v7);
  v13 = *a2;
  v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v9, a1, 0LL, &v13, L"System\\MPCManagerConversation", 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v8 = 0LL;
    *a4 = v7;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x684,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
  }
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  return v11;
}
