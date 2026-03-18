/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C000B71C
 * Callers:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000B4A8 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C000B7B0 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *PoolWithTag; // rax
  DMMVIDPNTARGETMODESET *v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  PoolWithTag = (DMMVIDPNTARGETMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
  if ( PoolWithTag )
    v3 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(PoolWithTag, this);
  else
    v3 = 0LL;
  v4 = *((_QWORD *)this + 13);
  if ( v4 && v3 != (DMMVIDPNTARGETMODESET *)v4 )
    ReferenceCounted::Release((ReferenceCounted *)(v4 + 88));
  *((_QWORD *)this + 13) = v3;
  if ( v3 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v3 + 3))((__int64)v3 + 24) )
    {
      return 0LL;
    }
    else
    {
      v7 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v7);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v6);
    return 3221225495LL;
  }
}
