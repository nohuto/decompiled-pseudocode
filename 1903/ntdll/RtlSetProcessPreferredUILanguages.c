/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x1800849D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EE3C @ 0x18000EE3C (sub_18000EE3C.c)
 *     sub_18000EEB4 @ 0x18000EEB4 (sub_18000EEB4.c)
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  v5 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v5 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      goto LABEL_27;
    if ( (int)sub_18000EE3C(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)sub_18000EEB4(a2, v8, &v16) < 0 )
      return (unsigned int)-1073741811;
    if ( v16 < 2 || *a2 || a2[1] )
    {
      v7 = sub_180015FD0(qword_180166098, a2, v16, v5 | 2u, 26, 5u, &v14);
      if ( v7 < 0 )
      {
        v13 = v14;
LABEL_29:
        sub_180015770(v13);
        return (unsigned int)v7;
      }
      v9 = v14;
      if ( !v14 || !*(_WORD *)(v14 + 4) )
      {
        sub_180015770(v14);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *(unsigned __int16 *)(v14 + 4);
    }
    else
    {
LABEL_27:
      v9 = v14;
    }
    sub_180012D4C();
    RtlEnterCriticalSection((__int64)&unk_180163D00);
    v10 = v15[0];
    v11 = *(_QWORD *)(v15[0] + 72);
    *(_QWORD *)(v15[0] + 72) = v9;
    ++*(_DWORD *)(v10 + 16);
    v12 = *(_QWORD *)(v10 + 96);
    if ( v12 )
      *(_DWORD *)(v12 + 40) |= 0x80u;
    RtlLeaveCriticalSection((__int64)&unk_180163D00);
    if ( !v11 )
      return (unsigned int)v7;
    v13 = v11;
    goto LABEL_29;
  }
  return result;
}
