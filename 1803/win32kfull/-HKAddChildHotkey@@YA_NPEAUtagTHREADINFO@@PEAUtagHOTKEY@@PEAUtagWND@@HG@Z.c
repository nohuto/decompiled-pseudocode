/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01B3954
 * Callers:
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 * Callees:
 *     <none>
 */

char __fastcall HKAddChildHotkey(
        struct tagTHREADINFO *a1,
        struct tagHOTKEY *a2,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5)
{
  char *v9; // rbx
  char *i; // rax
  struct tagTHREADINFO *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // rax
  char **v15; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a5 & 0xBFFF) == 0 )
  {
    v9 = (char *)a2 + 48;
    for ( i = (char *)*((_QWORD *)a2 + 6); ; i = *(char **)i )
    {
      if ( i == v9 )
      {
        v12 = Win32AllocPoolZInit(40LL, 1802007381LL);
        v13 = v12;
        if ( !v12 )
          return 0;
        v16[1] = a3;
        v16[0] = v12 + 8;
        HMAssignmentLock(v16);
        *(_QWORD *)v13 = a1;
        v14 = (char *)(v13 + 24);
        *(_DWORD *)(v13 + 20) = a4;
        *(_WORD *)(v13 + 16) = a5;
        v15 = (char **)*((_QWORD *)v9 + 1);
        if ( *v15 != v9 )
          __fastfail(3u);
        *(_QWORD *)v14 = v9;
        *(_QWORD *)(v13 + 32) = v15;
        *v15 = v14;
        *((_QWORD *)v9 + 1) = v14;
        return 1;
      }
      v11 = (struct tagTHREADINFO *)*((_QWORD *)i - 3);
      if ( *((struct tagWND **)i - 2) == a3 )
        break;
      if ( v11 == a1 )
        return 0;
    }
    if ( v11 == a1 && *((_DWORD *)i - 1) == a4 && *((_WORD *)i - 4) != a5 )
    {
      *((_WORD *)i - 4) = a5;
      return 1;
    }
  }
  return 0;
}
