/*
 * XREFs of xxxGetListBoxInfo @ 0x1C02451D8
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C022D660 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(__int64 *BugCheckParameter2, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 *v6; // rdi
  PRKPROCESS *v7; // r14
  __int64 v8; // rcx
  int v9; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax

  v3 = 0;
  if ( BugCheckParameter2
    && ((v4 = BugCheckParameter2[5], v5 = 678LL, (*(_WORD *)(v4 + 42) & 0x3FFF) == 0x2A6)
     || (a2 = **(unsigned __int16 **)(BugCheckParameter2[17] + 8), v5 = gpsi, (_WORD)a2 == *(_WORD *)(gpsi + 874LL))
      ? (!*(_DWORD *)(v4 + 252)
       ? (v6 = *(unsigned __int64 **)(v4 + 296))
       : (v6 = (unsigned __int64 *)BugCheckParameter2[35]))
      : (v6 = 0LL),
        v6) )
  {
    v7 = *(PRKPROCESS **)(BugCheckParameter2[2] + 416);
    if ( v7 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v5, a2) )
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
        v3 = *(_DWORD *)(v10 + 76);
      else
        v3 = *(_DWORD *)(v10 + 32);
    }
    if ( v9 )
      KeDetachProcess();
    return v3;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
  }
}
