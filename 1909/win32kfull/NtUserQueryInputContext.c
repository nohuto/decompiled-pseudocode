/*
 * XREFs of NtUserQueryInputContext @ 0x1C0021770
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  HANDLE v7; // rbx
  int v8; // edi
  HANDLE ThreadProcessId; // rax
  int v11; // edi
  HANDLE *v12; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v7 = 0LL;
    goto LABEL_7;
  }
  LOBYTE(v4) = 17;
  v5 = HMValidateHandle(a1, v4);
  v7 = 0LL;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v6);
      goto LABEL_6;
    }
    v8 = a2 - 1;
    if ( !v8 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v6);
LABEL_6:
      v7 = ThreadProcessId;
      goto LABEL_7;
    }
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        UserSetLastError(87LL);
        goto LABEL_7;
      }
      v12 = *(HANDLE **)(v6 + 784);
    }
    else
    {
      v12 = *(HANDLE **)(v6 + 776);
    }
    if ( v12 )
      v7 = *v12;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
