/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0003D00
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0003968 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C0003DB8 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(DMMVIDPNSOURCE *this)
{
  DMMVIDPNSOURCEMODESET *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = (DMMVIDPNSOURCEMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
  if ( v2 )
    v2 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v2, this);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((char *)this + 104, v2);
  if ( *((_QWORD *)this + 13) )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(*((_QWORD *)this + 13) + 24LL))(*((_QWORD *)this + 13) + 24LL) )
    {
      return 0LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v5);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
}
