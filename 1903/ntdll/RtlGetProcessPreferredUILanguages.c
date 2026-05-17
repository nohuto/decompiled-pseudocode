/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x180088AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180014248 @ 0x180014248 (sub_180014248.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, int *a2, _DWORD *a3, unsigned int *a4)
{
  char v7; // bl
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) == 0 && (a1 & 0xC) != 12 )
      goto LABEL_7;
    return 3221225485LL;
  }
  v7 = 8;
LABEL_7:
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( *(_QWORD *)(v11 + 72) )
    {
      sub_180012D4C();
      RtlEnterCriticalSection((__int64)&unk_180163D00);
      v10 = sub_180014248(*(_QWORD *)(v9 + 72), v9, a3, a4, v7, 0, a2);
      RtlLeaveCriticalSection((__int64)&unk_180163D00);
    }
    else
    {
      return (unsigned int)sub_180014248(0LL, v11, a3, a4, v7, 0, a2);
    }
    return v10;
  }
  return result;
}
