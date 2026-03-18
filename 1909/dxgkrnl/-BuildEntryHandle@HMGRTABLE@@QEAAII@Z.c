/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C014BBE8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C028DFE4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C028ED88 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 201LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) >> 7) & 0x3F | (((*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 19) ^ ((unsigned int)v3 ^ (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 19)) & 0xFFFFFF) << 6);
}
