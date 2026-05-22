/*
 * XREFs of ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x1800242A4
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180022524 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800246B8 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180024780 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<InputSystemServerConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r14
  Microsoft::Bamo::BaseBamoConnection *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  char v14; // [rsp+28h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a5 = 0LL;
  v8 = operator new(0xA0uLL);
  memset_0(v8, 0, 0xA0uLL);
  *v8 = &ISMBamos_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v8 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v8);
  v8[1] = &BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::`vftable';
  *v8 = &InputSystemServerConnection::`vftable';
  v8[19] = 0LL;
  v9 = (Microsoft::Bamo::BaseBamoConnection *)v8;
  v10 = ((__int64 (__fastcall *)(_QWORD *))*(&InputSystemServerConnection::`vftable' + 3))(v8);
  v15 = *a3;
  v14 = 1;
  v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
          v10,
          a1,
          a2,
          &v15,
          L"System\\InputSystemConversation",
          v14,
          -2LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x658,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v11);
  }
  else
  {
    v9 = 0LL;
    *a5 = v8;
    v12 = 0;
  }
  if ( v9 )
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  return v12;
}
