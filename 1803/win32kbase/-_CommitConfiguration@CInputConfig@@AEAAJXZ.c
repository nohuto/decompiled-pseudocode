/*
 * XREFs of ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754
 * Callers:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18 (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     ?_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0053604 (-_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     Broadcast @ 0x1C0053ABC (Broadcast.c)
 *     ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0053B44 (-FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C0131E84 (-_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::_CommitConfiguration(CInputConfig *this)
{
  __int64 v2; // rax
  bool v3; // zf

  CInputConfig::_FreeConfigList(this, (struct _SINGLE_LIST_ENTRY *)this);
  v2 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  v3 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = v2;
  if ( v3 )
    CInputConfig::_UpdatePhysicalMonitors(this);
  CInputConfig::CMouseConfig::FindMouseConfiguration((CInputConfig *)((char *)this + 16));
  Broadcast();
  return 0LL;
}
