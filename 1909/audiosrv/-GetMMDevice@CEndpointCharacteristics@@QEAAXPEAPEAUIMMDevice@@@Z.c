/*
 * XREFs of ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x1800484C0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::GetMMDevice(CEndpointCharacteristics *this, struct IMMDevice **a2)
{
  struct IMMDevice *v2; // rcx

  v2 = (struct IMMDevice *)*((_QWORD *)this + 2);
  *a2 = v2;
  ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->AddRef)(v2);
}
