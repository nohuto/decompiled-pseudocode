/*
 * XREFs of RtlHashBytes2 @ 0x1402FE4D8
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1408561C0 (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153680 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v4);
  return v4;
}
