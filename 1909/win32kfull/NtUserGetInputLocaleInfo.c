/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C00FB950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rax
  ULONG64 v12; // rcx
  _OWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  if ( a1 )
  {
    v9 = 0LL;
    v10 = *(_QWORD *)(v4 + 432);
    if ( !v10 )
    {
LABEL_19:
      UserSetLastError(6LL, v5, v6, v7);
      goto LABEL_14;
    }
    v5 = v10;
    do
    {
      if ( *(_QWORD *)(v5 + 40) == a1 )
      {
        if ( *(int *)(v5 + 32) >= 0 )
          goto LABEL_6;
        v9 = v5;
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v10 );
    v5 = v9;
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 432);
  }
LABEL_6:
  if ( !v5 )
    goto LABEL_19;
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  if ( *v11 == 32 )
  {
    *(_QWORD *)&v14[0] = 32LL;
    *((_QWORD *)&v14[0] + 1) = *(_QWORD *)(v5 + 40);
    LODWORD(v14[1]) = *(_DWORD *)(v5 + 112);
    DWORD1(v14[1]) = *(unsigned __int16 *)(v5 + 72);
    *((_QWORD *)&v14[1] + 1) = *(_QWORD *)(v5 + 64);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v14[0];
    a2[1] = v14[1];
    v8 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5, v6, v7);
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
