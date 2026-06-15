/*
 * XREFs of ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FCF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD01C (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return CProcessSubmixManager::GetAppSubmixClientContextHelper(a1, a2, a3, word_180161DC4, a4, a5);
}
