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

__int64 __fastcall RtlpComputeDllPath(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int64 EnvironmentVersion; // rdi
  int v7; // eax
  __int64 v8; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, (unsigned __int64)ProcessParameters, a3, a4);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v8 = RtlpComputePath(&unk_18011DD40, 4LL, a1);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v7 = dword_180166340;
  if ( !dword_180166340 )
    v7 = RtlpLookupCurDirSetting(L"\"$", 1LL, &dword_180166340);
  v8 = RtlpComputePath((char *)&unk_18011DD10 + 16 * v7, 4LL, a1);
LABEL_5:
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = EnvironmentVersion;
    *(_BYTE *)(v8 + 100) = 0;
  }
  return v8;
}
