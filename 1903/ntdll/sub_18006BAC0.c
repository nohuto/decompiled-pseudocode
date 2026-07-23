/*
 * XREFs of sub_18006BAC0 @ 0x18006BAC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 *     sub_18006C210 @ 0x18006C210 (sub_18006C210.c)
 */

__int64 __fastcall sub_18006BAC0(__int64 a1)
{
  ULONG_PTR EnvironmentVersion; // rdi
  int v3; // eax
  __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( stru_180166020.Buffer )
  {
    RtlAcquireSRWLockShared(&stru_1801664A8);
    if ( stru_180166020.Buffer )
    {
      v4 = sub_18006BB94(&unk_18011DD40, 4LL, a1);
      RtlReleaseSRWLockShared(&stru_1801664A8);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&stru_1801664A8);
  }
  v3 = dword_180166330;
  if ( !dword_180166330 )
    v3 = sub_18006C210((PUNICODE_STRING)&stru_180118470);
  v4 = sub_18006BB94((char *)&unk_18011DD10 + 16 * v3, 4LL, a1);
LABEL_5:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 100) = 0;
  }
  return v4;
}
