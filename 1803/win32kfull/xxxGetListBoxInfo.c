/*
 * XREFs of xxxGetListBoxInfo @ 0x1C02036D0
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01EF220 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(__int64 *BugCheckParameter2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 *v5; // rsi
  PRKPROCESS *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  unsigned __int64 v12; // rsi
  __int64 v13; // rax

  v2 = 0;
  if ( BugCheckParameter2
    && ((v3 = BugCheckParameter2[5], v4 = 678LL, (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x2A6)
     || (v4 = gpsi, **(_WORD **)(BugCheckParameter2[14] + 8) == *(_WORD *)(gpsi + 874LL))
      ? (!*(_DWORD *)(v3 + 252)
       ? (v5 = *(unsigned __int64 **)(v3 + 296))
       : (v5 = (unsigned __int64 *)BugCheckParameter2[34]))
      : (v5 = 0LL),
        v5) )
  {
    v6 = *(PRKPROCESS **)(BugCheckParameter2[2] + 416);
    if ( v6 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v4) )
    {
      v11 = 0;
    }
    else
    {
      v11 = 1;
      KeAttachProcess(*v6);
    }
    v12 = *v5;
    if ( v12 )
    {
      if ( PsGetCurrentProcessWow64Process(v8, v7, v9, v10) )
        v13 = 0LL;
      else
        v13 = 3LL;
      if ( (v13 & v12) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v12 + 92) & 0x40000) != 0 )
        v2 = *(_DWORD *)(v12 + 76);
      else
        v2 = *(_DWORD *)(v12 + 32);
    }
    if ( v11 )
      KeDetachProcess();
    return v2;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
