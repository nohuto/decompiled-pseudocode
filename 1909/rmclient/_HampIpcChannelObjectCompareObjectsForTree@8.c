/*
 * XREFs of _HampIpcChannelObjectCompareObjectsForTree@8 @ 0x1000AFE0
 * Callers:
 *     _HamIpcChannelAddCallback@4 @ 0x100072A0 (_HamIpcChannelAddCallback@4.c)
 *     _HamCreateActivityEx@24 @ 0x1000ADC0 (_HamCreateActivityEx@24.c)
 *     _RmpClientAcquireResourceSet@36 @ 0x100114D8 (_RmpClientAcquireResourceSet@36.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall HampIpcChannelObjectCompareObjectsForTree(_DWORD *a1, int a2)
{
  int (__stdcall *v2)(int, int); // esi
  unsigned int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax

  v2 = *(int (__stdcall **)(int, int))(a1[5] + 36);
  if ( v2 != HampConnectionObjectCompareToObject )
    return ((int (__thiscall *)(int (__stdcall *)(int, int), _DWORD *, int))v2)(v2, a1, a2);
  v3 = *(_DWORD *)(a2 + 28);
  v4 = *(_DWORD *)(a2 + 24);
  v5 = a1[6];
  v6 = a1[7];
  if ( v6 > v3 )
    return 1;
  if ( v6 < v3 || v5 < v4 )
    return -1;
  return __PAIR64__(v6, v5) > __PAIR64__(v3, v4);
}
