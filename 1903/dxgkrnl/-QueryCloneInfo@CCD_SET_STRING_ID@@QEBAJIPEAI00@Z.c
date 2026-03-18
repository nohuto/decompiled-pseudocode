/*
 * XREFs of ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00DC614
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00DC304 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD028 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C012BF38 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryCloneInfo(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // eax
  __int64 v7; // rdi
  __int64 v10; // r10
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // rax

  v5 = *((unsigned __int16 *)this + 16);
  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= v5 || !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
    LOWORD(v5) = *((_WORD *)this + 16);
  }
  if ( (unsigned int)v7 >= (unsigned __int16)v5 || !a3 )
    return 3221225485LL;
  v10 = *((_QWORD *)this + 3);
  v11 = *(unsigned __int16 *)(v10 + 8 * v7 + 2);
  *a3 = v11;
  if ( a5 || a4 )
  {
    v12 = 0;
    v13 = v7 - 1;
    if ( (int)v7 - 1 >= 0 )
    {
      v15 = v13;
      do
      {
        if ( *(_WORD *)(v10 + 8 * v15 + 2) != (_WORD)v11 )
          break;
        ++v12;
        --v13;
        --v15;
      }
      while ( v15 >= 0 );
    }
    if ( a5 )
      *a5 = v12;
    if ( a4 )
      *a4 = v13 + 1;
  }
  return 0LL;
}
