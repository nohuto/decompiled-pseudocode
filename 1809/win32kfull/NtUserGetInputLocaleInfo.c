/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C0118300
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rax
  ULONG64 v12; // rcx
  _OWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = EnterSharedCrit(0LL, 1LL);
  v7 = *(_QWORD *)(v4 + 440);
  v8 = 0;
  if ( a1 )
  {
    v9 = 0LL;
    v10 = *(_QWORD *)(v4 + 440);
    if ( !v7 )
    {
LABEL_17:
      UserSetLastError(6LL, v5, v7, v6);
      goto LABEL_13;
    }
    do
    {
      if ( *(_QWORD *)(v7 + 40) == a1 )
      {
        if ( *(int *)(v7 + 32) >= 0 )
          goto LABEL_5;
        v9 = v7;
      }
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v7 != v10 );
    v7 = v9;
  }
LABEL_5:
  if ( !v7 )
    goto LABEL_17;
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  if ( *v11 == 32 )
  {
    *(_QWORD *)&v14[0] = 32LL;
    *((_QWORD *)&v14[0] + 1) = *(_QWORD *)(v7 + 40);
    LODWORD(v14[1]) = *(_DWORD *)(v7 + 112);
    DWORD1(v14[1]) = *(unsigned __int16 *)(v7 + 72);
    *((_QWORD *)&v14[1] + 1) = *(_QWORD *)(v7 + 64);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v14[0];
    a2[1] = v14[1];
    v8 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5, v7, v6);
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v12, v5, v7, v6);
  return v8;
}
