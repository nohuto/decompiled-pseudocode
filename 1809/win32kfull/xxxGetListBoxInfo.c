/*
 * XREFs of xxxGetListBoxInfo @ 0x1C022C5FC
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C0215880 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(__int64 *BugCheckParameter2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int16 v4; // ax
  __int64 v5; // rcx
  unsigned __int64 *v6; // rsi
  PRKPROCESS *v7; // r15
  __int64 v8; // rcx
  int v9; // r14d
  unsigned __int64 v10; // rsi
  __int64 v11; // rax

  v2 = 0;
  if ( BugCheckParameter2
    && (v3 = BugCheckParameter2[5], v4 = *(_WORD *)(v3 + 42), (v4 & 0x1000) == 0)
    && ((v5 = 678LL, (v4 & 0x2FFF) == 0x2A6)
     || (v5 = gpsi, **(_WORD **)(BugCheckParameter2[14] + 8) == *(_WORD *)(gpsi + 874LL))
      ? (!*(_DWORD *)(v3 + 252)
       ? (v6 = *(unsigned __int64 **)(v3 + 296))
       : (v6 = (unsigned __int64 *)BugCheckParameter2[33]))
      : (v6 = 0LL),
        v6) )
  {
    v7 = *(PRKPROCESS **)(BugCheckParameter2[2] + 424);
    if ( v7 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v5) )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      KeAttachProcess(*v7);
    }
    v10 = *v6;
    if ( v10 )
    {
      if ( PsGetCurrentProcessWow64Process(v8) )
        v11 = 0LL;
      else
        v11 = 3LL;
      if ( (v11 & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v10 + 92) & 0x40000) != 0 )
        v2 = *(_DWORD *)(v10 + 76);
      else
        v2 = *(_DWORD *)(v10 + 32);
    }
    if ( v9 )
      KeDetachProcess();
    return v2;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
