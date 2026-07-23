/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1406EF1B0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1406EF180 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x14030AEB4 (RtlUnicodeStringValidateEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x1406543B0 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  SIZE_T v12; // r15
  SE_SET_FILE_CACHE_INFORMATION *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // ebx
  ULONG v17; // edx
  __int64 v18; // rdx
  _KPROCESS *Process; // rdx
  _KPROCESS *v21; // rcx
  char v22; // bl
  PCUNICODE_STRING SourceString[10]; // [rsp+58h] [rbp-50h] BYREF

  v6 = SourceFileCount;
  v7 = SourceFiles;
  v8 = Flags;
  PoolWithTag = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140436488 )
  {
    v16 = -1073741823;
    goto LABEL_36;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_43;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_59;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_43:
    v16 = -1073741584;
    goto LABEL_36;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_46;
  if ( PreviousMode != 1 )
  {
    if ( (Flags & 1) != 0 )
    {
      v10 = 15;
      goto LABEL_9;
    }
    if ( (Flags & 2) != 0 )
    {
      v10 = 8;
      goto LABEL_9;
    }
LABEL_46:
    v16 = -1073741585;
    goto LABEL_36;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_46;
  v8 = Flags | 1;
  if ( (Flags & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v21 = Process;
    if ( (BYTE2(Process[2].ActiveProcessors.Bitmap[4]) & 7) != 1 )
    {
      v16 = -1073741790;
      goto LABEL_36;
    }
    v10 = Process[2].ActiveProcessors.Bitmap[4] & 0xF;
    v22 = BYTE1(Process[2].ActiveProcessors.Bitmap[4]) & 0xF;
    if ( !qword_1404364C0
      || (LOBYTE(Process) = Process[2].ActiveProcessors.Bitmap[4] & 0xF,
          LOBYTE(v21) = v22,
          !(unsigned int)qword_1404364C0(v21, Process)) )
    {
      v10 = v22;
    }
    v7 = SourceFiles;
  }
LABEL_9:
  v12 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v12, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = -1073741670;
    goto LABEL_36;
  }
  if ( PreviousMode == 1 )
  {
    if ( v12 )
    {
      if ( ((unsigned __int8)v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v12 / 8] > 0x7FFFFFFF0000LL || &v7[v12 / 8] < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v13 = CacheInformation;
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
    v13 = CacheInformation;
  }
  memmove(PoolWithTag, SourceFiles, v12);
  if ( !v13 )
    goto LABEL_32;
  if ( v13->Size >= 0x18 )
  {
    if ( !v13->CatalogDirectoryPath.Length
      || (v16 = SepCaptureUnicodeStringArray((__int64)&v13->CatalogDirectoryPath, 1u, PreviousMode, SourceString),
          v16 >= 0)
      && (v16 = RtlUnicodeStringValidateEx(SourceString[0], v17), v16 >= 0) )
    {
LABEL_32:
      v18 = SourceFileCount;
      if ( (v8 & 6) == 0 )
      {
LABEL_35:
        LOBYTE(v15) = v10;
        LOBYTE(v14) = InputSigningLevel;
        LOBYTE(v18) = PreviousMode;
        v16 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, ULONG, HANDLE, PCUNICODE_STRING))qword_140436488)(
                v8 & 7,
                v18,
                v14,
                v15,
                PoolWithTag,
                SourceFileCount,
                TargetFile,
                SourceString[0]);
        goto LABEL_36;
      }
      if ( SourceFileCount == 1 )
      {
        if ( TargetFile != *(HANDLE *)&PoolWithTag->Length )
        {
          v16 = -1073741581;
          goto LABEL_36;
        }
        goto LABEL_35;
      }
LABEL_59:
      v16 = -1073741582;
    }
  }
  else
  {
    v16 = -1073741580;
  }
LABEL_36:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v16;
}
