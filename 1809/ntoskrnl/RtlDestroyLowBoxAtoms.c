/*
 * XREFs of RtlDestroyLowBoxAtoms @ 0x14012671C
 * Callers:
 *     ExRemoveLowBoxAtomReferences @ 0x1401266F4 (ExRemoveLowBoxAtomReferences.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x1401267F0 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x1405F647C (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1405F7288 (RtlpUnlockAtomTable.c)
 *     RtlpFreeAtom @ 0x1406AE710 (RtlpFreeAtom.c)
 */

__int64 __fastcall RtlDestroyLowBoxAtoms(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD **i; // r15
  _QWORD *v7; // rsi
  _QWORD *j; // rbx
  _QWORD *v9; // r13
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  result = RtlpLockAtomTable();
  if ( (_BYTE)result )
  {
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
    {
      v7 = *i++;
      while ( 1 )
      {
        v9 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        for ( j = (_QWORD *)v9[2]; j != v9 + 2; j = (_QWORD *)*j )
        {
          v10 = j;
          if ( *((_DWORD *)j + 4) == a2 )
          {
            v11 = (_QWORD *)*j;
            v12 = (_QWORD *)j[1];
            j = v12;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
              __fastfail(3u);
            *v12 = v11;
            v11[1] = v12;
            RtlpFreeAtom(v10);
            if ( (unsigned __int8)RtlpDereferenceAtom(v9, v9 + 2, a1) )
              break;
          }
        }
      }
    }
    return RtlpUnlockAtomTable(a1);
  }
  return result;
}
