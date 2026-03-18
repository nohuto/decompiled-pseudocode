/*
 * XREFs of ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 *     DxgkCheckOcclusion @ 0x1C011F760 (DxgkCheckOcclusion.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C013DF50 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C023FEC0 (DxgkCreateOutputDupl.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::Acquire(DXGUSERCRIT *this, unsigned int a2)
{
  _QWORD *v4; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v4[3] = 275LL;
    v4[4] = 4LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 104LL) + 32LL))(a2);
  *((_BYTE *)this + 16) = 1;
}
