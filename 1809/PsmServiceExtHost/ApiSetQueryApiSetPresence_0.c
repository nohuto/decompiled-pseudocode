/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180048AD0
 * Callers:
 *     IsRmRpsInitializePresent @ 0x1800489EC (IsRmRpsInitializePresent.c)
 *     IsQueryUserTokenPresent @ 0x180048B68 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180048C48 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048E40 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004917C (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004925C (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1800492B0 (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
