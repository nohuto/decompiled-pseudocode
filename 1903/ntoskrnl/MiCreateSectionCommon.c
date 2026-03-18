/*
 * XREFs of MiCreateSectionCommon @ 0x1405D6500
 * Callers:
 *     NtCreateSection @ 0x1405D6430 (NtCreateSection.c)
 *     NtCreateSectionEx @ 0x14088A9B0 (NtCreateSectionEx.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     CcZeroEndOfLastPage @ 0x140009CBC (CcZeroEndOfLastPage.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1405D649C (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCreateSection @ 0x1405D6FB0 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *Address,
        unsigned int a9,
        int a10)
{
  BOOL v11; // edx
  char PreviousMode; // si
  char v13; // r8
  __int64 result; // rax
  _KPROCESS *Process; // r15
  PACCESS_TOKEN v16; // r14
  int SessionId; // r12d
  int Section; // r15d
  PVOID v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  struct _FILE_OBJECT *v22; // rbx
  int v23; // eax
  __int64 v24; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v26; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v27[10]; // [rsp+88h] [rbp-50h] BYREF
  _QWORD *v28; // [rsp+E0h] [rbp+8h]
  char v30; // [rsp+108h] [rbp+30h]

  v28 = (_QWORD *)a1;
  v27[0] = 0LL;
  v27[1] = 0LL;
  LODWORD(v24) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  v11 = (a6 & 0x2100000) != 0 && (a6 & 0x1100000) != 0x1100000;
  if ( (a6 & 0x2083FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v23 = -872153088;
    if ( (a6 & 0x2100000) == 0 )
      v23 = -867958784;
    if ( (v23 & a6) != 0 )
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
      v24 = *a4;
    goto LABEL_18;
  }
  if ( v11 )
    return 3221225716LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = *a4;
  }
LABEL_18:
  if ( a10 )
    v13 = 0;
  else
    v13 = PreviousMode;
  result = MiCaptureSectionCreateExtendedParameters(Address, a9, v13, (__int64)v27);
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode == 1 )
    {
      v30 = BYTE1(Process[2].ActiveProcessors.Bitmap[4]);
      v16 = PsReferencePrimaryToken(Process);
    }
    else
    {
      v30 = 0;
      v16 = 0LL;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&Object,
                  a3,
                  v24,
                  a5,
                  a6,
                  0,
                  (__int64)v16,
                  v30,
                  a7,
                  0LL,
                  PreviousMode,
                  SessionId,
                  (__int64)v27);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v16 )
      ObfDereferenceObject(v16);
    if ( Section < 0 )
    {
      return (unsigned int)Section;
    }
    else
    {
      v19 = Object;
      v20 = MiSectionControlArea((__int64)Object);
      v21 = v20;
      if ( v20 && *(_QWORD *)(v20 + 64) )
      {
        v22 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v20);
        CcZeroEndOfLastPage(v22);
        MiDereferenceControlAreaFile(v21, (unsigned __int64)v22);
      }
      result = ObInsertObjectEx(v19, 0LL, 0, 0LL, (__int64)&v26);
      if ( (int)result >= 0 )
        *v28 = v26;
    }
  }
  return result;
}
