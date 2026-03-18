/*
 * XREFs of ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C024D47C
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0254764 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C025442C (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearDeviceFocus(InteractiveControlManager *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned int v5; // [rsp+38h] [rbp-19h] BYREF
  int v6; // [rsp+3Ch] [rbp-15h] BYREF
  __int128 v7; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  const char *v9; // [rsp+78h] [rbp+27h]
  int v10; // [rsp+80h] [rbp+2Fh]
  int v11; // [rsp+84h] [rbp+33h]
  unsigned int *v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+90h] [rbp+3Fh]
  int v14; // [rsp+94h] [rbp+43h]

  v5 = 0;
  if ( dword_1C031F308 > 4u )
  {
    v11 = 0;
    v6 = 0;
    v14 = 0;
    v9 = "InteractiveControlManager::ClearDeviceFocus entry";
    v12 = (unsigned int *)&v6;
    v10 = 50;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83B3, 0LL, 0LL, 4u, &pData);
  }
  v2 = (_QWORD *)((char *)this + 40);
  v3 = 5LL;
  do
  {
    if ( *v2 )
      InteractiveControlDevice::SetFocus(*v2, 0LL, 0LL, 1LL);
    ++v2;
    --v3;
  }
  while ( v3 );
  v7 = (unsigned __int64)this;
  HMAssignmentLock(&v7);
  if ( dword_1C031F308 > 4u )
  {
    v11 = 0;
    v14 = 0;
    v9 = "InteractiveControlManager::ClearDeviceFocus exit";
    v12 = &v5;
    v10 = 49;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E837A, 0LL, 0LL, 4u, &pData);
  }
  return v5;
}
