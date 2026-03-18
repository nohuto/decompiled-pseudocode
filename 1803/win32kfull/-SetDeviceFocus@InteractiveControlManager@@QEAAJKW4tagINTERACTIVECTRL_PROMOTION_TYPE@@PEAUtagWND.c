/*
 * XREFs of ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C020D224
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C01F51C0 (NtUserSetInteractiveControlFocus.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C021299C (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02126AC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceFocus(__int64 a1, int a2, const GUID *a3, const GUID *a4)
{
  unsigned int v6; // r15d
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+34h] [rbp-65h] BYREF
  int v14; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  const char *v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+7Ch] [rbp-1Dh]
  unsigned int *v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  int *v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+9Ch] [rbp+3h]
  _QWORD *v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]

  v12 = 0;
  v6 = (unsigned int)a3;
  if ( dword_1C031C7D0 > 4u )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v17 = "InteractiveControlManager::SetDeviceFocus entry";
    v20 = (unsigned int *)&v13;
    v23 = &v14;
    v26 = v15;
    v18 = 48;
    v13 = a2;
    v21 = 4;
    v14 = (int)a3;
    v24 = 4;
    v15[0] = a4;
    v27 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E38F9, a3, a4, 6u, &pData);
  }
  v8 = (__int64 *)(a1 + 40);
  v9 = 5LL;
  do
  {
    v10 = *v8;
    if ( *v8 && (!a2 || a2 == *(_DWORD *)(v10 + 8)) )
      InteractiveControlDevice::SetFocus(v10, a4, v6);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( !a2 )
  {
    v15[0] = a1;
    v15[1] = a4;
    HMAssignmentLock(v15);
    *(_DWORD *)(a1 + 8) = v6;
  }
  if ( dword_1C031C7D0 > 4u )
  {
    v19 = 0;
    v22 = 0;
    v17 = "InteractiveControlManager::SetDeviceFocus exit";
    v20 = &v12;
    v18 = 47;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, a3, a4, 4u, &pData);
  }
  return v12;
}
