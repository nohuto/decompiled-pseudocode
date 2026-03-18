/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D8960
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000370C (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C027B194 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C027DC9C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C0286040 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000A7C4 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 Container; // r12
  unsigned __int64 i; // r14
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rcx
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  if ( *((_BYTE *)this + 136) )
  {
    v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this + 24, a2);
    v8 = v6;
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
          v25 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v25);
          v11 = *(_QWORD *)(v9 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v11 + 64);
        for ( i = 0LL; ; ++i )
        {
          v14 = *(_DWORD *)(v9 + 24);
          v29 = -1;
          v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v14, i, &v29);
          v17 = v15;
          if ( v15 < 0 )
            break;
          if ( v29 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v9 + 24), v29);
          if ( !Path )
          {
            v26 = WdLogNewEntry5_WdAssertion(v18);
            WdLogEvent5_WdAssertion(v26);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v27[3] = *(unsigned int *)(v8 + 76);
            v27[4] = *(unsigned int *)(v8 + 80);
            v27[5] = *(int *)(v8 + 96);
            v27[6] = *(unsigned int *)(v9 + 24);
            WdLogEvent5_WdError(v27);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v10;
            return result;
          }
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v28[3] = i;
        v28[4] = v5;
        v28[5] = this;
        v28[6] = v17;
        WdLogEvent5_WdError(v28);
        return (unsigned int)v17;
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v24 + 24) = this;
        WdLogEvent5_WdError(v24);
        return 3223192328LL;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v23 + 24) = v5;
      *(_QWORD *)(v23 + 32) = this;
      WdLogEvent5_WdError(v23);
      return 3223192394LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = v5;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdDmmEvent(v22);
    return 3223192352LL;
  }
}
