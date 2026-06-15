/*
 * XREFs of ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x18001FD90
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$16 @ 0x1800F7998 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$16.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$21 @ 0x1800F79D4 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$21.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(LPVOID **a1)
{
  LPVOID *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CoTaskMemFree(v1[3]);
    v1[3] = 0LL;
    CoTaskMemFree(v1[2]);
    v1[2] = 0LL;
    CoTaskMemFree(*v1);
    *v1 = 0LL;
    operator delete(v1, (const struct std::nothrow_t *)0x60);
  }
}
