/*
 * XREFs of ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18001D93C
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001DB0C (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1800CCFCC (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 *     ExceptionSafeNtDuplicateCompositionInputSink @ 0x180020C40 (ExceptionSafeNtDuplicateCompositionInputSink.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180020CE0 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180020FE8 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x1800211E4 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkHandle(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // eax
  void *v7; // rdx
  unsigned int v8; // r8d
  _QWORD v10[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+48h] [rbp-C0h]
  __int64 v12; // [rsp+4Ch] [rbp-BCh]
  int v13; // [rsp+54h] [rbp-B4h]
  _BYTE v14[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[64]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v16[64]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v17[64]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v18[64]; // [rsp+158h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]
  __int64 v20; // [rsp+1E0h] [rbp+D8h]

  v10[1] = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  memset_0(v14, 0, sizeof(v14));
  v14[0] = 0;
  v14[56] = 0;
  memset_0(v15, 0, sizeof(v15));
  v15[0] = 0;
  v15[56] = 0;
  memset_0(v16, 0, sizeof(v16));
  v16[0] = 0;
  v16[56] = 0;
  memset_0(v17, 0, sizeof(v17));
  v17[0] = 0;
  v17[56] = 0;
  memset_0(v18, 0, sizeof(v18));
  v18[0] = 0;
  v18[56] = 0;
  v10[0] = 0LL;
  v6 = ExceptionSafeNtDuplicateCompositionInputSink(a3, v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(retaddr, v7, v8, (const char *)(unsigned int)v6, -2);
    JUMPOUT(0x18001DADFLL);
  }
  v20 = (__int64)*LegacyInputSinkData::GetLuid((LegacyInputSinkData *)v10);
  InputSiteManager::GetInputSiteFromId(a1, a2, 0, v20);
  if ( !*(_BYTE *)(*a2 + 384) )
    InputSite::SetLegacyInputSinkData(*a2, v10);
  if ( (unsigned __int64)(v10[0] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v10[0]);
  return a2;
}
