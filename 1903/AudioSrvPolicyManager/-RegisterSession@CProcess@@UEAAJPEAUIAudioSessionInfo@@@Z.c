/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800125F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180018E48 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

int __fastcall CProcess::RegisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::RegisterSession(this, (CProcess *)((char *)this - 16), a2);
  else
    return -2147024809;
}
