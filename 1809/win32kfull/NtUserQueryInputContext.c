/*
 * XREFs of NtUserQueryInputContext @ 0x1C0117EC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE v11; // rbx
  int v12; // edi
  HANDLE ThreadProcessId; // rax
  int v15; // edi
  HANDLE *v16; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v4, gpsi, v5);
    v11 = 0LL;
    goto LABEL_7;
  }
  LOBYTE(v4) = 17;
  v6 = HMValidateHandle(a1, v4);
  v11 = 0LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v8);
      goto LABEL_6;
    }
    v12 = a2 - 1;
    if ( !v12 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v8);
LABEL_6:
      v11 = ThreadProcessId;
      goto LABEL_7;
    }
    v15 = v12 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
      {
        UserSetLastError(87LL, v7, v9, v10);
        goto LABEL_7;
      }
      v16 = *(HANDLE **)(v8 + 792);
    }
    else
    {
      v16 = *(HANDLE **)(v8 + 784);
    }
    if ( v16 )
      v11 = *v16;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
