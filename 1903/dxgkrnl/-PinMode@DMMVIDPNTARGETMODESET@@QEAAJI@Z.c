/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00E636C
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0018C4C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E24F8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C0176C10 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C02BE4E0 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005BB4 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6444 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 Container; // r14
  int PathSourceFromTarget; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax

  v3 = (unsigned int)a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this + 24, a2);
    v8 = (unsigned int *)v4;
    if ( v4 )
    {
      v9 = *((_QWORD *)this + 14);
      v10 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 40);
        if ( !v11 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0LL, v5);
          WdLogEvent5_WdAssertion(v27);
          v11 = *(_QWORD *)(v9 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v11 + 64, v5);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(_DWORD *)(v9 + 24));
        if ( PathSourceFromTarget == -1 )
        {
          v28 = WdLogNewEntry5_WdError(v15, v14, v16);
          *(_QWORD *)(v28 + 24) = v3;
          *(_QWORD *)(v28 + 32) = this;
          WdLogEvent5_WdError(v28);
          return 3223192384LL;
        }
        else
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(
                   (DMMVIDPNTOPOLOGY *)(Container + 96),
                   PathSourceFromTarget,
                   *(_DWORD *)(v9 + 24));
          if ( !Path )
          {
            v29 = WdLogNewEntry5_WdAssertion(v18, v17);
            WdLogEvent5_WdAssertion(v29);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
            v30[3] = v8[21];
            v30[4] = v8[22];
            v30[5] = v8[23];
            v30[6] = v8[24];
            v30[7] = *(unsigned int *)(v9 + 24);
            WdLogEvent5_WdError(v30);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v10;
          }
        }
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v6, v5, v7);
        *(_QWORD *)(v26 + 24) = this;
        WdLogEvent5_WdError(v26);
        return 3223192329LL;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v25 + 24) = v3;
      *(_QWORD *)(v25 + 32) = this;
      WdLogEvent5_WdError(v25);
      return 3223192394LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v24 + 24) = v3;
    *(_QWORD *)(v24 + 32) = this;
    WdLogEvent5_WdDmmEvent(v24);
    return 3223192352LL;
  }
  return result;
}
