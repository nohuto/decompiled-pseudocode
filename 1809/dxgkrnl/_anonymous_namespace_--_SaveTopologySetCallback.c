/*
 * XREFs of _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C0131A40
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C0131A70 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall anonymous_namespace_::_SaveTopologySetCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        const struct CCD_TOPOLOGY *a2,
        bool a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v8; // rax

  v4 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(a1, a2, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v8[3] = v6;
    v8[4] = a2;
    v8[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v6;
}
