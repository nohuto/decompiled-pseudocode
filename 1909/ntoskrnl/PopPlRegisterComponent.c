/*
 * XREFs of PopPlRegisterComponent @ 0x140191EE8
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x140304F10 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x1407722C0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopPlLookupComponentPowerProfile @ 0x140304B84 (PopPlLookupComponentPowerProfile.c)
 */

void __fastcall PopPlRegisterComponent(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const GUID *v11; // [rsp+20h] [rbp-69h]
  const GUID *v12; // [rsp+28h] [rbp-61h]
  __int16 v13; // [rsp+40h] [rbp-49h] BYREF
  BOOL v14; // [rsp+44h] [rbp-45h] BYREF
  int v15; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int16 *v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  __int64 v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  BOOL *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  _DWORD *v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]
  __int64 v32; // [rsp+C0h] [rbp+37h]
  _DWORD v33[2]; // [rsp+C8h] [rbp+3Fh] BYREF

  v4 = a1;
  if ( PopPowerPlane )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1176LL);
    if ( v9 )
    {
      v10 = PopPlLookupComponentPowerProfile(v9, v4);
      if ( v10 )
        *(_QWORD *)(v4 + 432) = v10;
    }
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v20 = v4;
    v13 = 1;
    v17 = &v13;
    v5 = *(_QWORD *)(v4 + 432) == 0LL;
    v23 = &v14;
    v18 = 2;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v14 = !v5;
    v15 = *(_DWORD *)(v4 + 156);
    v6 = *(_QWORD *)(v4 + 80);
    v24 = 4;
    v27 = 4;
    v21 = 16;
    v26 = &v15;
    v7 = *(unsigned __int16 *)(v6 + 216);
    v8 = *(_QWORD *)(v6 + 224);
    v31 = 0;
    v33[1] = 0;
    v29 = v33;
    v30 = 2;
    v32 = v8;
    v33[0] = v7;
    TlgWriteEx(&pCallbackContext, &unk_140391BBF, 2uLL, a4, v11, v12, 8u, &pData);
  }
}
