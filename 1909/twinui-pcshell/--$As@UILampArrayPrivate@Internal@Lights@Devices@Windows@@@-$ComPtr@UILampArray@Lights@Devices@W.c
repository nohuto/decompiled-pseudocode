/*
 * XREFs of ??$As@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180421D1C
 * Callers:
 *     ?SetExclusiveLockState@AssistantLightBlock@Lighting@TwinUI@@UEAAX_N@Z @ 0x180421F90 (-SetExclusiveLockState@AssistantLightBlock@Lighting@TwinUI@@UEAAX_N@Z.c)
 *     ?SetExclusiveLockState@AssistantLightStrip@Lighting@TwinUI@@UEAAX_N@Z @ 0x180422C20 (-SetExclusiveLockState@AssistantLightStrip@Lighting@TwinUI@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray>::As<Windows::Devices::Lights::Internal::ILampArrayPrivate>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_4d1e80f9_fa8e_4203_8cb0_e91c0108713d,
           a2);
}
