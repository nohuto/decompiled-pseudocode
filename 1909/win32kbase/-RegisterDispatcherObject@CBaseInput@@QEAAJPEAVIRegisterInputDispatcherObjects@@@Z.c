/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00546F0
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0184DF0 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002BE50 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C00545F4 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00547F8 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0054B78 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  unsigned int i; // ebx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD v16[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v17[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (CBaseInput *)((char *)this + 152);
  for ( i = 0; i < 0x10; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v8 = 3 * v2;
      v17[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i, v7);
      v17[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v3) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      v2 = (unsigned int)(v2 + 1);
      v17[v8 + 1] = *((_QWORD *)v3 + 5);
    }
    v3 = (CRIMBase::SensorDispatcherObject *)((char *)v3 + 64);
  }
  v12 = 0;
  if ( (_DWORD)v2 )
  {
    v12 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
            a2,
            this,
            (unsigned int)v2,
            v17);
    if ( v12 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v16);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v16[0] )
        UserSessionSwitchLeaveCrit(v14, v13);
    }
  }
  return (unsigned int)v12;
}
