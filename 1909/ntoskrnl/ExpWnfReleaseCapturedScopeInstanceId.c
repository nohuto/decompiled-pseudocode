/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x140655C3C
 * Callers:
 *     NtUpdateWnfStateData @ 0x140654FA0 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1406557F0 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406D69C0 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x140787500 (NtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     SeReleaseSid @ 0x140658B6C (SeReleaseSid.c)
 */

__int64 __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3, __int64 a4)
{
  int v4; // ecx
  int v5; // ecx
  PVOID v6; // rcx
  __int64 result; // rax

  LOBYTE(a4) = a3;
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( *a2 )
          return ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else
    {
      v6 = *a2;
      if ( *a2 )
      {
        LOBYTE(a2) = a3;
        return SeReleaseSid(v6, a2, 0LL, a4);
      }
    }
  }
  else if ( *a2 )
  {
    return ObfDereferenceObject(*a2);
  }
  return result;
}
