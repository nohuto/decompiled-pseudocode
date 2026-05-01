/*
 * XREFs of ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018FDB0
 * Callers:
 *     ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18018DF90 (-CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18018E330 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z @ 0x18018F0D0 (-GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z.c)
 *     ?GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z @ 0x18018F130 (-GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z.c)
 *     ?OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z @ 0x18018F380 (-OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018F460 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 *     ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018F5A0 (-OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18018FC80 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ValidateThread(CImmersiveShellCreationBehavior *this)
{
  if ( !*((_DWORD *)this + 16) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 16, GetCurrentThreadId(), 0);
  return GetCurrentThreadId() != *((_DWORD *)this + 16) ? 0x8001010E : 0;
}
