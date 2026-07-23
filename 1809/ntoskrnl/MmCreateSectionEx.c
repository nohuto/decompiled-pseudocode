/*
 * XREFs of MmCreateSectionEx @ 0x14061C34C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140092480 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSection @ 0x14061C2D0 (MmCreateSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1405DF780 (MiCaptureSectionCreateExtendedParameters.c)
 */

__int64 __fastcall MmCreateSectionEx(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        _QWORD *Address,
        unsigned int a10)
{
  __int64 result; // rax
  _KPROCESS *Process; // rbp
  char PreviousMode; // r14
  char v15; // r15
  PACCESS_TOKEN v16; // rsi
  int SessionId; // eax
  int v18; // edx
  unsigned int Section; // ebx
  _BYTE v20[72]; // [rsp+70h] [rbp-48h] BYREF

  result = MiCaptureSectionCreateExtendedParameters(Address, a10, 0, (__int64)v20);
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v15 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
      v16 = PsReferencePrimaryToken(Process);
    }
    else
    {
      v16 = 0LL;
      v15 = 0;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    v18 = (a7 != 0 ? 2 : 0) | 4;
    if ( (a8 & 2) == 0 )
      v18 = a7 != 0 ? 2 : 0;
    Section = MiCreateSection(a1, a2, a3, a4, a5, v18, (__int64)v16, v15, a6, a7, PreviousMode, SessionId, (__int64)v20);
    if ( v16 )
      ObfDereferenceObject(v16);
    return Section;
  }
  return result;
}
