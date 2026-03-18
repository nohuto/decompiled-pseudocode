/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1406F0E00
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1406F0DD0 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x14030A964 (RtlUnicodeStringValidateEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x1406674B0 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  SIZE_T v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  ULONG v17; // edx
  __int64 v18; // rdx
  _KPROCESS *Process; // rdx
  _KPROCESS *v21; // rcx
  char v22; // bl
  PCUNICODE_STRING SourceString[10]; // [rsp+58h] [rbp-50h] BYREF

  v6 = a4;
  v7 = (SIZE_T)a3;
  v8 = a1;
  PoolWithTag = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140436408 )
  {
    v16 = -1073741823;
    goto LABEL_36;
  }
  if ( (a2 & 0x30) != 0 )
    goto LABEL_43;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_59;
  if ( (a1 & 6) == 0 && a2 )
  {
LABEL_43:
    v16 = -1073741584;
    goto LABEL_36;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_46;
  if ( PreviousMode != 1 )
  {
    if ( (a1 & 1) != 0 )
    {
      v10 = 15;
      goto LABEL_9;
    }
    if ( (a1 & 2) != 0 )
    {
      v10 = 8;
      goto LABEL_9;
    }
LABEL_46:
    v16 = -1073741585;
    goto LABEL_36;
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_46;
  v8 = a1 | 1;
  if ( (a1 & 4) == 0 )
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
    if ( !qword_140436440
      || (LOBYTE(Process) = Process[2].ActiveProcessors.Bitmap[4] & 0xF,
          LOBYTE(v21) = v22,
          !(unsigned int)qword_140436440(v21, Process)) )
    {
      v10 = v22;
    }
    v7 = (SIZE_T)a3;
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
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v12 + v7 > 0x7FFFFFFF0000LL || v12 + v7 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v13 = a6;
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
    v13 = a6;
  }
  memmove(PoolWithTag, a3, v12);
  if ( !v13 )
    goto LABEL_32;
  if ( *(_DWORD *)v13 >= 0x18u )
  {
    if ( !*(_WORD *)(v13 + 8)
      || (v16 = SepCaptureUnicodeStringArray(v13 + 8, 1u, PreviousMode, SourceString), v16 >= 0)
      && (v16 = RtlUnicodeStringValidateEx(SourceString[0], v17), v16 >= 0) )
    {
LABEL_32:
      v18 = a4;
      if ( (v8 & 6) == 0 )
      {
LABEL_35:
        LOBYTE(v15) = v10;
        LOBYTE(v14) = a2;
        LOBYTE(v18) = PreviousMode;
        v16 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_140436408)(
                v8 & 7,
                v18,
                v14,
                v15,
                PoolWithTag,
                a4,
                a5,
                SourceString[0]);
        goto LABEL_36;
      }
      if ( a4 == 1 )
      {
        if ( a5 != *(_QWORD *)&PoolWithTag->Length )
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
  return (unsigned int)v16;
}
