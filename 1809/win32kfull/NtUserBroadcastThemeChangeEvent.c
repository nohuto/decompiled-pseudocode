/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C012BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(__int64 a1, LARGE_INTEGER a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 j; // rbx
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  for ( i = gppiList; i; i = *(_QWORD *)(i + 384) )
  {
    for ( j = *(_QWORD *)(i + 328); j; j = *(_QWORD *)(j + 664) )
    {
      if ( *(_DWORD *)(j + 892) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(_QWORD *)(j + 432), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
