/*
 * XREFs of ??9CAppAudioSessionId@@QEBA_NAEBV0@@Z @ 0x1800CCF98
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAppAudioSessionId::operator!=(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rax

  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 != *(_DWORD *)(a2 + 40) || !v2 && (unsigned int)_o__wcsicmp(*(_QWORD *)a1, *(_QWORD *)a2) )
    return 1;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a2 + 16);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24);
  return v6 != 0;
}
