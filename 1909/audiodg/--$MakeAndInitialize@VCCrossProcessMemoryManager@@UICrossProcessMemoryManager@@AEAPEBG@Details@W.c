/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400034E0
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F96C (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400394A4 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ??0CCrossProcessMemoryManager@@QEAA@XZ @ 0x140001A94 (--0CCrossProcessMemoryManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x140001B10 (-RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140003D08 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemoryManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013D00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMem.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
        CCrossProcessMemoryManager **a1,
        const unsigned __int16 **a2)
{
  CCrossProcessMemoryManager *v4; // rax
  CCrossProcessMemoryManager *v5; // rbx
  int v6; // edi
  const struct _GUID *v7; // rcx

  *a1 = 0LL;
  v4 = (CCrossProcessMemoryManager *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CCrossProcessMemoryManager::CCrossProcessMemoryManager(v4);
    v6 = CCrossProcessMemoryManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      *a1 = 0LL;
      if ( (unsigned int)InlineIsEqualGUID(
                           &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9,
                           &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(CCrossProcessMemoryManager *))(*(_QWORD *)v5 + 8LL))(v5);
        v6 = 0;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v5;
        v6 = 0;
        (*(void (__fastcall **)(CCrossProcessMemoryManager *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      else
      {
        v6 = -2147467262;
      }
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessMemoryManager>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
