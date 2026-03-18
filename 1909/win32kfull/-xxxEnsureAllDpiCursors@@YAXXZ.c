/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00F11F4
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00F1138 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00F1354 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 */

void __fastcall xxxEnsureAllDpiCursors(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  struct tagCURSOR *v5; // rbp
  struct _UNICODE_STRING *v6; // r14
  unsigned int v7; // edi
  struct tagCURSOR **v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // rcx
  struct tagCURSOR *v11; // rdi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v12 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v12;
  v13 = 0LL;
  v3 = 0LL;
  v4 = 19LL;
  do
  {
    v5 = *(struct tagCURSOR **)(v3 + gasyscur[0] + 8);
    if ( v5 )
    {
      v6 = 0LL;
      v7 = 33024;
      if ( *(_QWORD *)(v3 + gasyscur[0] + 24) )
      {
        v6 = (struct _UNICODE_STRING *)&gasyscur[v3 / 8 + 2];
        if ( ((unsigned __int64)v6->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v7 = 33040;
      }
      ThreadLockExchange(*(_QWORD *)(v3 + gasyscur[0] + 8), &v12);
      xxxEnsureDpiCursors(v5, v6, v7);
    }
    v3 += 552LL;
    --v4;
  }
  while ( v4 );
  v8 = (struct tagCURSOR **)gpKernelHandleTable;
  v9 = gSharedInfo[1];
  for ( i = v9 + 32LL * giheLast; v9 <= i; i = gSharedInfo[1] + 32LL * giheLast )
  {
    if ( *(_BYTE *)(v9 + 24) == 3 )
    {
      v11 = *v8;
      if ( (*((_DWORD *)*v8 + 20) & 0x5240) == 0x4000 )
      {
        ThreadLockExchange(*v8, &v12);
        xxxEnsureDpiCursors(v11, 0LL, 0);
      }
    }
    v9 += 32LL;
    v8 += 3;
  }
  ThreadUnlock1(i, a2, a3);
}
