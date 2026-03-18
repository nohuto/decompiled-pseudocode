/*
 * XREFs of DestroyWindowStation @ 0x1C0115400
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
    v7 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      v4 = grpWinStaList;
      do
      {
        v8 = v4;
        if ( v1 == v4 )
          break;
        v7 = (_QWORD *)(v4 + 8);
        v8 = *(_QWORD *)(v4 + 8);
        v4 = v8;
      }
      while ( v8 );
      if ( v8 )
      {
        UnlockObjectAssignment(v7);
        *v7 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
    }
    *(_DWORD *)(v1 + 32) |= 0x100u;
    if ( !v9 )
      UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  }
  return 0LL;
}
