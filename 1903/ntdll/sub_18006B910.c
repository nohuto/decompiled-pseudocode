/*
 * XREFs of sub_18006B910 @ 0x18006B910
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 */

__int64 __fastcall sub_18006B910(__int64 a1)
{
  bool v2; // cf
  void *v3; // rcx
  ULONG_PTR EnvironmentVersion; // rbx
  __int64 result; // rax

  v2 = a1 != 0;
  v3 = &unk_18011DD30;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( !a1 )
    v3 = &unk_18011DD10;
  result = sub_18006BB94(v3, 4 - (unsigned int)v2, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
