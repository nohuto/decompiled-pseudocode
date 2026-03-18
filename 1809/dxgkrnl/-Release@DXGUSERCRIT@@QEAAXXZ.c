/*
 * XREFs of ?Release@DXGUSERCRIT@@QEAAXXZ @ 0x1C001322C
 * Callers:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C023FEC0 (DxgkCreateOutputDupl.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::Release(DXGUSERCRIT *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rax

  if ( !*((_BYTE *)this + 16) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v3[3] = 275LL;
    v3[4] = 4LL;
    v3[5] = this;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v2 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 16) = 0;
  (*(void (**)(void))(*(_QWORD *)(v2 + 104) + 40LL))();
}
