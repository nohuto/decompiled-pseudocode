/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x140159A70
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateTimeAssist @ 0x140117838 (KiUpdateTimeAssist.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  return KiUpdateTimeAssist((__int64)&v2, (__int64)&v3, (__int64)&v3);
}
