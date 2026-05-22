/*
 * XREFs of ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18009B0D4
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18009BAA4 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x18009B9E8 (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x18009CCE0 (-GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800A0310 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
        DevicePropertyHelpers::DevicePropertyHelper *this,
        struct _DEVPROPKEY *a2,
        HSTRING *string)
{
  __int64 result; // rax
  unsigned int v7; // r8d
  int DriverProperty; // eax
  unsigned int v9; // ebx
  PCNZWCH sourceString[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  result = DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty(this, a2, (unsigned int)string, 0LL, &v12);
  if ( (_DWORD)result == -2147024774 && v12 )
  {
    std::vector<unsigned short>::vector<unsigned short>(sourceString, (unsigned __int64)v12 >> 1);
    DriverProperty = DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty(
                       this,
                       a2,
                       v7,
                       (unsigned __int8 *)sourceString[0],
                       &v12);
    v9 = DriverProperty;
    if ( DriverProperty >= 0 )
      v9 = WindowsCreateString(sourceString[0], v12 >> 1, string);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)(unsigned int)DriverProperty);
    std::vector<unsigned short>::_Tidy(sourceString);
    return v9;
  }
  return result;
}
