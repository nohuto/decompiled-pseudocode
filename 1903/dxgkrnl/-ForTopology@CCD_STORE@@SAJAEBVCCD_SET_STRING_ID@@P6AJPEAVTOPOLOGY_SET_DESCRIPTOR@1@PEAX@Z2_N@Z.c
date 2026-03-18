/*
 * XREFs of ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D4B04
 * Callers:
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D3D78 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C012C9C0 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00D631C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 */

__int64 __fastcall CCD_STORE::ForTopology(
        const struct CCD_SET_STRING_ID *a1,
        int (*a2)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *),
        void *a3,
        char a4)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rbx
  const struct CCD_SET_STRING_ID *v9; // rdi
  __int64 v11; // rax
  char v12; // [rsp+20h] [rbp-28h]

  v4 = *((_WORD *)a1 + 4);
  v5 = 0LL;
  v9 = a1;
  if ( v4 )
  {
    a1 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a1 + 2);
    while ( ((*((_BYTE *)a1 + v5) - 94) & 0xDF) != 0 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_5;
    }
    v11 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = (unsigned int)v5;
    *(_QWORD *)(v11 + 32) = *(char *)(*((_QWORD *)v9 + 2) + v5);
    WdLogEvent5_WdError(v11);
  }
LABEL_5:
  v12 = a4;
  return CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(a1, (char *)v9 + 8, a2, a3, v12);
}
