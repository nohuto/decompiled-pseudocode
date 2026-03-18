/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01EB644
 * Callers:
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
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
  char *v8; // rbx
  char *i; // rax
  struct tagTHREADINFO *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  char *v13; // rax
  char **v14; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a5 & 0xBFFF) == 0 )
  {
    v8 = (char *)a2 + 48;
    for ( i = (char *)*((_QWORD *)a2 + 6); ; i = *(char **)i )
    {
      if ( i == v8 )
      {
        v11 = Win32AllocPoolZInit(40LL, 1802007381LL);
        v12 = v11;
        if ( !v11 )
          return 0;
        v16[1] = a3;
        v16[0] = v11 + 8;
        HMAssignmentLock(v16);
        *(_QWORD *)v12 = a1;
        v13 = (char *)(v12 + 24);
        *(_DWORD *)(v12 + 20) = a4;
        *(_WORD *)(v12 + 16) = a5;
        v14 = (char **)*((_QWORD *)v8 + 1);
        if ( *v14 != v8 )
          __fastfail(3u);
        *(_QWORD *)v13 = v8;
        *(_QWORD *)(v12 + 32) = v14;
        *v14 = v13;
        *((_QWORD *)v8 + 1) = v13;
        return 1;
      }
      v10 = (struct tagTHREADINFO *)*((_QWORD *)i - 3);
      if ( *((struct tagWND **)i - 2) == a3 )
        break;
      if ( v10 == a1 )
        return 0;
    }
    if ( v10 == a1 && *((_DWORD *)i - 1) == a4 && *((_WORD *)i - 4) != a5 )
    {
      *((_WORD *)i - 4) = a5;
      return 1;
    }
  }
  return 0;
}
