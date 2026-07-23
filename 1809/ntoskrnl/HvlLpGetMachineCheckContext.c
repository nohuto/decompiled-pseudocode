/*
 * XREFs of HvlLpGetMachineCheckContext @ 0x140274590
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLogicalProcessorProperty @ 0x140272068 (HvlpGetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlLpGetMachineCheckContext(int a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // [rsp+20h] [rbp-CC8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-CC0h]
  int v10; // [rsp+30h] [rbp-CB8h]

  if ( (int)HvlpGetLogicalProcessorProperty(a1, 4, &v8) < 0 )
    return 3221225473LL;
  *a2 = v8;
  *a3 = v9;
  *a4 = v10;
  return 0LL;
}
