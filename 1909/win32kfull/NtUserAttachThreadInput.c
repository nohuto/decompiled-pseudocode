/*
 * XREFs of NtUserAttachThreadInput @ 0x1C0137080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D678C (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ecx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  EnterCrit(0LL, 1LL);
  v6 = PtiFromThreadId(a1);
  v10 = 0LL;
  v11 = v6;
  if ( !v6 )
    goto LABEL_19;
  v12 = PtiFromThreadId(a2);
  v13 = v12;
  if ( !v12 || !*(_QWORD *)(v11 + 448) || !*(_QWORD *)(v12 + 448) )
    goto LABEL_19;
  v7 = 0x40000LL;
  v14 = *(_DWORD *)(v11 + 1224) & 0x40000;
  if ( !a3 )
  {
    if ( !v14 )
    {
      if ( (*(_DWORD *)(v12 + 1224) & 0x40000) == 0 )
        goto LABEL_8;
      v19 = v11;
      v20 = v12;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v12 + 1224) & 0x40000) == 0 )
    {
      v19 = v12;
      v20 = v11;
LABEL_17:
      DisassociateShellFrameAppThreads2(v20, v19);
      goto LABEL_8;
    }
LABEL_19:
    v18 = 87LL;
    goto LABEL_20;
  }
  if ( v14 || (*(_DWORD *)(v12 + 1224) & 0x40000) != 0 )
  {
    v18 = 5LL;
LABEL_20:
    UserSetLastError(v18, v7, v8, v9);
    goto LABEL_10;
  }
LABEL_8:
  v15 = zzzAttachThreadInput(v11, v13, a3 != 0);
  if ( v15 < 0 )
  {
    v18 = RtlNtStatusToDosError(v15);
    goto LABEL_20;
  }
  v10 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v16);
  return v10;
}
