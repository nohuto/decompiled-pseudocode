/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x1406420EC
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x14063EC50 (NtQueryWnfStateNameInformation.c)
 *     NtUpdateWnfStateData @ 0x140641450 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140641CA0 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1407851A0 (NtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
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
