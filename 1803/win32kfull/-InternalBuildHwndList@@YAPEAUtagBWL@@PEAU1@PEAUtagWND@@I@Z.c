/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     _FindWindowEx @ 0x1C0029C30 (_FindWindowEx.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, __int64 a3)
{
  char v3; // si
  struct tagWND *v4; // rdi
  struct tagBWL *v5; // rbx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbp
  struct tagWND *v9; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  int i; // [rsp+30h] [rbp+8h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x20;
  for ( i = v6; ; v6 = i )
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v6 || (unsigned int)IsNonImmersiveBand(v4) )
    {
      if ( (v3 & 0x40) == 0
        || (v13 = *((_QWORD *)v4 + 5), (*(_BYTE *)(v13 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v13 + 20) & 0x40) != 0
        || !(unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)v4, 255LL, a3) )
      {
        if ( !v7 || v7 == *((_QWORD *)v4 + 2) )
        {
          **((_QWORD **)v5 + 1) = *(_QWORD *)v4;
          *((_QWORD *)v5 + 1) += 8LL;
          v8 = *((_QWORD *)v5 + 1);
          if ( v8 == *((_QWORD *)v5 + 2) )
          {
            v11 = v8 - (_QWORD)v5;
            v12 = UserReAllocPool(v5, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
            if ( !v12 )
              return v5;
            v5 = (struct tagBWL *)v12;
            *(_QWORD *)(v12 + 8) = v12 + v11;
            *(_QWORD *)(v12 + 16) = v12 + v11 + 64;
          }
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v9 = (struct tagWND *)*((_QWORD *)v4 + 11);
      if ( v9 )
      {
        v5 = InternalBuildHwndList(v5, v9, 3u);
        if ( *((_QWORD *)v5 + 1) >= *((_QWORD *)v5 + 2) )
          break;
      }
    }
    if ( (v3 & 2) == 0 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
    if ( !v4 )
      break;
  }
  return v5;
}
