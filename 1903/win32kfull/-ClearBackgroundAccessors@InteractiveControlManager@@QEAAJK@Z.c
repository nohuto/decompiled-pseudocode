/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C024DA58
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0254EA4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C0254634 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearBackgroundAccessors(InteractiveControlManager *this)
{
  InteractiveControlDevice **v2; // rbx
  __int64 v3; // rsi
  unsigned int v5; // [rsp+38h] [rbp-19h] BYREF
  int v6; // [rsp+3Ch] [rbp-15h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  const char *v9; // [rsp+78h] [rbp+27h]
  int v10; // [rsp+80h] [rbp+2Fh]
  int v11; // [rsp+84h] [rbp+33h]
  unsigned int *v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+90h] [rbp+3Fh]
  int v14; // [rsp+94h] [rbp+43h]

  v5 = 0;
  if ( dword_1C0321308 > 4u )
  {
    v11 = 0;
    v6 = 0;
    v14 = 0;
    v9 = "InteractiveControlManager::ClearBackgroundAccessors entry";
    v12 = (unsigned int *)&v6;
    v10 = 58;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DF3, 0LL, 0LL, 4u, &pData);
  }
  v2 = (InteractiveControlDevice **)((char *)this + 40);
  v3 = 5LL;
  do
  {
    if ( *v2 )
      InteractiveControlDevice::SetBackgroundAccessor(*v2, 0LL, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v7[1] = 0LL;
  *((_DWORD *)this + 6) = 0;
  v7[0] = (char *)this + 16;
  HMAssignmentLock(v7);
  if ( dword_1C0321308 > 4u )
  {
    v11 = 0;
    v14 = 0;
    v9 = "InteractiveControlManager::ClearBackgroundAccessors exit";
    v12 = &v5;
    v10 = 57;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
  }
  return v5;
}
