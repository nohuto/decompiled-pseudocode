/*
 * XREFs of _alloca_probe @ 0x18003ADA0
 * Callers:
 *     sub_180002FC0 @ 0x180002FC0 (sub_180002FC0.c)
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     sub_18000F960 @ 0x18000F960 (sub_18000F960.c)
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     sub_18002E450 @ 0x18002E450 (sub_18002E450.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
