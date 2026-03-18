/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x1C0009AE8
 * Callers:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0009B60 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E0048 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00098F8 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 */

void __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  DMMVIDPNTARGETMODESET *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax

  while ( 1 )
  {
    PoolWithTag = (DMMVIDPNTARGETMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
    v7 = PoolWithTag ? DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(PoolWithTag, this) : 0LL;
    if ( v7 )
      break;
    v9 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    WdLogEvent5_WdLowResource(v9);
    ZwYieldExecution();
  }
  v8 = *((_QWORD *)this + 13);
  if ( v8 && v7 != (DMMVIDPNTARGETMODESET *)v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 88), v3, v5);
  *((_QWORD *)this + 13) = v7;
}
