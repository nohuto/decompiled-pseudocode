/*
 * XREFs of PiDevCfgQueryPolicyEnabled @ 0x14082E498
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x140701624 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406804D4 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyEnabled(void *a1, const WCHAR *a2, bool *a3)
{
  int v4; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v6; // rcx
  unsigned int v7; // edi
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  v4 = 0;
  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &P);
  v6 = P;
  v7 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v4 == 1;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
