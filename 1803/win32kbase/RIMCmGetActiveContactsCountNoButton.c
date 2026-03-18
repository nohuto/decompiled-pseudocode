/*
 * XREFs of RIMCmGetActiveContactsCountNoButton @ 0x1C0106CA0
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimFindOrCreateActiveContact @ 0x1C010263C (rimFindOrCreateActiveContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetActiveContactsCountNoButton(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 912);
  if ( *(_DWORD *)(a1 + 24) == 7 )
    v2 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 872) + 32LL), 2);
  else
    v2 = 0;
  result = v1 - 1;
  if ( !v2 )
    return v1;
  return result;
}
