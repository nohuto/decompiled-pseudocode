/*
 * XREFs of RtlHashBytes2 @ 0x1402FE2E8
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x140854F60 (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C38 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153580 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v4);
  return v4;
}
