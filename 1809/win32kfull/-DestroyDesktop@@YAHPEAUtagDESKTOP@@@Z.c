/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C013212C
 * Callers:
 *     UnmapDesktop @ 0x1C00B2410 (UnmapDesktop.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     UnpackAffectedThreadList @ 0x1C00D7258 (UnpackAffectedThreadList.c)
 */

__int64 __fastcall DestroyDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // rcx

  v2 = *((_QWORD *)a1 + 5);
  if ( (*((_DWORD *)a1 + 12) & 8) != 0 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 30);
  if ( v3 )
  {
    v9 = *(_QWORD *)(v3 + 8);
    if ( v9 )
    {
      Win32FreePool(v9);
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    Win32FreePool(v3);
    *((_QWORD *)a1 + 30) = 0LL;
  }
  if ( a1 == (struct tagDESKTOP *)gpdeskRecalcQueueAttach )
    UnpackAffectedThreadList();
  v4 = v2 + 16;
  v5 = *(_QWORD *)(v2 + 16);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    do
    {
      v5 = v6;
      if ( (struct tagDESKTOP *)v6 == a1 )
        break;
      v4 = v6 + 32;
      v5 = *(_QWORD *)(v6 + 32);
      v6 = v5;
    }
    while ( v5 );
  }
  if ( v5 )
  {
    LockObjectAssignment(v4, *((_QWORD *)a1 + 4));
    UnlockObjectAssignment((char *)a1 + 32);
  }
  v7 = *(_QWORD *)(v2 + 24);
  LockObjectAssignment((char *)a1 + 32, *(_QWORD *)(v7 + 48));
  LockObjectAssignment(v7 + 48, a1);
  PostThreadMessage(*(_QWORD *)(v7 + 16), 0x31Cu, 2LL, 0LL);
  *((_DWORD *)a1 + 12) |= 8u;
  return 1LL;
}
