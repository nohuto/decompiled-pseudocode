/*
 * XREFs of NtUserQueryInputContext @ 0x1C00127C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  HANDLE v10; // rbx
  int v11; // edi
  HANDLE ThreadProcessId; // rax
  int v14; // edi
  HANDLE *v15; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v10 = 0LL;
    goto LABEL_7;
  }
  LOBYTE(v4) = 17;
  v5 = HMValidateHandle(a1, v4);
  v10 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v7);
      goto LABEL_6;
    }
    v11 = a2 - 1;
    if ( !v11 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v7);
LABEL_6:
      v10 = ThreadProcessId;
      goto LABEL_7;
    }
    v14 = v11 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        UserSetLastError(87LL);
        goto LABEL_7;
      }
      v15 = *(HANDLE **)(v7 + 776);
    }
    else
    {
      v15 = *(HANDLE **)(v7 + 768);
    }
    if ( v15 )
      v10 = *v15;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
