/*
 * XREFs of _HampIpcChannelObjectComparePayloadForTree@8 @ 0x1000AD60
 * Callers:
 *     _RmpClientWnfMessageQueueWorker@12 @ 0x10006350 (_RmpClientWnfMessageQueueWorker@12.c)
 *     _HamIpcChannelObjectMakeZombie@8 @ 0x10007E30 (_HamIpcChannelObjectMakeZombie@8.c)
 *     _HamCloseActivity@12 @ 0x1000A970 (_HamCloseActivity@12.c)
 *     _HampIpcChannelWnfCallback@12 @ 0x1000AB50 (_HampIpcChannelWnfCallback@12.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall HampIpcChannelObjectComparePayloadForTree(unsigned int *a1, _DWORD *a2)
{
  int (__stdcall *v2)(unsigned int *, int); // esi
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax

  v2 = *(int (__stdcall **)(unsigned int *, int))(a2[5] + 40);
  if ( v2 != HampConnectionObjectCompareToMessage )
    return ((int (__thiscall *)(int (__stdcall *)(unsigned int *, int), unsigned int *, _DWORD *))v2)(v2, a1, a2);
  v3 = a2[7];
  v4 = a2[6];
  v5 = *a1;
  v6 = a1[1];
  if ( v6 > v3 )
    return 1;
  if ( v6 >= v3 && v5 >= v4 )
    return __PAIR64__(v6, v5) > __PAIR64__(v3, v4);
  return -1;
}
