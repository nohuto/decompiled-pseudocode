/*
 * XREFs of ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C008A40C
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0084710 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C001410C (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0087950 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPowerPolicyOwnerSettings::Init(FxPowerPolicyOwnerSettings *this)
{
  struct _CALLBACK_OBJECT **p_m_PowerCallbackObject; // rbx
  PVOID v3; // rax
  __int64 result; // rax
  _UNICODE_STRING string; // [rsp+20h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+30h] [rbp-38h] BYREF

  memset(&oa, 0, sizeof(oa));
  *(_QWORD *)&string.Length = 0LL;
  string.Buffer = 0LL;
  RtlInitUnicodeString(&string, L"\\Callback\\PowerState");
  oa.RootDirectory = 0LL;
  oa.Length = 48;
  oa.Attributes = 64;
  p_m_PowerCallbackObject = &this->m_PowerCallbackObject;
  oa.ObjectName = &string;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&this->m_PowerCallbackObject, &oa, 0, 1u) >= 0 )
  {
    v3 = ExRegisterCallback(*p_m_PowerCallbackObject, FxPowerPolicyOwnerSettings::_PowerStateCallback, this);
    this->m_PowerCallbackRegistration = v3;
    if ( !v3 )
    {
      ObfDereferenceObject(*p_m_PowerCallbackObject);
      *p_m_PowerCallbackObject = 0LL;
    }
  }
  KeInitializeEvent(&this->m_PowerIdleMachine.m_D0NotificationEvent.m_Event.m_Event, NotificationEvent, 1u);
  this->m_PowerIdleMachine.m_D0NotificationEvent.m_Event.m_DbgFlagIsInitialized = 1;
  result = MxTimer::Initialize(
             &this->m_PowerIdleMachine.m_PowerTimeoutTimer,
             this,
             (void (__fastcall *)(_KDPC *, void *, void *, void *))FxPowerIdleMachine::_PowerTimeoutDpcRoutine,
             0);
  if ( (int)result >= 0 )
  {
    FxPowerIdleMachine::Reset(&this->m_PowerIdleMachine);
    return 0LL;
  }
  return result;
}
