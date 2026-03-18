/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x14066F2D8
 * Callers:
 *     MiValidateExistingImage @ 0x14066EF50 (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     MiRegQueryDWORD @ 0x1405B0C14 (MiRegQueryDWORD.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     SeCompareSigningLevels @ 0x140737430 (SeCompareSigningLevels.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408F9BCC (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        ULONG_PTR a2,
        _DWORD *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12)
{
  char v16; // r12
  _KPROCESS *Process; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 >= 2 )
    return 3221225485LL;
  if ( !a8 && !a9 )
    return 0LL;
  v16 = a11;
  Process = KeGetCurrentThread()->ApcState.Process;
  v20 = MiValidateSectionCreate(a2, a3, a4, a5, a7, a11, a12);
  if ( v20 < 0 )
  {
    v19 = (unsigned int)(a1 != 1) + 1;
    dword_140464818 = (a1 != 1) + 1;
  }
  if ( a8 == 1 )
  {
    v25 = 0;
    if ( (int)MiRegQueryDWORD(v19, v18, &v25) >= 0 && v25 )
    {
      if ( v20 < 0 )
        goto LABEL_17;
      LOBYTE(v18) = v16;
      LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( !(unsigned int)SeCompareSigningLevels(v19, v18)
        && (a6 || (Process[2].ActiveProcessors.Bitmap[4] & 0x80000) == 0) )
      {
        dword_140464818 = 3;
        v20 = -1073740760;
      }
    }
    if ( v20 < 0 )
    {
LABEL_17:
      if ( v20 != -1073740760 || a10 != 1 )
        return (unsigned int)v20;
      LOBYTE(v21) = v16;
      v24 = a2 + 88;
      v23 = 2;
LABEL_25:
      LOBYTE(v22) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      EtwTimLogProhibitNonMicrosoftBinaries(v23, (_DWORD)Process, v21, v22, v24);
      return (unsigned int)v20;
    }
  }
  if ( a9 == 1 )
  {
    if ( v20 < 0 )
      return 0;
    if ( qword_1404364C0 )
    {
      LOBYTE(v18) = a12;
      LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( (unsigned int)qword_1404364C0(v19, v18) )
        return (unsigned int)v20;
    }
    LOBYTE(v21) = a12;
    v24 = a2 + 88;
    v23 = 1;
    goto LABEL_25;
  }
  return (unsigned int)v20;
}
