/*
 * XREFs of CmpIsHiveBoundToTrans @ 0x1406EED68
 * Callers:
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsHiveBoundToTrans(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  _QWORD *i; // rdx

  v2 = *(_DWORD *)(a2 + 112);
  v3 = 0;
  if ( v2 )
  {
    for ( i = (_QWORD *)(a2 + 120); a1 != *i; ++i )
    {
      if ( ++v3 >= v2 )
        return 0;
    }
  }
  return 1;
}
