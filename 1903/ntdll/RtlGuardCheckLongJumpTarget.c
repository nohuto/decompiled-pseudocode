/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180078390
 * Callers:
 *     RtlRestoreContext @ 0x18001EE50 (RtlRestoreContext.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     RtlQueryProtectedPolicy @ 0x18007FAE0 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x18008F320 (bsearch_s.c)
 *     sub_1800A17F0 @ 0x1800A17F0 (sub_1800A17F0.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char *v7; // r8
  char *v8; // r9
  char v9; // bl
  _DWORD *v10; // rax
  rsize_t v11; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  int v14[4]; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( !IsLongJumpTarget )
      return 0;
    v9 = 1;
LABEL_15:
    *(_BYTE *)IsLongJumpTarget = v9;
    return 0;
  }
  v9 = 0;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18017A4E0 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18017A4E0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    sub_18001E620((unsigned __int64)PcValue, (signed __int64)v14, v7, v8);
  }
  else
  {
    *(_OWORD *)v14 = xmmword_18017A4E0;
  }
  if ( *(_QWORD *)&v14[2] )
  {
    v10 = sub_18001F450(*(void **)&v14[2]);
    if ( !v10
      || *v10 < 0xC0u
      || (v10[36] & 0x10000) == 0
      || (Key = (_DWORD)PcValue - v14[2], (v11 = *((_QWORD *)v10 + 23)) != 0)
      && bsearch_s(&Key, *((const void **)v10 + 22), v11, (unsigned int)((v10[36] >> 28) + 4), sub_180085100, 0LL) )
    {
LABEL_10:
      v9 = 1;
      goto LABEL_11;
    }
  }
  else if ( RtlQueryProtectedPolicy((PGUID)&stru_180138258, &PolicyValue) >= 0 && PolicyValue )
  {
    goto LABEL_10;
  }
  if ( !v4 )
    sub_1800A17F0(38LL, PcValue);
LABEL_11:
  if ( IsLongJumpTarget )
    goto LABEL_15;
  return 0;
}
