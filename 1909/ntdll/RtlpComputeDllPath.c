/*
 * XREFs of RtlpComputeDllPath @ 0x18006BD10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006BDE4 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006C460 (RtlpLookupCurDirSetting.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // eax
  __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = RtlpComputePath(&unk_18011DD40, 4LL, a1);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_180166340;
  if ( !dword_180166340 )
    v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180118470);
  v4 = RtlpComputePath((char *)&unk_18011DD10 + 16 * v3, 4LL, a1);
LABEL_5:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 100) = 0;
  }
  return v4;
}
