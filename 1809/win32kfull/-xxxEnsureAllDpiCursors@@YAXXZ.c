/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00DEBF0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00BCF18 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 */

void __fastcall xxxEnsureAllDpiCursors(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  struct tagCURSOR *v4; // rbp
  struct _UNICODE_STRING *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct tagCURSOR **v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // rax
  struct tagCURSOR *v11; // rdi
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v12;
  v12[1] = 0LL;
  v2 = 0LL;
  v3 = 19LL;
  do
  {
    v4 = *(struct tagCURSOR **)(v2 + *(_QWORD *)gasyscur + 8);
    if ( v4 )
    {
      v5 = 0LL;
      v6 = 33024;
      if ( *(_QWORD *)(v2 + *(_QWORD *)gasyscur + 24) )
      {
        v5 = (struct _UNICODE_STRING *)&gasyscur[v2 / 2 + 8];
        if ( ((unsigned __int64)v5->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v6 = 33040;
      }
      ThreadLockExchange(*(_QWORD *)(v2 + *(_QWORD *)gasyscur + 8), v12);
      xxxEnsureDpiCursors(v4, v5, v6);
    }
    v2 += 552LL;
    --v3;
  }
  while ( v3 );
  v7 = gSharedInfo[0];
  v8 = (struct tagCURSOR **)gpKernelHandleTable;
  v9 = gSharedInfo[1];
  for ( i = v9 + 32LL * giheLast; v9 <= i; i = gSharedInfo[1] + 32LL * giheLast )
  {
    if ( *(_BYTE *)(v9 + 24) == 3 )
    {
      v11 = *v8;
      if ( (*((_DWORD *)*v8 + 20) & 0x5240) == 0x4000 )
      {
        ThreadLockExchange(*v8, v12);
        xxxEnsureDpiCursors(v11, 0LL, 0);
      }
    }
    v9 += 32LL;
    v7 = gSharedInfo[0];
    v8 += 3;
  }
  ThreadUnlock1(v7, a2);
}
