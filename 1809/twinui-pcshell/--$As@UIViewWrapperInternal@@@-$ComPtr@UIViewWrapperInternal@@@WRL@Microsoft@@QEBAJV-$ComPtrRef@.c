/*
 * XREFs of ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EAF4
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18021C46C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18021D530 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F8C4 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
           a2);
}
