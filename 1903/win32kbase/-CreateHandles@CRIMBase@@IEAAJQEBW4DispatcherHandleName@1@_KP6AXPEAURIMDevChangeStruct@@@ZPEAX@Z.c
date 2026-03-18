/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C006D770
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C006E8D0 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C006D8E8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C006DB2C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInput @ 0x1C006DC10 (RIMRegisterForInput.c)
 *     ApiSetEditionHidAutoRepeatTimeout @ 0x1C006EDD4 (ApiSetEditionHidAutoRepeatTimeout.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0098948 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  const enum CRIMBase::DispatcherHandleName *v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  int DispatcherHandles; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 DispatcherHandleByName; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  int v19; // ebp
  int v20; // esi
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8

  v6 = a2;
  if ( a3 > 0x10 )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)v6 + v8);
      if ( (unsigned int)v9 >= 0x10 )
        return 3221225485LL;
      if ( dword_1C01D9A70[3 * v9] != (_DWORD)v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(dword_1C01D9A70, a2, a3);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v9 + 152),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C01D9A70[3 * v9]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            (_DWORD)a2,
            3,
            10,
            (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids,
            v9);
        }
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v18 = CRIMBase::GetDispatcherHandleByName(this, 2LL);
  if ( !v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v19 = 0;
  *((_QWORD *)this + 8) = (char *)this + 80;
  v20 = 0;
  *((_QWORD *)this + 9) = (char *)this + 80;
  if ( (*((_BYTE *)this + 144) & 0x1C) == 0x1C )
  {
    v20 = ApiSetEditionHidAutoRepeatTimeout();
    if ( v20 )
    {
      if ( CRIMBase::IsDispatcherObjectValid(this, 3u) )
      {
        v26 = CRIMBase::GetDispatcherHandleByName(this, 3LL);
        v19 = v26;
        if ( !v26 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      }
    }
  }
  v21 = RIMRegisterForInput(
          *((_DWORD *)this + 36),
          DispatcherHandleByName,
          v18,
          v19,
          v20,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v21 >= 0 )
  {
    v21 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v21 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
  }
  return (unsigned int)v21;
}
