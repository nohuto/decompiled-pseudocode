/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00D96B8
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0017DF4 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D8BE0 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C0286170 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000A7C4 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 Container; // r14
  int PathSourceFromTarget; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax

  v5 = (unsigned int)a2;
  if ( *((_BYTE *)this + 136) )
  {
    v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this + 24, a2);
    v8 = (unsigned int *)v6;
    if ( v6 )
    {
      v9 = *((_QWORD *)this + 14);
      v10 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v6;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 40);
        if ( !v11 )
        {
          v22 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v22);
          v11 = *(_QWORD *)(v9 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v11 + 64);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(Container + 96),
                                 *(_DWORD *)(v9 + 24));
        if ( PathSourceFromTarget == -1 )
        {
          v23 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v23 + 24) = v5;
          *(_QWORD *)(v23 + 32) = this;
          WdLogEvent5_WdError(v23);
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
            v24 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v24);
          }
          if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            return 0LL;
          }
          else
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v25[3] = v8[21];
            v25[4] = v8[22];
            v25[5] = v8[23];
            v25[6] = v8[24];
            v25[7] = *(unsigned int *)(v9 + 24);
            WdLogEvent5_WdError(v25);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v10;
          }
        }
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v21 + 24) = this;
        WdLogEvent5_WdError(v21);
        return 3223192329LL;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v20 + 24) = v5;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdError(v20);
      return 3223192394LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = v5;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdDmmEvent(v19);
    return 3223192352LL;
  }
  return result;
}
