/*
 * XREFs of ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C00882E4
 * Callers:
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0087F44 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C00301F0 (RtlUnicodeStringPrintf.c)
 */

__int64 __fastcall FxPkgPnp::SleepStudyRegisterBlockingComponents(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdi
  _DEVICE_OBJECT *v4; // rbx
  int v5; // eax
  signed int v6; // ebx
  FxDeviceBase *v7; // r8
  unsigned __int16 v8; // r9
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v10; // r8
  FxDeviceBase *v11; // rcx
  unsigned __int16 v12; // ax
  const void *v13; // rcx
  FxDeviceBase *v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  SS_LIBRARY__ *SleepStudyLibContext; // rcx
  FxDeviceBase *v19; // rcx
  unsigned __int16 v20; // ax
  const void *v21; // rcx
  __int64 v22; // rdx
  void *_a1; // [rsp+28h] [rbp-D8h]
  unsigned int _a2; // [rsp+30h] [rbp-D0h]
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING friendlyName; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING pdoFriendlyName; // [rsp+58h] [rbp-A8h] BYREF
  SS_COMPONENT__ *componentPowerRef; // [rsp+68h] [rbp-98h] BYREF
  _GUID v30; // [rsp+70h] [rbp-90h] BYREF
  _GUID v31; // [rsp+80h] [rbp-80h] BYREF
  _GUID thisGuid; // [rsp+90h] [rbp-70h] BYREF
  _GUID parentGuid; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t powerRefFriendlyName[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pdoFriendlyName_buffer[256]; // [rsp+100h] [rbp+0h] BYREF

  *(_QWORD *)&friendlyName.Length = 0LL;
  friendlyName.Buffer = 0LL;
  wcscpy(powerRefFriendlyName, L"WDF Power References for %wZ, Driver:%S");
  pdoFriendlyName.Buffer = pdoFriendlyName_buffer;
  m_DeviceBase = this->m_DeviceBase;
  *(_DWORD *)&pdoFriendlyName.Length = 0x2000000;
  m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
  v4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  SleepstudyHelper_GenerateGuid(0LL, m_DeviceObject, &parentGuid);
  SleepstudyHelper_GenerateGuid(2LL, v4, &thisGuid);
  v5 = SleepstudyHelper_GetPdoFriendlyName(m_DeviceObject, &pdoFriendlyName);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = this->m_DeviceBase;
    v8 = 22;
    _a2 = v5;
    m_ObjectSize = v7->m_ObjectSize;
    v10 = (unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v10 = 0LL;
    _a1 = (void *)v10;
LABEL_5:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, v8, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    goto $Done_60;
  }
  friendlyName.MaximumLength = pdoFriendlyName.Length + 112;
  friendlyName.Length = 0;
  friendlyName.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                     ExDefaultNonPagedPoolType,
                                     (unsigned __int16)(pdoFriendlyName.Length + 112),
                                     0x53535554u);
  if ( friendlyName.Buffer )
  {
    v6 = RtlUnicodeStringPrintf(
           &friendlyName,
           powerRefFriendlyName,
           &pdoFriendlyName,
           this->m_Globals->Public.DriverName);
    if ( v6 < 0 )
    {
      v14 = this->m_DeviceBase;
      v8 = 24;
      _a2 = v6;
      v15 = v14->m_ObjectSize;
      v16 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v15 )
        v16 = 0LL;
      _a1 = (void *)v16;
      goto LABEL_5;
    }
    m_SleepStudy = this->m_SleepStudy;
    v30 = thisGuid;
    SleepStudyLibContext = m_SleepStudy->SleepStudyLibContext;
    v31 = parentGuid;
    v6 = SleepstudyHelper_RegisterComponentEx(SleepStudyLibContext, &v31, &v30, &friendlyName, &componentPowerRef);
    if ( v6 >= 0 )
    {
      this->m_SleepStudy->ComponentPowerRef = componentPowerRef;
      SleepstudyHelper_AcquireComponentLock(this->m_SleepStudy->ComponentPowerRef, irql);
      if ( this->m_SleepStudyPowerRefIoCount )
        SleepstudyHelper_ComponentActiveLocked(this->m_SleepStudy->ComponentPowerRef);
      LOBYTE(v22) = irql[0];
      SleepstudyHelper_ReleaseComponentLock(this->m_SleepStudy->ComponentPowerRef, v22);
    }
    else
    {
      v19 = this->m_DeviceBase;
      v20 = v19->m_ObjectSize;
      v21 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20 )
        v21 = 0LL;
      WPP_IFR_SF_qL(this->m_Globals, 3u, 0xCu, 0x19u, WPP_FxPkgPnpKM_cpp_Traceguids, v21, v6);
    }
  }
  else
  {
    v11 = this->m_DeviceBase;
    v12 = v11->m_ObjectSize;
    v13 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      v13 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x17u, WPP_FxPkgPnpKM_cpp_Traceguids, v13);
    v6 = -1073741664;
  }
$Done_60:
  if ( friendlyName.Buffer )
    ExFreePoolWithTag(friendlyName.Buffer, 0);
  return (unsigned int)v6;
}
