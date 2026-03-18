/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1406BEA60
 * Callers:
 *     MiCreateNewSection @ 0x14061B7E0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14064F1A4 (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140131B80 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int IsUntrustedObject; // esi
  __int64 v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v10; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  char v14[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v7 = a1;
  if ( qword_14040DDF0 )
    return (unsigned int)((__int64 (__fastcall *)(__int64))qword_14040DDF0)(a1);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !a3 )
  {
    *a5 = 2;
    return IsUntrustedObject;
  }
  if ( a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return IsUntrustedObject;
    }
  }
  else if ( !a3 )
  {
LABEL_31:
    *a5 = a3;
    return IsUntrustedObject;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_31;
  if ( qword_14040DDC0 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = a4;
    if ( (unsigned int)qword_14040DDC0(a1, a2) )
      goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 || a3 != 6 )
    goto LABEL_31;
  if ( (Process[2].UserTime & 0x800000) != 0 )
    goto LABEL_18;
  if ( !qword_14040DDB8 )
    return (unsigned int)-1073741823;
  IsUntrustedObject = qword_14040DDB8(v7, &v12, &v13);
  if ( (IsUntrustedObject & 0x80000000) != 0 )
    return IsUntrustedObject;
  if ( v12 || v13 )
    goto LABEL_18;
  IsUntrustedObject = RtlIsUntrustedObject(0LL, v7, v14);
  if ( (IsUntrustedObject & 0x80000000) != 0 )
    return IsUntrustedObject;
  if ( v14[0] )
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
  return IsUntrustedObject;
}
