/*
 * XREFs of RtlHashBytes2 @ 0x1401BFAD0
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x14088E3DC (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x14088F1E8 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140155940 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v4);
  return v4;
}
