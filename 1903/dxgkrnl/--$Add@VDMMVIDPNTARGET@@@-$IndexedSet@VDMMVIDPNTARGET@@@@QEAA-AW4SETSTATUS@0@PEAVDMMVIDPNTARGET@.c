/*
 * XREFs of ??$Add@VDMMVIDPNTARGET@@@?$IndexedSet@VDMMVIDPNTARGET@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0009A9C
 * Callers:
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00FCB24 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDPNTARGET>::Add<DMMVIDPNTARGET>(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r8
  _QWORD *v4; // r10
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v14; // rax

  v3 = a1 + 3;
  v4 = (_QWORD *)a1[3];
  if ( v4 == a1 + 3 )
    goto LABEL_22;
  v5 = v4 - 1;
  if ( v4 == (_QWORD *)8 )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v5 + 6) == *(_DWORD *)(a2 + 24) )
      break;
    v6 = (_QWORD *)v5[1];
    v5 = v6 - 1;
    if ( v6 == v3 )
      v5 = 0LL;
  }
  while ( v5 );
  if ( !v5 )
  {
LABEL_8:
    if ( v4 == v3 )
      goto LABEL_22;
    v7 = v4 - 1;
    if ( v4 == (_QWORD *)8 )
      goto LABEL_21;
    do
    {
      if ( v7 == (_QWORD *)a2 )
        break;
      v8 = (_QWORD *)v7[1];
      v7 = v8 - 1;
      if ( v8 == v3 )
        v7 = 0LL;
    }
    while ( v7 );
    if ( !v7 )
    {
LABEL_21:
      if ( v4 != v3 )
      {
        v9 = v4 - 1;
        if ( v4 != (_QWORD *)8 )
        {
          do
          {
            if ( v9 == (_QWORD *)a2 )
              break;
            v10 = (_QWORD *)v9[1];
            v9 = v10 - 1;
            if ( v10 == v3 )
              v9 = 0LL;
          }
          while ( v9 );
          if ( v9 )
          {
            v14 = WdLogNewEntry5_WdAssertion(v9, a2);
            *(_QWORD *)(v14 + 24) = 108LL;
            WdLogEvent5_WdAssertion(v14);
            return 3LL;
          }
        }
      }
LABEL_22:
      v11 = (_QWORD *)a1[4];
      v12 = (_QWORD *)(a2 + 8);
      if ( (_QWORD *)*v11 != v3 )
        __fastfail(3u);
      *v12 = v3;
      v12[1] = v11;
      *v11 = v12;
      a1[4] = v12;
      ++a1[5];
      return 3LL;
    }
    return 1LL;
  }
  if ( v5 == (_QWORD *)a2 )
    return 1LL;
  return 2LL;
}
