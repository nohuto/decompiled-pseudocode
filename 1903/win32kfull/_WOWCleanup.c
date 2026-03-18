/*
 * XREFs of _WOWCleanup @ 0x1C0214550
 * Callers:
 *     NtUserWOWCleanup @ 0x1C02372E0 (NtUserWOWCleanup.c)
 * Callees:
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 */

__int64 __fastcall WOWCleanup(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v5; // rbp
  struct _CALLPROCDATA ***v6; // rbx
  __int64 v7; // rdi
  struct _CALLPROCDATA **v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rdi
  unsigned __int8 v12; // dl

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( !a1 )
  {
    v6 = (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 344);
    v7 = 2LL;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        if ( *((unsigned __int16 *)v8 + 15) == v2 && (*((_BYTE *)v8[1] + 6) & 4) != 0 && !*((_DWORD *)v8 + 18) )
          DestroyClass(v5, v6);
        else
          v6 = (struct _CALLPROCDATA ***)*v6;
      }
      v6 = (struct _CALLPROCDATA ***)((char *)v5 + 352);
      --v7;
    }
    while ( v7 );
    v9 = gSharedInfo[1];
    v10 = v9 + 32LL * giheLast;
    v11 = (_QWORD *)gpKernelHandleTable;
    while ( v9 <= v10 )
    {
      v12 = *(_BYTE *)(v9 + 24);
      if ( v12
        && (gahti[24 * v12 + 12] & 2) != 0
        && (struct tagPROCESSINFO *)v11[1] == v5
        && *(_DWORD *)(*v11 + 16LL) == v2
        && v12 != 7
        && (*(_BYTE *)(v9 + 25) & 1) == 0 )
      {
        HMDestroyUnlockedObject(v9);
      }
      v9 += 32LL;
      v11 += 3;
    }
  }
  return 1LL;
}
