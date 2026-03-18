/*
 * XREFs of ACPIGetConvertToHardwareID @ 0x1C0055704
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00052C0 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0005554 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIWideStringToAnsiHelper @ 0x1C0025FAC (ACPIWideStringToAnsiHelper.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareID(__int64 a1, int a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  int v6; // ebx
  unsigned int v7; // r11d
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToHardwareIDWide(a1, a2, a3, a4, a5, (int *)v9);
  if ( v6 >= 0 )
  {
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
