/*
 * XREFs of NtQueryAttributesFile @ 0x14060DC30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060DEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // r15
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // r14d
  int v8; // ecx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v15[28]; // [rsp+50h] [rbp-258h] BYREF
  _QWORD v16[8]; // [rsp+130h] [rbp-178h] BYREF
  char v17; // [rsp+170h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (__int64)FileInformation;
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 39) = *(_BYTE *)(v5 + 39);
  }
  memset(v15, 0, sizeof(v15));
  memset(v16, 0, 56);
  LODWORD(v15[0]) = 14680072;
  HIWORD(v15[8]) = 7;
  LODWORD(v15[11]) = 1;
  LODWORD(v15[8]) = 2113536;
  v15[12] = FileInformation;
  v15[13] = v16;
  BYTE1(v15[17]) = 1;
  v15[18] = &v17;
  v15[6] = ObjectAttributes;
  LODWORD(v15[19]) = 32;
  v15[20] = 40LL;
  memset(&v15[21], 0, 24);
  v15[24] = 1LL;
  v15[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v15,
         v15[24],
         Handle);
  if ( v15[21] )
  {
    v8 = *(_DWORD *)(v15[21] + 4LL);
    if ( (v8 & 0x3F0) != 0 )
    {
      *(_DWORD *)(v15[21] + 4LL) = v8 - 16;
LABEL_11:
      v15[21] = 0LL;
      goto LABEL_12;
    }
    if ( (v8 & 1) == 0 )
    {
      FsRtlFreeExtraCreateParameterList((PECP_LIST)v15[21]);
      goto LABEL_11;
    }
    v10 = (_QWORD *)(v15[21] + 8LL);
    v11 = *(_QWORD **)(v15[21] + 8LL);
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        if ( (v12[5] & 1) == 0 )
        {
          v13 = (_QWORD *)v12[1];
          if ( (_QWORD *)v11[1] != v12 || (_QWORD *)*v13 != v12 )
            __fastfail(3u);
          *v13 = v11;
          v11[1] = v13;
          v12[1] = 0LL;
          *v12 = 0LL;
          FsRtlFreeExtraCreateParameter(v12 + 8);
        }
      }
      while ( v11 != v10 );
    }
  }
LABEL_12:
  if ( LODWORD(v15[4]) == -1096154543 )
    return v15[2];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle[0], PreviousMode);
    return -1073741788;
  }
  return v7;
}
