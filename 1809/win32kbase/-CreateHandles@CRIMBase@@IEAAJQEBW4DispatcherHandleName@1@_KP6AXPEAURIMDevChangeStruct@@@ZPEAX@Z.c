/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C007AAD0
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C007A9A0 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C007AC54 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C007AE84 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInput @ 0x1C007AEE0 (RIMRegisterForInput.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0086D48 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int DispatcherHandles; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 DispatcherHandleByName; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  int v19; // esi
  int v20; // edi
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8

  if ( a3 > 0xE )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v9 >= 0xE )
        return 3221225485LL;
      if ( dword_1C01940F0[3 * v9] != (_DWORD)v9 )
        MicrosoftTelemetryAssertTriggeredMsgKM("handleName used to index into the creation table. dispatcherCreation table is not set-up correctly!");
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v9 + 152),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C01940F0[3 * v9]);
      if ( DispatcherHandles < 0 )
      {
        WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xAu, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, v9);
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
  v18 = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL);
  if ( !v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v19 = 0;
  *((_QWORD *)this + 8) = (char *)this + 80;
  v20 = 0;
  *((_QWORD *)this + 9) = (char *)this + 80;
  if ( (*((_BYTE *)this + 144) & 0x1C) == 0x1C )
  {
    if ( (int)IsEditionHidAutoRepeatTimeoutSupported() >= 0 )
      v20 = EditionHidAutoRepeatTimeout();
    if ( v20 )
    {
      if ( CRIMBase::IsDispatcherObjectValid(this, 3u) )
      {
        v26 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
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
