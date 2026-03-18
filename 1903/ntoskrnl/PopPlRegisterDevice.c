/*
 * XREFs of PopPlRegisterDevice @ 0x140191988
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x140305460 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x14076F460 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopPlLookupDevicePowerProfile @ 0x140305124 (PopPlLookupDevicePowerProfile.c)
 */

bool __fastcall PopPlRegisterDevice(__int64 a1, __int64 a2, ULONG64 a3, ULONG a4)
{
  bool v6; // zf
  __int64 v7; // rax
  const GUID *v8; // [rsp+20h] [rbp-59h]
  const GUID *v9; // [rsp+28h] [rbp-51h]
  __int16 v10; // [rsp+40h] [rbp-39h] BYREF
  BOOL v11; // [rsp+44h] [rbp-35h] BYREF
  int v12; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  _DWORD *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  __int64 v20; // [rsp+90h] [rbp+17h]
  _DWORD v21[2]; // [rsp+98h] [rbp+1Fh] BYREF
  BOOL *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  int *v25; // [rsp+B0h] [rbp+37h]
  int v26; // [rsp+B8h] [rbp+3Fh]
  int v27; // [rsp+BCh] [rbp+43h]

  if ( PopPowerPlane )
  {
    v7 = PopPlLookupDevicePowerProfile(PopPowerPlane, a1 + 216);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 24) = a1;
      *(_QWORD *)(a1 + 1176) = v7;
    }
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v10 = 1;
    v6 = *(_QWORD *)(a1 + 1176) == 0LL;
    v15 = 2;
    v18 = 2;
    v16 = 0;
    v19 = 0;
    v21[1] = 0;
    v24 = 0;
    v27 = 0;
    v11 = !v6;
    v12 = *(_DWORD *)(a1 + 820);
    v14 = &v10;
    v17 = v21;
    v20 = *(_QWORD *)(a1 + 224);
    v21[0] = *(unsigned __int16 *)(a1 + 216);
    v22 = &v11;
    v25 = &v12;
    v23 = 4;
    v26 = 4;
    TlgWriteEx(&pCallbackContext, &unk_14039196B, a3, a4, v8, v9, 7u, &pData);
  }
  return *(_QWORD *)(a1 + 1176) != 0LL;
}
