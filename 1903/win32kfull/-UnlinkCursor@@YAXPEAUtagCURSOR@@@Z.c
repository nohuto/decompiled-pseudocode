/*
 * XREFs of ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0124AC8
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ZombieCursor @ 0x1C01EC270 (ZombieCursor.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall UnlinkCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  struct tagCURSOR **v8; // rcx
  struct tagCURSOR *v9; // rax
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // r8

  v5 = 0LL;
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 )
  {
    v7 = 0;
    v8 = (struct tagCURSOR **)(v6 + 728);
  }
  else
  {
    v7 = 1;
    v8 = &gpcurFirst;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        if ( v9 == a1 )
        {
          *v8 = (struct tagCURSOR *)*((_QWORD *)a1 + 4);
LABEL_7:
          *((_QWORD *)a1 + 4) = 0LL;
          *((_DWORD *)a1 + 20) &= ~0x100u;
          return;
        }
        v8 = (struct tagCURSOR **)((char *)v9 + 32);
      }
      if ( v7 )
        break;
      v8 = &gpcurFirst;
      v7 = 1;
    }
    if ( (_DWORD)v5 )
      break;
    CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread((__int64)v8, v5, a3, a4);
    v5 = 1LL;
    v8 = (struct tagCURSOR **)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 728LL);
  }
  v11 = gSharedInfo[1];
  v12 = v11 + 32LL * giheLast;
  v13 = (_QWORD *)gpKernelHandleTable;
  while ( v11 <= v12 )
  {
    if ( *(_BYTE *)(v11 + 24) == 3 )
    {
      if ( *(struct tagCURSOR **)(*v13 + 32LL) == a1 )
      {
        *(_QWORD *)(*v13 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
      v14 = v13[1];
      if ( v14 && *(struct tagCURSOR **)(v14 + 728) == a1 )
      {
        *(_QWORD *)(v14 + 728) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
    }
    v11 += 32LL;
    v13 += 3;
  }
}
