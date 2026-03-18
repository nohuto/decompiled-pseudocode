/*
 * XREFs of RIMRegQueryDWord @ 0x1C005E18C
 * Callers:
 *     RIMReadTTMRegistrySettings @ 0x1C005DFC4 (RIMReadTTMRegistrySettings.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005E06C (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ShouldEnableInputVirtualization @ 0x1C00A9ED0 (ShouldEnableInputVirtualization.c)
 *     rimObsReadMaxQueueSize @ 0x1C01580F0 (rimObsReadMaxQueueSize.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C005E204 (RIMRegOpenKey.c)
 *     RIMRegQueryDWordFromKey @ 0x1C005E2DC (RIMRegQueryDWordFromKey.c)
 */

__int64 __fastcall RIMRegQueryDWord(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned int DWordFromKey; // edi
  void *v7; // rax
  void *v8; // rsi
  __int64 result; // rax

  v4 = a3;
  DWordFromKey = 0;
  v7 = (void *)RIMRegOpenKey();
  v8 = v7;
  if ( v7 )
  {
    DWordFromKey = RIMRegQueryDWordFromKey(v7);
    ZwClose(v8);
    v4 = a3;
  }
  result = DWordFromKey;
  *a4 = v4;
  return result;
}
