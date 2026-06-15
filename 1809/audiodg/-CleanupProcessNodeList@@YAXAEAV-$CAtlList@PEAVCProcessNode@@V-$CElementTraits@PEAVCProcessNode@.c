/*
 * XREFs of ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x140039DD8
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000C7B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x14003AF08 (-RemoveHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEA.c)
 */

void __fastcall CleanupProcessNodeList(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(a1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
