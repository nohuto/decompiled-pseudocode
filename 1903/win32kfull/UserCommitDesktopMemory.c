/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0129310
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     GetDesktopView @ 0x1C0019FC0 (GetDesktopView.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // r9
  _QWORD *i; // rcx
  __int64 v18; // rcx
  __int64 j; // rbx
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD v24[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v26; // [rsp+30h] [rbp-18h]
  int v27; // [rsp+38h] [rbp-10h]
  int v28; // [rsp+3Ch] [rbp-Ch]
  int v29; // [rsp+68h] [rbp+20h] BYREF

  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v16 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v16 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_14;
      }
      v16 = *(_QWORD *)(v16 + 8);
    }
    while ( v16 );
LABEL_14:
    if ( !v16 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v29);
    if ( (int)result >= 0 )
      *a2 += v29;
  }
  else
  {
    v10 = *(unsigned int *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8) + 1224);
    if ( (v10 & 0x40) == 0 )
    {
      v12 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v10, v9) + 696);
      if ( !v12 )
        goto LABEL_19;
      do
      {
        if ( *(_QWORD *)(v12[1] + 16LL) == a1 )
          break;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_19:
        v18 = grpWinStaList;
        if ( !grpWinStaList )
          return 3221225495LL;
        do
        {
          for ( j = *(_QWORD *)(v18 + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( *(_QWORD *)(j + 16) == a1 )
              goto LABEL_25;
          }
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( v18 );
LABEL_25:
        if ( !v18 )
          return 3221225495LL;
        v24[1] = 0;
        v24[0] = 1;
        v27 = 0;
        CurrentProcess = PsGetCurrentProcess(v18, v11, v13, v14);
        v26 = j;
        v28 = 1;
        if ( (int)MapDesktop((__int64)v24, v20) < 0 )
          return 3221225495LL;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21);
        if ( !GetDesktopView(CurrentProcessWin32Process, j) )
          return 3221225495LL;
      }
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
