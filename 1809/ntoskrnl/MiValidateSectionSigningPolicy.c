/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x140650600
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140650344 (MiValidateExistingImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BE27C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11)
{
  _KPROCESS *Process; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // [rsp+20h] [rbp-38h]

  if ( a1 >= 2 )
    return 3221225485LL;
  if ( !a7 && !a8 )
    return 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v18 = MiValidateSectionCreate(a2, a3, a4, a5, a6, a10, a11);
  if ( v18 < 0 && a1 == 1 )
    dword_140439EB0 = 60;
  if ( a7 == 1 && v18 < 0 )
  {
    if ( v18 != -1073740760 || a9 != 1 )
      return (unsigned int)v18;
    LOBYTE(v19) = a10;
    v22 = a2 + 88;
    v21 = 2;
LABEL_19:
    LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    EtwTimLogProhibitNonMicrosoftBinaries(v21, (_DWORD)Process, v19, v20, v22);
    return (unsigned int)v18;
  }
  if ( a8 == 1 )
  {
    if ( v18 < 0 )
      return 0;
    if ( qword_14040EE00 )
    {
      LOBYTE(v16) = a11;
      LOBYTE(v17) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( (unsigned int)qword_14040EE00(v17, v16) )
        return (unsigned int)v18;
    }
    LOBYTE(v19) = a11;
    v22 = a2 + 88;
    v21 = 1;
    goto LABEL_19;
  }
  return (unsigned int)v18;
}
