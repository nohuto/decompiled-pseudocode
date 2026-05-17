/*
 * XREFs of sub_18006B880 @ 0x18006B880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 *     sub_18006C210 @ 0x18006C210 (sub_18006C210.c)
 */

__int64 sub_18006B880()
{
  int v0; // eax
  volatile uint64_t EnvironmentVersion; // rbx
  __int64 result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (dword_180166508 & 1) == 0 )
  {
    if ( (dword_180166508 & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_180166334;
      if ( !dword_180166334 )
        v0 = sub_18006C210(L"*,", 0LL, &dword_180166334);
    }
  }
  result = sub_18006BB94((char *)&unk_18011DD10 + 16 * v0, 4LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
