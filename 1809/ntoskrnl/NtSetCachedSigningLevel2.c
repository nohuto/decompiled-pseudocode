/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x14089B2A0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x14089B270 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x1402EC5F8 (RtlUnicodeStringValidateEx.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140625B10 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        char a1,
        char a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r15
  SIZE_T v7; // rbx
  char v8; // si
  UNICODE_STRING *PoolWithTag; // r14
  char v10; // r12
  char PreviousMode; // r13
  int v12; // ebx
  _KPROCESS *Process; // rdx
  _KPROCESS *v14; // rcx
  char v15; // bl
  SIZE_T v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG v20; // edx
  __int64 v21; // rdx
  PCUNICODE_STRING SourceString[10]; // [rsp+58h] [rbp-50h] BYREF

  v6 = a4;
  v7 = (SIZE_T)a3;
  v8 = a1;
  PoolWithTag = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_14040DD88 )
  {
    v12 = -1073741823;
    goto LABEL_51;
  }
  if ( (a2 & 0x30) != 0 )
  {
LABEL_4:
    v12 = -1073741584;
    goto LABEL_51;
  }
  if ( a4 - 1 > 0xFFF )
    goto LABEL_50;
  if ( (a1 & 6) == 0 && a2 )
    goto LABEL_4;
  if ( (a1 & 3) == 3 )
  {
LABEL_9:
    v12 = -1073741585;
    goto LABEL_51;
  }
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) != 0 )
      goto LABEL_9;
    v8 = a1 | 1;
    if ( (a1 & 4) == 0 )
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
      if ( !qword_14040DDC0
        || (LOBYTE(Process) = Process[2].ActiveProcessors.Bitmap[0] & 0xF,
            LOBYTE(v14) = v15,
            !(unsigned int)qword_14040DDC0(v14, Process)) )
      {
        v10 = v15;
      }
      v7 = (SIZE_T)a3;
    }
  }
  else if ( (a1 & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (a1 & 2) == 0 )
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
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v16 + v7 > 0x7FFFFFFF0000LL || v16 + v7 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v17 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v17 = a6;
  }
  memmove(PoolWithTag, a3, v16);
  if ( !v17 )
    goto LABEL_45;
  if ( *(_DWORD *)v17 < 0x18u )
  {
    v12 = -1073741580;
    goto LABEL_51;
  }
  if ( !*(_WORD *)(v17 + 8)
    || (v12 = SepCaptureUnicodeStringArray(v17 + 8, 1u, PreviousMode, (SIZE_T *)SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v20), v12 >= 0) )
  {
LABEL_45:
    v21 = a4;
    if ( (v8 & 6) == 0 )
      goto LABEL_49;
    if ( a4 == 1 )
    {
      if ( a5 != *(_QWORD *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_51;
      }
LABEL_49:
      LOBYTE(v19) = v10;
      LOBYTE(v18) = a2;
      LOBYTE(v21) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_14040DD88)(
              v8 & 7,
              v21,
              v18,
              v19,
              PoolWithTag,
              a4,
              a5,
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
  return (unsigned int)v12;
}
