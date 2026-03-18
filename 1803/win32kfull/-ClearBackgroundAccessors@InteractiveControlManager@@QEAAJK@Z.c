/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C020BAD0
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C021299C (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02121A4 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearBackgroundAccessors(
        InteractiveControlManager *this,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  InteractiveControlDevice **v5; // rbx
  __int64 v6; // rsi
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  const char *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  unsigned int *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]

  v10 = 0;
  if ( dword_1C031C7D0 > 4u )
  {
    v16 = 0;
    v11 = 0;
    v19 = 0;
    v14 = "InteractiveControlManager::ClearBackgroundAccessors entry";
    v17 = (unsigned int *)&v11;
    v15 = 58;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3826, a3, a4, 4u, &pData);
  }
  v5 = (InteractiveControlDevice **)((char *)this + 40);
  v6 = 5LL;
  do
  {
    if ( *v5 )
      InteractiveControlDevice::SetBackgroundAccessor(*v5, 0LL, 0);
    ++v5;
    --v6;
  }
  while ( v6 );
  v12[1] = 0LL;
  *((_DWORD *)this + 6) = 0;
  v12[0] = (char *)this + 16;
  HMAssignmentLock(v12);
  if ( dword_1C031C7D0 > 4u )
  {
    v16 = 0;
    v19 = 0;
    v14 = "InteractiveControlManager::ClearBackgroundAccessors exit";
    v17 = &v10;
    v15 = 57;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, v7, v8, 4u, &pData);
  }
  return v10;
}
