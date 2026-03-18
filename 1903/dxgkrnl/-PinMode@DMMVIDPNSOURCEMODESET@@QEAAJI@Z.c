/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C012E664
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003FDC (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E580 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02B357C (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C02B5CE4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C02BE3B0 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0005B78 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005BB4 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 Container; // r12
  __int64 i; // r14
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
    v8 = v4;
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
          v30 = WdLogNewEntry5_WdAssertion(0LL, v5);
          WdLogEvent5_WdAssertion(v30);
          v11 = *(_QWORD *)(v9 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v11 + 64, v5);
        for ( i = 0LL; ; ++i )
        {
          v14 = *(unsigned int *)(v9 + 24);
          v34 = -1;
          v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)(Container + 96), v14, i, &v34);
          v19 = v15;
          if ( v15 < 0 )
            break;
          if ( v34 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v9 + 24), v34);
          if ( !Path )
          {
            v31 = WdLogNewEntry5_WdAssertion(v21, v20);
            WdLogEvent5_WdAssertion(v31);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
            v32[3] = *(unsigned int *)(v8 + 76);
            v32[4] = *(unsigned int *)(v8 + 80);
            v32[5] = *(int *)(v8 + 96);
            v32[6] = *(unsigned int *)(v9 + 24);
            WdLogEvent5_WdError(v32);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v10;
            return result;
          }
        }
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
        v33[3] = i;
        v33[4] = v3;
        v33[5] = this;
        v33[6] = v19;
        WdLogEvent5_WdError(v33);
        return (unsigned int)v19;
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v6, v5, v7);
        *(_QWORD *)(v29 + 24) = this;
        WdLogEvent5_WdError(v29);
        return 3223192328LL;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v28 + 24) = v3;
      *(_QWORD *)(v28 + 32) = this;
      WdLogEvent5_WdError(v28);
      return 3223192394LL;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v27 + 24) = v3;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdDmmEvent(v27);
    return 3223192352LL;
  }
}
