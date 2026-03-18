/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2934
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02805B0 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C028BBB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0004664 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E1BA0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rax
  DMMVIDPN *v11; // rax
  DMMVIDPN *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+40h] [rbp+8h] BYREF

  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = a2;
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v24);
    v10 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v10 + 16);
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a3 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v26);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v30 = 0LL;
  v11 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPN::DMMVIDPN(v11, a2);
  else
    v12 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v30, (__int64)v12);
  v14 = v30;
  if ( v30 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v30 + 72))(v30 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != CurrentThread )
      {
        v20 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = v30;
      if ( Set<DMMVIDPN>::Add() != 1 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v29);
      }
      v30 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v21);
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
      v28[3] = v14;
      v28[4] = a2;
      v28[5] = *(int *)(v14 + 80);
      WdLogEvent5_WdDmmEvent(v28);
      v9 = *(_DWORD *)(v14 + 80);
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v27 + 24) = a2;
    WdLogEvent5_WdLowResource(v27);
    v9 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v30, 0LL);
  return v9;
}
