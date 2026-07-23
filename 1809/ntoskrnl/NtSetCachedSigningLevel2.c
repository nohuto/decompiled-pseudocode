/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x14089C4E0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x14089C4B0 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x1402EC8E8 (RtlUnicodeStringValidateEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140626B30 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  __int64 v6; // r15
  PHANDLE v7; // rbx
  char v8; // si
  UNICODE_STRING *PoolWithTag; // r14
  char v10; // r12
  char PreviousMode; // r13
  NTSTATUS v12; // ebx
  _KPROCESS *Process; // rdx
  _KPROCESS *v14; // rcx
  char v15; // bl
  SIZE_T v16; // r15
  SE_SET_FILE_CACHE_INFORMATION *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG v20; // edx
  __int64 v21; // rdx
  PCUNICODE_STRING SourceString[10]; // [rsp+58h] [rbp-50h] BYREF

  v6 = SourceFileCount;
  v7 = SourceFiles;
  v8 = Flags;
  PoolWithTag = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_14040EDC8 )
  {
    v12 = -1073741823;
    goto LABEL_51;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
  {
LABEL_4:
    v12 = -1073741584;
    goto LABEL_51;
  }
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_50;
  if ( (Flags & 6) == 0 && InputSigningLevel )
    goto LABEL_4;
  if ( (Flags & 3) == 3 )
  {
LABEL_9:
    v12 = -1073741585;
    goto LABEL_51;
  }
  if ( PreviousMode == 1 )
  {
    if ( (Flags & 2) != 0 )
      goto LABEL_9;
    v8 = Flags | 1;
    if ( (Flags & 4) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v14 = Process;
      if ( (BYTE2(Process[2].ActiveProcessors.Bitmap[0]) & 7) != 1 )
      {
        v12 = -1073741790;
        goto LABEL_51;
      }
      v10 = Process[2].ActiveProcessors.Bitmap[0] & 0xF;
      v15 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]) & 0xF;
      if ( !qword_14040EE00
        || (LOBYTE(Process) = Process[2].ActiveProcessors.Bitmap[0] & 0xF,
            LOBYTE(v14) = v15,
            !(unsigned int)qword_14040EE00(v14, Process)) )
      {
        v10 = v15;
      }
      v7 = SourceFiles;
    }
  }
  else if ( (Flags & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (Flags & 2) == 0 )
      goto LABEL_9;
    v10 = 8;
  }
  v16 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v16, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_51;
  }
  if ( PreviousMode == 1 )
  {
    if ( v16 )
    {
      if ( ((unsigned __int8)v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v16 / 8] > 0x7FFFFFFF0000LL || &v7[v16 / 8] < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v17 = CacheInformation;
    if ( CacheInformation )
    {
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&CacheInformation->OriginClaimInfo > 0x7FFFFFFF0000LL
        || &CacheInformation->OriginClaimInfo < (SE_FILE_CACHE_CLAIM_INFORMATION *)CacheInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v17 = CacheInformation;
  }
  memmove(PoolWithTag, SourceFiles, v16);
  if ( !v17 )
    goto LABEL_45;
  if ( v17->Size < 0x18 )
  {
    v12 = -1073741580;
    goto LABEL_51;
  }
  if ( !v17->CatalogDirectoryPath.Length
    || (v12 = SepCaptureUnicodeStringArray((SIZE_T)&v17->CatalogDirectoryPath, 1u, PreviousMode, (SIZE_T *)SourceString),
        v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v20), v12 >= 0) )
  {
LABEL_45:
    v21 = SourceFileCount;
    if ( (v8 & 6) == 0 )
      goto LABEL_49;
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile != *(HANDLE *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_51;
      }
LABEL_49:
      LOBYTE(v19) = v10;
      LOBYTE(v18) = InputSigningLevel;
      LOBYTE(v21) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, ULONG, HANDLE, PCUNICODE_STRING))qword_14040EDC8)(
              v8 & 7,
              v21,
              v18,
              v19,
              PoolWithTag,
              SourceFileCount,
              TargetFile,
              SourceString[0]);
      goto LABEL_51;
    }
LABEL_50:
    v12 = -1073741582;
  }
LABEL_51:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v12;
}
