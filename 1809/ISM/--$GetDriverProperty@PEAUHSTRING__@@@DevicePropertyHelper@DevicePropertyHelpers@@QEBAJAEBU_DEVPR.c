/*
 * XREFs of ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18005F194
 * Callers:
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x180060220 (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x180063EAC (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
        _DWORD *a1,
        const DEVPROPKEY *a2,
        HSTRING *a3)
{
  unsigned int String; // ebx
  CONFIGRET DevNode_PropertyW; // eax
  signed int v8; // eax
  WCHAR *v9; // rdi
  CONFIGRET v10; // eax
  signed int v11; // eax
  __int64 v12; // rcx
  WCHAR *v13; // rax
  const struct std::nothrow_t *v14; // rdx
  PBYTE PropertyBuffer[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  ULONG PropertyBufferSize; // [rsp+80h] [rbp+30h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+98h] [rbp+48h] BYREF

  PropertyBufferSize = 0;
  if ( !*a1 )
  {
    String = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
      (const char *)0x8007139FLL);
    return String;
  }
  DevNode_PropertyW = CM_Get_DevNode_PropertyW(a1[10], a2, &PropertyType, 0LL, &PropertyBufferSize, 0);
  if ( !DevNode_PropertyW )
    return PropertyType != 18 ? 0x8007070C : 0;
  v8 = CM_MapCrToWin32Err(DevNode_PropertyW, 0x507u);
  String = (unsigned __int16)v8 | 0x80070000;
  if ( v8 <= 0 )
    String = v8;
  if ( String == -2147024774 && PropertyBufferSize )
  {
    std::vector<unsigned short>::vector<unsigned short>(PropertyBuffer, (unsigned __int64)PropertyBufferSize >> 1);
    v9 = (WCHAR *)PropertyBuffer[0];
    if ( !*a1 )
    {
      String = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)0x8007139FLL);
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)String);
      goto LABEL_19;
    }
    v10 = CM_Get_DevNode_PropertyW(a1[10], a2, &PropertyType, PropertyBuffer[0], &PropertyBufferSize, 0);
    if ( v10 )
    {
      v11 = CM_MapCrToWin32Err(v10, 0x507u);
      String = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        String = v11;
      if ( (String & 0x80000000) != 0 )
        goto LABEL_17;
    }
    else if ( PropertyType != 18 )
    {
      String = -2147023092;
      goto LABEL_17;
    }
    String = WindowsCreateString(v9, PropertyBufferSize >> 1, a3);
LABEL_19:
    if ( v9 )
    {
      v13 = v9;
      v14 = (const struct std::nothrow_t *)(2 * ((PropertyBuffer[2] - (PBYTE)v9) >> 1));
      if ( (unsigned __int64)v14 >= 0x1000 )
      {
        v9 = (WCHAR *)*((_QWORD *)v9 - 1);
        v14 = (const struct std::nothrow_t *)((char *)v14 + 39);
        if ( (unsigned __int64)((char *)v13 - (char *)v9 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v12, v14);
          __debugbreak();
        }
      }
      operator delete(v9, v14);
    }
  }
  return String;
}
