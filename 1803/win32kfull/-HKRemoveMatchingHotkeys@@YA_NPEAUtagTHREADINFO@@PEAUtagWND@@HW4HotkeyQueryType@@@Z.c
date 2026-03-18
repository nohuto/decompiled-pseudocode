/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B3310
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     _UnregisterHotKey @ 0x1C00B328C (_UnregisterHotKey.c)
 *     DestroyThreadsHotKeys @ 0x1C00B32E0 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C00B3434 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

__int64 __fastcall HKRemoveMatchingHotkeys(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v5; // bp
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  struct tagHOTKEY *v10; // rax
  struct tagHOTKEY **v11; // rbx
  char *v13; // r14
  char *v14; // rsi
  char v15; // cl
  struct tagHOTKEY *v16; // rcx
  bool v17; // cl
  char *v18; // r12
  char *v19; // rcx
  char **v20; // rax

  v5 = 0;
  v6 = a3;
  v7 = 0LL;
  v8 = a2;
  v9 = a1;
  do
  {
    v10 = (struct tagHOTKEY *)(&gphkHashTable)[v7];
    v11 = (struct tagHOTKEY **)&(&gphkHashTable)[v7];
    if ( !v10 )
      goto LABEL_3;
    do
    {
      switch ( a4 )
      {
        case 0:
          if ( *(_QWORD *)v10 == v9 )
            goto LABEL_15;
          break;
        case 1:
          v17 = *((_QWORD *)v10 + 2) == v8;
          goto LABEL_14;
        case 2:
          goto LABEL_23;
        case 3:
          if ( *(_QWORD *)v10 != v9 )
            goto LABEL_22;
LABEL_23:
          if ( *((_QWORD *)v10 + 2) == v8 && *((_DWORD *)v10 + 8) == v6 )
            v17 = 1;
          else
LABEL_22:
            v17 = 0;
LABEL_14:
          if ( v17 )
            goto LABEL_15;
          break;
        case 4:
LABEL_15:
          if ( !HKRemoveHotkeyOrMakePlaceholder(v11) )
            v11 = (struct tagHOTKEY **)((char *)*v11 + 40);
          v5 = 1;
          goto LABEL_18;
      }
      v13 = (char *)*((_QWORD *)v10 + 6);
      v14 = (char *)v10 + 48;
      v15 = 0;
      if ( v13 != (char *)v10 + 48 )
      {
        do
        {
          v18 = *(char **)v13;
          if ( a4 )
          {
            if ( a4 == 1 )
            {
              if ( *((_QWORD *)v13 - 2) == v8 )
                goto LABEL_39;
            }
            else if ( (a4 == 2 || a4 == 3 && *((_QWORD *)v13 - 3) == v9)
                   && *((_QWORD *)v13 - 2) == v8
                   && *((_DWORD *)v13 - 1) == v6 )
            {
LABEL_39:
              HMAssignmentUnlock(v13 - 16);
              v19 = *(char **)v13;
              if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v20 = (char **)*((_QWORD *)v13 + 1), *v20 != v13) )
                __fastfail(3u);
              *v20 = v19;
              *((_QWORD *)v19 + 1) = v20;
              Win32FreePool(v13 - 24);
              v9 = a1;
              v15 = 1;
              v8 = a2;
              v6 = a3;
            }
          }
          else if ( *((_QWORD *)v13 - 3) == v9 )
          {
            goto LABEL_39;
          }
          v13 = v18;
        }
        while ( v18 != v14 );
      }
      v5 |= v15;
      v16 = *v11;
      if ( (*((_WORD *)*v11 + 13) & 0x100) == 0
        || *((struct tagHOTKEY **)v16 + 6) != (struct tagHOTKEY *)((char *)v16 + 48) )
      {
        v11 = (struct tagHOTKEY **)((char *)v16 + 40);
        goto LABEL_10;
      }
      *v11 = (struct tagHOTKEY *)*((_QWORD *)v16 + 5);
      Win32FreePool(v16);
LABEL_18:
      v9 = a1;
      v8 = a2;
      v6 = a3;
LABEL_10:
      v10 = *v11;
    }
    while ( *v11 );
LABEL_3:
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 0x80 );
  return v5;
}
