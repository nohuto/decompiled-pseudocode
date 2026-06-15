/*
 * XREFs of PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180023150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800208B0 @ 0x1800208B0 (sub_1800208B0.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 */

__int64 __fastcall PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(void *a1)
{
  __int64 result; // rax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // [rsp+38h] [rbp+10h]

  result = 2147549183LL;
  if ( qword_18004FE78 )
  {
    v2 = sub_18002633C(a1);
    v3 = v2;
    if ( v2 )
    {
      result = (unsigned __int16)v2 | 0x80070000;
      if ( v3 <= 0 )
        return (unsigned int)v3;
    }
    else
    {
      return sub_1800208B0(0LL, v4);
    }
  }
  return result;
}
