/*
 * XREFs of NtUserAttachThreadInput @ 0x1C0057A70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01A1D80 (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ecx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx

  EnterCrit(0LL, 1LL);
  v6 = PtiFromThreadId(a1);
  v8 = 0LL;
  v9 = v6;
  if ( !v6 )
    goto LABEL_19;
  v10 = PtiFromThreadId(a2);
  v11 = v10;
  if ( !v10 || !*(_QWORD *)(v9 + 448) || !*(_QWORD *)(v10 + 448) )
    goto LABEL_19;
  v7 = 0x40000LL;
  v12 = *(_DWORD *)(v9 + 1200) & 0x40000;
  if ( !a3 )
  {
    if ( !v12 )
    {
      if ( (*(_DWORD *)(v10 + 1200) & 0x40000) == 0 )
        goto LABEL_8;
      v20 = v9;
      v21 = v10;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v10 + 1200) & 0x40000) == 0 )
    {
      v20 = v10;
      v21 = v9;
LABEL_17:
      DisassociateShellFrameAppThreads2(v21, v20);
      goto LABEL_8;
    }
LABEL_19:
    v19 = 87LL;
    goto LABEL_20;
  }
  if ( v12 || (*(_DWORD *)(v10 + 1200) & 0x40000) != 0 )
  {
    v19 = 5LL;
LABEL_20:
    UserSetLastError(v19, v7);
    goto LABEL_10;
  }
LABEL_8:
  v13 = zzzAttachThreadInput(v9, v11, a3 != 0);
  if ( v13 < 0 )
  {
    v19 = RtlNtStatusToDosError(v13);
    goto LABEL_20;
  }
  v8 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v8;
}
