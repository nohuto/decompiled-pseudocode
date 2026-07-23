/*
 * XREFs of MiInsertClone @ 0x1402CAACC
 * Callers:
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiDeleteCloneZombies @ 0x140132D90 (MiDeleteCloneZombies.c)
 */

char __fastcall MiInsertClone(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v4 = 0;
  if ( (_DWORD)a3 )
    MiDeleteCloneZombies(a1, 1LL, a3, a4);
  v7 = *(_QWORD **)(a1 + 912);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( a2[3] > v7[4] || a2[4] >= v7[3] )
      {
        v8 = (_QWORD *)v7[1];
        if ( !v8 )
        {
          v4 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 912), (unsigned __int64)v7, v4, a2);
        }
      }
      else
      {
        v8 = (_QWORD *)*v7;
        if ( !*v7 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 912), (unsigned __int64)v7, v4, a2);
      }
      v7 = v8;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 912), (unsigned __int64)v7, v4, a2);
}
