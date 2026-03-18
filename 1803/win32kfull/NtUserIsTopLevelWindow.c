/*
 * XREFs of NtUserIsTopLevelWindow @ 0x1C00DBCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 80);
    if ( v4 )
    {
      v8 = *(_QWORD *)(v2 + 24);
      v3 = 0LL;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
          v3 = *(_QWORD *)(v9 + 24);
      }
      if ( v4 == v3 )
        v7 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
