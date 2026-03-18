/*
 * XREFs of ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C004DC54
 * Callers:
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C027E7C0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C004C250 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C028649C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  void **v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  void **v14; // [rsp+38h] [rbp-30h]
  void *Src; // [rsp+40h] [rbp-28h]
  size_t Size; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  if ( *(_QWORD *)(a2 + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *(_QWORD *)(a1 + 48);
  Src = 0LL;
  Size = 0LL;
  v12 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v14 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v13 = 0LL;
  v17 = 3;
  v6 = DMMVIDPN::Serialize(v5, &v12);
  v8 = v6;
  if ( v6 >= 0 )
  {
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, Size + 16);
    memmove((void *)(*(_QWORD *)(a2 + 32) + 16LL), Src, Size);
    LODWORD(v8) = 0;
    **(_DWORD **)(a2 + 32) = *(_DWORD *)(a1 + 56);
    v10 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v10 + 4) = *(_QWORD *)(a1 + 60);
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(a1 + 68);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdError(v9);
  }
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v12);
  return (unsigned int)v8;
}
