/*
 * XREFs of ?GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x18009CCE0
 * Callers:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18009B0D4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DevicePropertyHelpers::MapCrToHResult @ 0x18009D94C (DevicePropertyHelpers--MapCrToHResult.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty(
        DevicePropertyHelpers::DevicePropertyHelper *this,
        const struct _DEVPROPKEY *a2,
        DEVPROPTYPE a3,
        unsigned __int8 *a4,
        PULONG PropertyBufferSize)
{
  CONFIGRET DevNode_PropertyW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DEVPROPTYPE PropertyType; // [rsp+50h] [rbp+18h] BYREF

  PropertyType = a3;
  if ( *(_DWORD *)this )
  {
    DevNode_PropertyW = CM_Get_DevNode_PropertyW(*((_DWORD *)this + 10), a2, &PropertyType, a4, PropertyBufferSize, 0);
    if ( DevNode_PropertyW )
      return DevicePropertyHelpers::MapCrToHResult(DevNode_PropertyW);
    else
      return PropertyType != 18 ? 0x8007070C : 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
