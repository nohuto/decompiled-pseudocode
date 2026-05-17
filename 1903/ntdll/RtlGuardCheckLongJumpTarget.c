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

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  char v8; // bl
  _DWORD *v9; // rax
  rsize_t v10; // r8
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v8 = 1;
LABEL_15:
    *a3 = v8;
    return 0LL;
  }
  v8 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18017A4E0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    sub_18001E620(a1, (signed __int64)&v13, v6, v7);
  }
  else
  {
    v13 = xmmword_18017A4E0;
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    v9 = sub_18001F450(*((unsigned __int64 *)&v13 + 1));
    if ( !v9
      || *v9 < 0xC0u
      || (v9[36] & 0x10000) == 0
      || (Key = a1 - DWORD2(v13), (v10 = *((_QWORD *)v9 + 23)) != 0)
      && bsearch_s(&Key, *((const void **)v9 + 22), v10, (unsigned int)((v9[36] >> 28) + 4), sub_180085100, 0LL) )
    {
LABEL_10:
      v8 = 1;
      goto LABEL_11;
    }
  }
  else if ( (int)RtlQueryProtectedPolicy(&unk_180138258) >= 0 && v12 )
  {
    goto LABEL_10;
  }
  if ( !a2 )
    sub_1800A17F0(38LL, a1);
LABEL_11:
  if ( a3 )
    goto LABEL_15;
  return 0LL;
}
