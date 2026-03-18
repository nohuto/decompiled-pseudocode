/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00EF1A0
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     _UnregisterHotKey @ 0x1C00EF11C (_UnregisterHotKey.c)
 *     DestroyThreadsHotKeys @ 0x1C00EF170 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C00EF2C4 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

__int64 __fastcall HKRemoveMatchingHotkeys(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v5; // bp
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // r8
  struct tagHOTKEY *v9; // rax
  struct tagHOTKEY **v10; // rbx
  char *v12; // r14
  char *v13; // rsi
  char v14; // cl
  struct tagHOTKEY *v15; // rcx
  bool v16; // cl
  char *v17; // r12
  char *v18; // rcx
  char **v19; // rax
  __int64 v21; // [rsp+68h] [rbp+10h]

  v21 = a2;
  v5 = 0;
  v6 = a3;
  v7 = 0LL;
  v8 = a1;
  do
  {
    v9 = (struct tagHOTKEY *)(&gphkHashTable)[v7];
    v10 = (struct tagHOTKEY **)&(&gphkHashTable)[v7];
    if ( !v9 )
      goto LABEL_3;
    do
    {
      switch ( a4 )
      {
        case 1:
          if ( *((_QWORD *)v9 + 2) == a2 )
            goto LABEL_15;
          break;
        case 0:
          v16 = *(_QWORD *)v9 == v8;
          goto LABEL_14;
        case 2:
          goto LABEL_23;
        case 3:
          if ( *(_QWORD *)v9 != v8 )
            goto LABEL_22;
LABEL_23:
          if ( *((_QWORD *)v9 + 2) == a2 && *((_DWORD *)v9 + 8) == v6 )
            v16 = 1;
          else
LABEL_22:
            v16 = 0;
LABEL_14:
          if ( v16 )
            goto LABEL_15;
          break;
        case 4:
LABEL_15:
          if ( !HKRemoveHotkeyOrMakePlaceholder(v10) )
            v10 = (struct tagHOTKEY **)((char *)*v10 + 40);
          v5 = 1;
          goto LABEL_18;
      }
      v12 = (char *)*((_QWORD *)v9 + 6);
      v13 = (char *)v9 + 48;
      v14 = 0;
      if ( v12 != (char *)v9 + 48 )
      {
        do
        {
          v17 = *(char **)v12;
          if ( a4 )
          {
            if ( a4 == 1 )
            {
              if ( *((_QWORD *)v12 - 2) == a2 )
                goto LABEL_39;
            }
            else if ( (a4 == 2 || a4 == 3 && *((_QWORD *)v12 - 3) == v8)
                   && *((_QWORD *)v12 - 2) == a2
                   && *((_DWORD *)v12 - 1) == v6 )
            {
LABEL_39:
              HMAssignmentUnlock(v12 - 16);
              v18 = *(char **)v12;
              if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || (v19 = (char **)*((_QWORD *)v12 + 1), *v19 != v12) )
                __fastfail(3u);
              *v19 = v18;
              *((_QWORD *)v18 + 1) = v19;
              Win32FreePool(v12 - 24);
              a2 = v21;
              v14 = 1;
              v8 = a1;
              v6 = a3;
            }
          }
          else if ( *((_QWORD *)v12 - 3) == v8 )
          {
            goto LABEL_39;
          }
          v12 = v17;
        }
        while ( v17 != v13 );
      }
      v5 |= v14;
      v15 = *v10;
      if ( (*((_WORD *)*v10 + 13) & 0x100) == 0
        || *((struct tagHOTKEY **)v15 + 6) != (struct tagHOTKEY *)((char *)v15 + 48) )
      {
        v10 = (struct tagHOTKEY **)((char *)v15 + 40);
        goto LABEL_10;
      }
      *v10 = (struct tagHOTKEY *)*((_QWORD *)v15 + 5);
      Win32FreePool(v15);
LABEL_18:
      a2 = v21;
      v8 = a1;
      v6 = a3;
LABEL_10:
      v9 = *v10;
    }
    while ( *v10 );
LABEL_3:
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 0x80 );
  return v5;
}
