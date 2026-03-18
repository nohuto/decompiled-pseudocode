/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E364C
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02B8A00 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C4374 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0005094 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E3CC0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rax
  DMMVIDPN *v11; // rax
  DMMVIDPN *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF

  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = a2;
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v26);
    v10 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v10 + 16);
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a3 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v28);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v32 = 0LL;
  v11 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPN::DMMVIDPN(v11, a2);
  else
    v12 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v32, (__int64)v12);
  v17 = v32;
  if ( v32 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v32 + 72))(v32 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 16LL) != CurrentThread )
      {
        v25 = WdLogNewEntry5_WdAssertion(CurrentThread, v18);
        WdLogEvent5_WdAssertion(v25);
      }
      v21 = v32;
      if ( Set<DMMVIDPN>::Add() != 1 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v21);
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18);
      v30[3] = v17;
      v30[4] = a2;
      v30[5] = *(int *)(v17 + 80);
      WdLogEvent5_WdDmmEvent(v30);
      v9 = *(_DWORD *)(v17 + 80);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v29 + 24) = a2;
    WdLogEvent5_WdLowResource(v29);
    v9 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v32, 0LL);
  return v9;
}
