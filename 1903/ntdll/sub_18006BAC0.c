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

__int64 __fastcall sub_18006BAC0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  volatile uint64_t EnvironmentVersion; // rdi
  int v7; // eax
  __int64 v8; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&xmmword_180166020 + 1) )
  {
    RtlAcquireSRWLockShared(&qword_1801664A8, (unsigned __int64)ProcessParameters, a3, a4);
    if ( *((_QWORD *)&xmmword_180166020 + 1) )
    {
      v8 = sub_18006BB94(&unk_18011DD40, 4LL, a1);
      RtlReleaseSRWLockShared(&qword_1801664A8);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&qword_1801664A8);
  }
  v7 = dword_180166330;
  if ( !dword_180166330 )
    v7 = sub_18006C210(L"\"$", 1LL, &dword_180166330);
  v8 = sub_18006BB94((char *)&unk_18011DD10 + 16 * v7, 4LL, a1);
LABEL_5:
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = EnvironmentVersion;
    *(_BYTE *)(v8 + 100) = 0;
  }
  return v8;
}
