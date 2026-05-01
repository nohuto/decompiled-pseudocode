/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180075378
 * Callers:
 *     ??_GShellExperienceViewEventArg@?1??_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UEAAPEAXI@Z @ 0x180075320 (--_GShellExperienceViewEventArg@-1--_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAU.c)
 *     ??_ECCortanaShownEventArgs@?1??OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z@UEAAPEAXI@Z @ 0x18007F7E0 (--_ECCortanaShownEventArgs@-1--OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundati.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180151610 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
             2 * v2,
             a2);
  return result;
}
