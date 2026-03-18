/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C010A4D0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(__int64 a1, __int64 a2)
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
  for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
  {
    for ( j = *(_QWORD *)(i + 320); j; j = *(_QWORD *)(j + 656) )
    {
      if ( *(_DWORD *)(j + 884) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(_QWORD *)(j + 424), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
