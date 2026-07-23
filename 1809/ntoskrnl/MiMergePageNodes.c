/*
 * XREFs of MiMergePageNodes @ 0x1402D2600
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     RtlMergeBitMapsEx @ 0x1402EF28C (RtlMergeBitMapsEx.c)
 */

__int64 __fastcall MiMergePageNodes(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // r10
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v2 = (unsigned __int64 *)(a1 + 24);
  LOBYTE(v3) = 0;
  v4 = *(_QWORD **)(a1 + 24);
  if ( !v4 )
  {
LABEL_13:
    RtlAvlInsertNodeEx(v2, (unsigned __int64)v4, (bool)v3, a2);
    return 0LL;
  }
  v6 = a2[3] & 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v7 = v4[3] & 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 < v7 )
    {
      v3 = (_QWORD *)*v4;
      if ( !*v4 )
        goto LABEL_13;
      goto LABEL_8;
    }
    if ( v6 <= v7 )
      break;
    v3 = (_QWORD *)v4[1];
    if ( !v3 )
    {
      LOBYTE(v3) = 1;
      goto LABEL_13;
    }
LABEL_8:
    v4 = v3;
  }
  RtlMergeBitMapsEx(v4 + 4, a2 + 4);
  if ( (__int64)a2[3] >= 0 || (__int64)v4[3] >= 0 )
    v4[3] &= ~0x8000000000000000uLL;
  return 1LL;
}
