/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x140610814
 * Callers:
 *     NtUpdateWnfStateData @ 0x14060FBB0 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1406103C0 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406B6170 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14075F710 (NtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 */

__int64 __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx
  PVOID v5; // rcx
  __int64 result; // rax

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          return ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else
    {
      v5 = *a2;
      if ( *a2 )
      {
        LOBYTE(a2) = a3;
        return SeReleaseSid(v5, a2, 0LL);
      }
    }
  }
  else if ( *a2 )
  {
    return ObfDereferenceObject(*a2);
  }
  return result;
}
