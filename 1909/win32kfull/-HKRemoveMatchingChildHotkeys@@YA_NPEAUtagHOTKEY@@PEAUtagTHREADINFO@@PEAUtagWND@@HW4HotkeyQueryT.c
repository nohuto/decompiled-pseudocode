/*
 * XREFs of ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01EB750
 * Callers:
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 * Callees:
 *     <none>
 */

char __fastcall HKRemoveMatchingChildHotkeys(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD *v5; // rsi
  char v6; // r10
  _QWORD *v7; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  bool v13; // al
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v5 = (_QWORD *)(a1 + 48);
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 != (_QWORD *)(a1 + 48) )
  {
    while ( 1 )
    {
      v11 = v7 - 3;
      v12 = (_QWORD *)*v7;
      if ( !a5 )
        break;
      if ( a5 == 1 )
      {
        v13 = v11[1] == a3;
        goto LABEL_15;
      }
      if ( a5 != 2 )
      {
        if ( a5 != 3 )
        {
          if ( a5 == 4 )
            goto LABEL_16;
          goto LABEL_19;
        }
        if ( *v11 != a2 )
          goto LABEL_19;
      }
      if ( v11[1] == a3 && *((_DWORD *)v11 + 5) == a4 )
      {
LABEL_16:
        HMAssignmentUnlock(v11 + 1);
        v14 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v15 = (_QWORD *)v7[1], (_QWORD *)*v15 != v7) )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = v15;
        Win32FreePool(v7 - 3);
        v6 = 1;
      }
LABEL_19:
      v7 = v12;
      if ( v12 == v5 )
        return v6;
    }
    if ( *v11 == a2 )
      goto LABEL_16;
    v13 = 0;
LABEL_15:
    if ( v13 )
      goto LABEL_16;
    goto LABEL_19;
  }
  return v6;
}
