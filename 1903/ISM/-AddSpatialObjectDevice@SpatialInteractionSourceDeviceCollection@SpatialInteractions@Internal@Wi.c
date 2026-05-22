/*
 * XREFs of ?AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800EBB10
 * Callers:
 *     ?OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800ED030 (-OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WV?$function@$$A6AJPEAVSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800EBDE0 (-CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Intern.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddSpatialObjectDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const wchar_t *a2)
{
  unsigned __int64 v2; // rcx
  int SpatialInteractionObjectDevices; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 result; // rax
  __int128 v7; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall **v8)(); // [rsp+38h] [rbp-50h] BYREF
  __int128 v9; // [rsp+40h] [rbp-48h]
  __int64 (__fastcall ***v10)(); // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  const wchar_t *v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  *(_QWORD *)&v7 = this;
  *((_QWORD *)&v7 + 1) = &v12;
  v8 = off_1801762F8;
  v9 = v7;
  v10 = &v8;
  v2 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
  try
  {
    SpatialInteractionObjectDevices = Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevices(v2);
    v5 = SpatialInteractionObjectDevices;
    if ( SpatialInteractionObjectDevices >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)SpatialInteractionObjectDevices);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x188,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteracti"
                                    "onobjectdevice.cpp",
                           v4);
  }
  return result;
}
