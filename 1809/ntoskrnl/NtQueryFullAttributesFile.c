/*
 * XREFs of NtQueryFullAttributesFile @ 0x14060C590
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     FsRtlpCleanupEcps @ 0x14060C7E4 (FsRtlpCleanupEcps.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // esi
  NTSTATUS result; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v10[28]; // [rsp+50h] [rbp-258h] BYREF
  _OWORD v11[4]; // [rsp+130h] [rbp-178h] BYREF
  char v12; // [rsp+170h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, 0x38uLL);
  LODWORD(v10[0]) = 14680072;
  HIWORD(v10[8]) = 7;
  LODWORD(v10[11]) = 1;
  LODWORD(v10[8]) = 2113536;
  BYTE1(v10[17]) = 1;
  BYTE3(v10[17]) = 1;
  v10[18] = &v12;
  v10[6] = ObjectAttributes;
  LODWORD(v10[19]) = 32;
  if ( PreviousMode )
    v10[13] = v11;
  else
    v10[13] = FileInformation;
  memset(&v10[20], 0, 0x28uLL);
  LOWORD(v10[20]) = 40;
  v10[24] = 1LL;
  v10[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v10,
         v10[24],
         Handle);
  if ( v10[21] && (unsigned __int8)FsRtlpCleanupEcps() )
    v10[21] = 0LL;
  if ( LODWORD(v10[4]) == -1096154543 )
  {
    result = v10[2];
    if ( SLODWORD(v10[2]) >= 0 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)&FileInformation->CreationTime.LowPart = v11[0];
        *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v11[1];
        *(_OWORD *)&FileInformation->AllocationSize.LowPart = v11[2];
        *(_QWORD *)&FileInformation->FileAttributes = *(_QWORD *)&v11[3];
      }
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
