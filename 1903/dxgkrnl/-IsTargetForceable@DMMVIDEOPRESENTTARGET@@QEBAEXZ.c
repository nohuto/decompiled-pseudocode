/*
 * XREFs of ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00FC190
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00C3508 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBB48 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0127460 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForceable(DMMVIDEOPRESENTTARGET *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = *((_QWORD *)this + 5);
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_QWORD *)this + 5);
  }
  v4 = *(_QWORD *)(v2 + 88);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( *(_DWORD *)(v6 + 284) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v6 + 2552) + 16LL) + 2452LL) < 1105 )
    return 0;
  if ( *((_DWORD *)this + 32) != -1 )
    return 1;
  v7 = *((_DWORD *)this + 102);
  if ( v7 == -1 )
  {
    v8 = *((_DWORD *)this + 20);
    return v8 >= 0 && (v8 <= 3 || v8 == 14);
  }
  return v7 == 1;
}
