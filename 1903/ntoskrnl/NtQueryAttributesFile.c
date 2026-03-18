/*
 * XREFs of NtQueryAttributesFile @ 0x1406B1910
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140617E20 (FsRtlFreeExtraCreateParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // r14
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // r12d
  __int64 v8; // r13
  int v9; // ecx
  __int64 **v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r15
  __int64 v14; // r14
  void (__fastcall *v15)(_QWORD *, _QWORD *); // rax
  __int64 v16; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // rdx
  __int64 **v20; // rax
  char v21; // [rsp+40h] [rbp-278h]
  HANDLE Handle; // [rsp+48h] [rbp-270h] BYREF
  _QWORD v23[28]; // [rsp+50h] [rbp-268h] BYREF
  _QWORD v24[8]; // [rsp+130h] [rbp-188h] BYREF
  _BYTE v25[272]; // [rsp+170h] [rbp-148h] BYREF

  memset(v25, 0, sizeof(v25));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = PreviousMode;
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
  memset(v23, 0, 0xD8uLL);
  memset(v24, 0, 56);
  LODWORD(v23[0]) = 14155784;
  HIWORD(v23[8]) = 7;
  LODWORD(v23[11]) = 1;
  LODWORD(v23[8]) = 2113536;
  v23[12] = FileInformation;
  v23[13] = v24;
  BYTE1(v23[17]) = 1;
  v23[18] = v25;
  v23[6] = ObjectAttributes;
  LODWORD(v23[19]) = 32;
  v23[20] = 40LL;
  memset(&v23[21], 0, 24);
  v23[24] = 1LL;
  v23[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v23,
         v23[24],
         &Handle);
  v8 = v23[21];
  if ( v23[21] )
  {
    v9 = *(_DWORD *)(v23[21] + 4LL);
    if ( (v9 & 0x3F0) != 0 )
    {
      *(_DWORD *)(v23[21] + 4LL) = v9 - 16;
LABEL_34:
      v23[21] = 0LL;
      goto LABEL_35;
    }
    v10 = (__int64 **)(v23[21] + 8LL);
    if ( (v9 & 1) == 0 )
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 == (__int64 *)v10 )
          break;
        v12 = *v11;
        if ( (__int64 **)v11[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
          __fastfail(3u);
        *v10 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v10;
        v11[1] = 0LL;
        *v11 = 0LL;
        v13 = v11 + 8;
        v14 = 0LL;
        v15 = (void (__fastcall *)(_QWORD *, _QWORD *))v11[4];
        if ( v15 )
          v15(v13, v13 - 6);
        if ( (*(_DWORD *)(v13 - 3) & 0x20) != 0 && FltMgrCallbacks )
        {
          v14 = *(v13 - 1);
          (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v14, v13);
        }
        v16 = *(v13 - 2);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v13 - 3) & 0x40) != 0 )
          {
            ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v16, v13 - 9);
          }
          else
          {
            ++*(_DWORD *)(v16 + 28);
            if ( *(_WORD *)v16 < *(_WORD *)(v16 + 16) )
            {
              RtlpInterlockedPushEntrySList((PSLIST_HEADER)v16, (PSLIST_ENTRY)(v13 - 9));
            }
            else
            {
              ++*(_DWORD *)(v16 + 32);
              (*(void (__fastcall **)(_QWORD *))(v16 + 56))(v13 - 9);
            }
          }
        }
        else
        {
          ExFreePoolWithTag(v13 - 9, 0);
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v14);
      }
      if ( (*(_DWORD *)(v8 + 4) & 4) != 0 )
      {
        ++dword_1404F2C9C;
        if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_1404F2C90 )
        {
          RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v8);
        }
        else
        {
          ++dword_1404F2CA0;
          ((void (__fastcall *)(__int64))qword_1404F2CB8)(v8);
        }
      }
      else
      {
        ExFreePoolWithTag((PVOID)v8, 0);
      }
      PreviousMode = v21;
      goto LABEL_34;
    }
    v18 = *v10;
    while ( v18 != (__int64 *)v10 )
    {
      v19 = v18;
      v18 = (__int64 *)*v18;
      if ( (v19[5] & 1) == 0 )
      {
        v20 = (__int64 **)v19[1];
        if ( (__int64 *)v18[1] != v19 || *v20 != v19 )
          __fastfail(3u);
        *v20 = v18;
        v18[1] = (__int64)v20;
        v19[1] = 0LL;
        *v19 = 0LL;
        FsRtlFreeExtraCreateParameter(v19 + 8);
      }
    }
  }
LABEL_35:
  if ( LODWORD(v23[4]) == -1096154543 )
    return v23[2];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle, PreviousMode);
    return -1073741788;
  }
  return v7;
}
