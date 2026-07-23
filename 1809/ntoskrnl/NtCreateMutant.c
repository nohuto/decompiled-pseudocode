/*
 * XREFs of NtCreateMutant @ 0x14065C580
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x1400DD3E0 (KeInitializeMutant.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  int v5; // r10d
  char PreviousMode; // di
  __int64 v9; // r8
  NTSTATUS inserted; // ecx
  __int64 v12; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v5 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)MutantHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  inserted = ObCreateObjectEx(PreviousMode, ExMutantObjectType, v5, PreviousMode, v12, 56, 0, 0, &Mutant, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutant(Mutant, InitialOwner);
    inserted = ObInsertObjectEx(Mutant, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v14);
    LODWORD(Mutant) = inserted;
    if ( inserted >= 0 )
      *MutantHandle = (HANDLE)v14;
  }
  return inserted;
}
