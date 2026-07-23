/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1406BFCE0
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140650344 (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140131C70 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int v5; // esi
  PVOID v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v10; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v7 = Object;
  if ( qword_14040EE30 )
    return (unsigned int)((__int64 (__fastcall *)(PVOID))qword_14040EE30)(Object);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !a3 )
  {
    *a5 = 2;
    return v5;
  }
  if ( a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return v5;
    }
  }
  else if ( !a3 )
  {
LABEL_31:
    *a5 = a3;
    return v5;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_31;
  if ( qword_14040EE00 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(Object) = a4;
    if ( (unsigned int)qword_14040EE00(Object, a2) )
      goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 || a3 != 6 )
    goto LABEL_31;
  if ( (Process[2].UserTime & 0x800000) != 0 )
    goto LABEL_18;
  if ( !qword_14040EDF8 )
    return (unsigned int)-1073741823;
  v5 = qword_14040EDF8(v7, &v12, &v13);
  if ( (v5 & 0x80000000) != 0 )
    return v5;
  if ( v12 || v13 )
    goto LABEL_18;
  v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
  if ( (v5 & 0x80000000) != 0 )
    return v5;
  if ( IsUntrustedObject[0] )
  {
LABEL_18:
    *a5 = 6;
  }
  else if ( (unsigned __int8)v8 < 2u )
  {
    *a5 = 0;
  }
  else
  {
    v10 = 9;
    if ( v8 != 2 )
      v10 = 6;
    *a5 = v10;
  }
  return v5;
}
