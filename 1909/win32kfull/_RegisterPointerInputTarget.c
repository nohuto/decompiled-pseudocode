/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01F35C4
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C0233200 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0039014 (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // edi
  int v6; // esi
  __int128 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a4;
  v6 = a3;
  *((_QWORD *)&v7 + 1) = a1;
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v10 = 87LL;
    goto LABEL_14;
  }
  UpdatePointerRedirIsAlive(v8);
  a2 = 216LL;
  if ( v6 != 2 )
    a2 = 224LL;
  *(_QWORD *)&v7 = a2 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v7 + 1) + 24LL) + 8LL);
  v9 = *(_QWORD *)v7;
  if ( !v5 )
  {
    if ( v9 == *((_QWORD *)&v7 + 1) )
      HMAssignmentUnlock(v7);
    return 1LL;
  }
  if ( !v9 )
  {
    v12 = v7;
    HMAssignmentLock(&v12);
    return 1LL;
  }
  if ( v9 == *((_QWORD *)&v7 + 1) )
    return 1LL;
  v10 = 5LL;
LABEL_14:
  UserSetLastError(v10, a2, a3, a4);
  return 0LL;
}
