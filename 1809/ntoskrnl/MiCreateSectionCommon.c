/*
 * XREFs of MiCreateSectionCommon @ 0x1405DE7A0
 * Callers:
 *     NtCreateSection @ 0x1405DE740 (NtCreateSection.c)
 *     NtCreateSectionEx @ 0x14084FB20 (NtCreateSectionEx.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1405DF780 (MiCaptureSectionCreateExtendedParameters.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address)
{
  BOOL v9; // edx
  char PreviousMode; // si
  __int64 result; // rax
  _KPROCESS *Process; // r15
  PACCESS_TOKEN v13; // r14
  int SessionId; // r12d
  int Section; // r15d
  PVOID v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  struct _FILE_OBJECT *v19; // rbx
  int v20; // eax
  __int64 v21; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v23; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v24[80]; // [rsp+88h] [rbp-50h] BYREF
  _QWORD *v25; // [rsp+E0h] [rbp+8h]
  char v27; // [rsp+108h] [rbp+30h]

  v25 = (_QWORD *)a1;
  LODWORD(v21) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  v9 = (a6 & 0x2100000) != 0 && (a6 & 0x1100000) != 0x1100000;
  if ( (a6 & 0x2083FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v20 = -872153088;
    if ( (a6 & 0x2100000) == 0 )
      v20 = -867958784;
    if ( (v20 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 || (a6 & 0x80080000) == 0x80080000 )
    return 3221225716LL;
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a4 )
      v21 = *a4;
    goto LABEL_18;
  }
  if ( v9 )
    return 3221225716LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = *a4;
  }
LABEL_18:
  result = MiCaptureSectionCreateExtendedParameters(Address);
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode == 1 )
    {
      v27 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
      v13 = PsReferencePrimaryToken(Process);
    }
    else
    {
      v13 = 0LL;
      v27 = 0;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&Object,
                  a3,
                  v21,
                  a5,
                  a6,
                  0,
                  (__int64)v13,
                  v27,
                  a7,
                  0LL,
                  PreviousMode,
                  SessionId,
                  (__int64)v24);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    if ( Section < 0 )
    {
      return (unsigned int)Section;
    }
    else
    {
      v16 = Object;
      v17 = MiSectionControlArea((__int64)Object);
      v18 = v17;
      if ( v17 && *(_QWORD *)(v17 + 64) )
      {
        v19 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v17);
        CcZeroEndOfLastPage(v19);
        MiDereferenceControlAreaFile(v18, (unsigned __int64)v19);
      }
      result = ObInsertObjectEx(v16, 0LL, 0, 0LL, (__int64)&v23);
      if ( (int)result >= 0 )
        *v25 = v23;
    }
  }
  return result;
}
