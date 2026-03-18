/*
 * XREFs of imp_WdfDriverCreate @ 0x1C004D9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0017EE4 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     _TlgKeywordOn @ 0x1C0044500 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0044534 (_TlgWrite.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C004860C (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_dddd @ 0x1C004D4A8 (WPP_IFR_SF_dddd.c)
 *     _TlgCreateSz @ 0x1C004D940 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C004D978 (_TlgCreateWsz.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00558E8 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0055C5C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0056004 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C00560B0 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     FxDestroy @ 0x1C00590E4 (FxDestroy.c)
 *     FxInitialize @ 0x1C00593DC (FxInitialize.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     GetImageName @ 0x1C006227C (GetImageName.c)
 */

__int64 __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  char *DriverName; // rbx
  WDFDRIVER__ *v10; // r12
  unsigned int v11; // edi
  unsigned int DriverInitFlags; // eax
  __int64 result; // rax
  _WDF_DRIVER_CONFIG *v14; // rdx
  unsigned int DriverPoolTag; // eax
  _WDF_DRIVER_CONFIG *v16; // r9
  FxDriver *v17; // rax
  FxDriver *v18; // rax
  FxDriver *v19; // rsi
  int v20; // r14d
  int v21; // eax
  _WDF_DRIVER_GLOBALS *v22; // rax
  bool v23; // al
  const _TlgProvider_t *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  const _TlgProvider_t *v27; // rcx
  const _GUID *v28; // r8
  const _GUID *v29; // r9
  char v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31; // [rsp+51h] [rbp-AFh] BYREF
  _WDF_DRIVER_GLOBALS *v32; // [rsp+58h] [rbp-A8h] BYREF
  WDFDRIVER__ *hDriver; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  FxAutoString imageName; // [rsp+70h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[12]; // [rsp+80h] [rbp-80h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v32 = DriverGlobals;
  hDriver = 0LL;
  DriverName = DriverGlobals[-8].DriverName;
  v10 = 0LL;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  DriverName[424] = 0;
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( DriverConfig->Size != 32 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_dddd(
      (_FX_DRIVER_GLOBALS *)DriverName,
      2u,
      0x11u,
      0xAu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverConfig->Size,
      32,
      32,
      -1073741820);
    return v11;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFEC) != 0 )
  {
    WPP_IFR_SF_DDd(
      (_FX_DRIVER_GLOBALS *)DriverName,
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      19,
      -1073741811);
    return 3221225485LL;
  }
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)DriverName, 0);
  if ( (int)result >= 0 )
  {
    if ( DriverName[424]
      || (result = FxValidateUnicodeString((_FX_DRIVER_GLOBALS *)DriverName, RegistryPath), (int)result >= 0) )
    {
      if ( *((_QWORD *)DriverName + 9) || v32->Driver )
      {
        v11 = -1073741437;
        WPP_IFR_SF_qL(
          (_FX_DRIVER_GLOBALS *)DriverName,
          2u,
          0x11u,
          0xDu,
          WPP_FxDriverApi_cpp_Traceguids,
          DriverObject,
          0xC0000183);
        return v11;
      }
      if ( Driver )
        *Driver = 0LL;
      FxDriver::_InitializeDriverName((_FX_DRIVER_GLOBALS *)DriverName, RegistryPath);
      if ( DriverConfig->Size == 32 && (DriverPoolTag = DriverConfig->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
      {
        *((_DWORD *)DriverName + 17) = DriverPoolTag;
        *((_DWORD *)DriverName + 111) = DriverConfig->DriverPoolTag;
      }
      else
      {
        FxDriver::_InitializeTag((_FX_DRIVER_GLOBALS *)DriverName, v14);
      }
      if ( (DriverConfig->DriverInitFlags & 3) == 1 && DriverConfig->EvtDriverDeviceAdd )
      {
        WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)DriverName, 2u, 0x11u, 0xEu, WPP_FxDriverApi_cpp_Traceguids);
        return 3221225485LL;
      }
      result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)DriverName, DriverAttributes, 7);
      if ( (int)result < 0 )
        return result;
      FxInitialize((_FX_DRIVER_GLOBALS *)DriverName, DriverObject, RegistryPath, v16);
      v17 = (FxDriver *)FxObjectHandleAlloc(
                          (_FX_DRIVER_GLOBALS *)DriverName,
                          ExDefaultNonPagedPoolType,
                          0x168uLL,
                          0,
                          DriverAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( v17 )
      {
        FxDriver::FxDriver(v17, DriverObject, DriverConfig, (_FX_DRIVER_GLOBALS *)DriverName);
        v19 = v18;
      }
      else
      {
        v19 = 0LL;
      }
      if ( v19 )
      {
        v20 = FxDriver::Initialize(v19, RegistryPath, DriverConfig, DriverAttributes);
        if ( v20 < 0 )
          goto LABEL_46;
        v21 = FxObject::Commit(v19, (_FX_DRIVER_GLOBALS *)DriverAttributes, (void **)&hDriver, 0LL, 1u);
        v10 = hDriver;
        v20 = v21;
      }
      else
      {
        v20 = -1073741670;
      }
      if ( v20 >= 0 )
      {
        v22 = v32;
        *((_QWORD *)DriverName + 9) = v19;
        v22->Driver = v10;
        *((_DWORD *)DriverName + 110) |= DriverConfig->DriverInitFlags;
        v23 = (DriverConfig->DriverInitFlags & 3) == 0 || DriverConfig->EvtDriverUnload != 0LL;
        DriverName[480] = v23;
        if ( Driver )
          *Driver = v10;
        if ( *((_QWORD *)DriverName + 52) )
        {
          *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
          imageName.m_UnicodeString.Buffer = 0LL;
          GetImageName((_FX_DRIVER_GLOBALS *)DriverName, &imageName.m_UnicodeString);
          if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 )
          {
            if ( TlgKeywordOn(v24, 0x200000000000uLL) )
            {
              _TlgData[2].Ptr = *((_QWORD *)DriverName + 52);
              *(_QWORD *)&_TlgData[2].Size = 16LL;
              TlgCreateSz(&_TlgData[3], DriverName + 448);
              TlgCreateWsz(&_TlgData[4], imageName.m_UnicodeString.Buffer);
              TlgCreateWsz(&_TlgData[5], L"01.027.0");
              v25 = *((_QWORD *)DriverName + 37);
              v34 = *(_DWORD *)(v25 + 16);
              _TlgData[6].Ptr = (unsigned __int64)&v34;
              *(_QWORD *)&_TlgData[6].Size = 4LL;
              v26 = *(_DWORD *)(v25 + 20);
              LODWORD(v25) = *((_DWORD *)DriverName + 110);
              LODWORD(v32) = v26;
              _TlgData[7].Ptr = (unsigned __int64)&v32;
              _TlgData[8].Ptr = (unsigned __int64)(DriverName + 316);
              LOBYTE(v26) = v25 & 1;
              v27 = (const _TlgProvider_t *)((unsigned int)v25 >> 1);
              v30 = v26;
              LOBYTE(v27) = (unsigned __int8)v27 & 1;
              *(_QWORD *)&_TlgData[7].Size = 4LL;
              _TlgData[9].Ptr = (unsigned __int64)&v30;
              _TlgData[10].Ptr = (unsigned __int64)&v31;
              LODWORD(hDriver) = *((_DWORD *)DriverName + 101);
              _TlgData[11].Ptr = (unsigned __int64)&hDriver;
              *(_QWORD *)&_TlgData[8].Size = 1LL;
              *(_QWORD *)&_TlgData[9].Size = 1LL;
              v31 = (char)v27;
              *(_QWORD *)&_TlgData[10].Size = 1LL;
              *(_QWORD *)&_TlgData[11].Size = 4LL;
              TlgWrite(v27, (char *)&TlgEvent_1._TlgChannel, v28, v29, 0xCu, _TlgData);
            }
          }
          FxAutoString::~FxAutoString(&imageName);
        }
        return (unsigned int)v20;
      }
LABEL_46:
      if ( v19 )
      {
        FxObject::ClearEvtCallbacks(v19);
        v19->DeleteObject(v19);
      }
      FxDestroy((_FX_DRIVER_GLOBALS *)DriverName);
      return (unsigned int)v20;
    }
  }
  return result;
}
