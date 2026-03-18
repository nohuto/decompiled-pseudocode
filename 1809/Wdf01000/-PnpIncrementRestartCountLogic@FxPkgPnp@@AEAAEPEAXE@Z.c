/*
 * XREFs of ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C007DC98
 * Callers:
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008DAB0 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017E54 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0061C40 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

bool __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  unsigned __int8 m_AchievedStart; // r12
  bool v6; // si
  int v7; // edi
  _LARGE_INTEGER v8; // rbx
  bool v9; // al
  NTSTATUS v11; // eax
  unsigned int count; // [rsp+40h] [rbp-79h] BYREF
  unsigned int length; // [rsp+44h] [rbp-75h] BYREF
  unsigned int type; // [rsp+48h] [rbp-71h] BYREF
  unsigned int ValueLengthQueried; // [rsp+4Ch] [rbp-6Dh] BYREF
  unsigned int ValueType; // [rsp+50h] [rbp-69h] BYREF
  unsigned int value; // [rsp+54h] [rbp-65h] BYREF
  int Data; // [rsp+58h] [rbp-61h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+60h] [rbp-59h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+68h] [rbp-51h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+78h] [rbp-41h] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+88h] [rbp-31h] BYREF
  _LARGE_INTEGER startTickCount; // [rsp+98h] [rbp-21h] BYREF
  wchar_t valueNameCount_buffer[8]; // [rsp+A0h] [rbp-19h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+B0h] [rbp-9h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+C8h] [rbp+Fh] BYREF

  count = 0;
  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_DWORD *)&valueNameStartTime.Length = 1310738;
  *(_DWORD *)&valueNameCount.Length = 786442;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_DWORD *)&valueNameStartAchieved.Length = 1835034;
  m_AchievedStart = this->m_AchievedStart;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  v6 = m_AchievedStart != 0;
  if ( CreatedNewKey )
    goto LABEL_21;
  v7 = FxRegKey::_QueryValue(this->m_Globals, RestartKey, &valueNameStartTime, 8u, &startTickCount, &length, &type);
  if ( v7 >= 0 && length == 8 && type == 3 )
  {
    v7 = FxRegKey::_QueryULong(RestartKey, &valueNameCount, &count);
    if ( v7 == -1073741772 )
    {
      count = 1;
      v7 = 0;
    }
  }
  if ( v7 >= 0 )
  {
    v8 = startTickCount;
    if ( currentTickCount.QuadPart >= startTickCount.QuadPart )
    {
      if ( KeQueryTimeIncrement() * (currentTickCount.QuadPart - v8.QuadPart) <= 600000000 )
      {
        if ( ++count > 5 )
          v7 = -1073741823;
        v9 = count <= 5;
        goto LABEL_22;
      }
      if ( !m_AchievedStart
        && !((int)FxRegKey::_QueryValue(
                    this->m_Globals,
                    RestartKey,
                    &valueNameStartAchieved,
                    4u,
                    &value,
                    &ValueLengthQueried,
                    &ValueType) >= 0
          && ValueLengthQueried == 4
          && ValueType == 4
           ? value
           : 0) )
      {
        m_AchievedStart = 0;
        v7 = -1073741823;
        goto LABEL_25;
      }
      v6 = 1;
      m_AchievedStart = 0;
    }
LABEL_21:
    count = 1;
    v7 = ZwSetValueKey(RestartKey, &valueNameStartTime, 0, 3u, &currentTickCount, 8u);
    v9 = 1;
LABEL_22:
    if ( v7 >= 0 && v9 )
      v7 = ZwSetValueKey(RestartKey, &valueNameCount, 0, 4u, &count, 4u);
  }
LABEL_25:
  if ( v6 )
  {
    Data = m_AchievedStart;
    v11 = ZwSetValueKey(RestartKey, &valueNameStartAchieved, 0, 4u, &Data, 4u);
    if ( v7 >= 0 )
      v7 = v11;
  }
  return v7 >= 0;
}
