/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x18010E940
 * Callers:
 *     sub_180030DFC @ 0x180030DFC (sub_180030DFC.c)
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolMaxThreads @ 0x180062E20 (TpSetPoolMaxThreads.c)
 *     sub_18007E7CC @ 0x18007E7CC (sub_18007E7CC.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18007FD70 (TpSetPoolMaxThreadsSoftLimit.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  _TP_POOL *v2; // rax
  _TP_POOL *v3; // rsi
  int v4; // ebp
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // eax
  ULONG v9; // eax
  ULONG v10; // edi
  __int64 v11; // r8

  v2 = (_TP_POOL *)sub_18007E7CC();
  v3 = v2;
  if ( !v2 || (v4 = *((_DWORD *)v2 + 110)) == 0 )
    v4 = MEMORY[0x7FFE03C0];
  v5 = 8 * v4;
  if ( v5 < 0x300 )
    v5 = 768;
  if ( !v2 || (v6 = *((_DWORD *)v2 + 110)) == 0 )
    v6 = MEMORY[0x7FFE03C0];
  v7 = 4 * v6;
  if ( (unsigned int)(4 * v6) < 0x180 )
    v7 = 384;
  if ( MaxThreads )
  {
    if ( a1 <= MaxThreads )
      return;
    goto LABEL_16;
  }
  if ( a1 <= v7 )
    return;
  v8 = v5;
  if ( a1 > v5 )
LABEL_16:
    v8 = a1;
  if ( !v8 )
    return;
  RtlAcquireSRWLockExclusive(&stru_180166480);
  v9 = MaxThreads;
  v10 = 0;
  if ( MaxThreads )
  {
    if ( a1 > MaxThreads )
      goto LABEL_23;
  }
  else if ( a1 > v7 )
  {
    v10 = v5;
    if ( a1 <= v5 )
    {
LABEL_24:
      if ( v10 )
        v9 = v10;
      MaxThreads = v9;
      goto LABEL_27;
    }
LABEL_23:
    v10 = a1;
    goto LABEL_24;
  }
LABEL_27:
  RtlReleaseSRWLockExclusive(&stru_180166480);
  if ( v10 )
  {
    if ( v3 )
    {
      TpSetPoolMaxThreads(v3, v10);
      TpSetPoolMaxThreadsSoftLimit((__int64)v3, 0LL, v11);
      sub_18002F2D4((const void **)&qword_180166470, &stru_180166480);
    }
  }
}
