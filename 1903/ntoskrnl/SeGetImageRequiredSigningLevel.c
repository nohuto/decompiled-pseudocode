/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1406E2AC8
 * Callers:
 *     MiValidateExistingImage @ 0x14066EF50 (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1401340C0 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     SepRegQueryDwordValue @ 0x14061A8B0 (SepRegQueryDwordValue.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, unsigned int a2, char a3, char a4, char *a5)
{
  char v5; // bl
  unsigned int IsUntrustedObject; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _KPROCESS *Process; // rcx
  char v16; // cl
  char v18; // [rsp+30h] [rbp-10h] BYREF
  char v19; // [rsp+31h] [rbp-Fh] BYREF
  char v20[2]; // [rsp+32h] [rbp-Eh] BYREF
  int v21[3]; // [rsp+34h] [rbp-Ch] BYREF

  v5 = SeILSigningPolicy;
  IsUntrustedObject = 0;
  v21[0] = 0;
  if ( !SeILSigningPolicy )
    v5 = SeILSigningPolicyRuntime;
  SepRegQueryDwordValue(
    L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Control\\CI",
    (__int64)L"Disable26178932",
    v21);
  if ( qword_1404364F0 )
  {
    LOBYTE(v14) = a4;
    LOBYTE(v13) = a3;
    return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *))qword_1404364F0)(
                           a1,
                           a2,
                           v13,
                           v14,
                           a5);
  }
  if ( !v21[0] )
  {
    v5 = SeILSigningPolicy;
    if ( !SeILSigningPolicy )
      v5 = SeILSigningPolicyRuntime;
    if ( v5 == 2 && !a3 )
    {
      *a5 = 2;
      return IsUntrustedObject;
    }
    if ( a3 == 2 )
    {
      if ( !v5 )
      {
        *a5 = 0;
        return IsUntrustedObject;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_18;
    }
    if ( (a2 & 0x10) == 0 )
      goto LABEL_16;
LABEL_18:
    *a5 = a3;
    return IsUntrustedObject;
  }
LABEL_16:
  if ( qword_1404364C0 )
  {
    LOBYTE(v11) = a3;
    LOBYTE(v12) = a4;
    if ( (unsigned int)qword_1404364C0(v12, v11) )
      goto LABEL_18;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x70000) != 0 || a3 != 6 )
    goto LABEL_18;
  if ( (*(_DWORD *)&Process[2].Spare2[7] & 0x800000) != 0 )
    goto LABEL_37;
  if ( !qword_1404364B8 )
    return (unsigned int)-1073741823;
  IsUntrustedObject = qword_1404364B8(a1, &v18, &v19);
  if ( (IsUntrustedObject & 0x80000000) != 0 )
    return IsUntrustedObject;
  if ( v18 || v19 )
    goto LABEL_37;
  IsUntrustedObject = RtlIsUntrustedObject(0LL, a1, v20);
  if ( (IsUntrustedObject & 0x80000000) != 0 )
    return IsUntrustedObject;
  if ( v20[0] )
  {
LABEL_37:
    *a5 = 6;
    return IsUntrustedObject;
  }
  if ( v21[0] )
  {
    v5 = SeILSigningPolicy;
    if ( !SeILSigningPolicy )
      v5 = SeILSigningPolicyRuntime;
  }
  if ( (unsigned __int8)v5 < 2u )
  {
    *a5 = 0;
  }
  else
  {
    v16 = 9;
    if ( v5 != 2 )
      v16 = 6;
    *a5 = v16;
  }
  return IsUntrustedObject;
}
