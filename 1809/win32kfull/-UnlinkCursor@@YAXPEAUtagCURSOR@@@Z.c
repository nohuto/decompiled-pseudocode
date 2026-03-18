/*
 * XREFs of ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C014CE5C
 * Callers:
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C006C188 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ZombieCursor @ 0x1C014CDF0 (ZombieCursor.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall UnlinkCursor(struct tagCURSOR *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  BOOL v4; // edi
  struct tagCURSOR **v5; // rcx
  struct tagCURSOR *v6; // rax
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // r8

  v1 = 0LL;
  v3 = *((_QWORD *)a1 + 3);
  v4 = v3 == 0;
  if ( v3 )
    v5 = (struct tagCURSOR **)(v3 + 736);
  else
    v5 = &gpcurFirst;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        if ( v6 == a1 )
        {
          *v5 = (struct tagCURSOR *)*((_QWORD *)a1 + 4);
LABEL_7:
          *((_QWORD *)a1 + 4) = 0LL;
          *((_DWORD *)a1 + 20) &= ~0x100u;
          return;
        }
        v5 = (struct tagCURSOR **)((char *)v6 + 32);
      }
      if ( v4 )
        break;
      v5 = &gpcurFirst;
      v4 = 1;
    }
    if ( (_DWORD)v1 )
      break;
    CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread((__int64)v5, v1);
    v1 = 1LL;
    v5 = (struct tagCURSOR **)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 736LL);
  }
  v8 = gSharedInfo[1];
  v9 = v8 + 32LL * giheLast;
  v10 = (_QWORD *)gpKernelHandleTable;
  while ( v8 <= v9 )
  {
    if ( *(_BYTE *)(v8 + 24) == 3 )
    {
      if ( *(struct tagCURSOR **)(*v10 + 32LL) == a1 )
      {
        *(_QWORD *)(*v10 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
      v11 = v10[1];
      if ( v11 && *(struct tagCURSOR **)(v11 + 736) == a1 )
      {
        *(_QWORD *)(v11 + 736) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
    }
    v8 += 32LL;
    v10 += 3;
  }
}
