/*
 * XREFs of PopPlRegisterDeviceIterator @ 0x140305460
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     PopPlRegisterComponent @ 0x140191878 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x140191988 (PopPlRegisterDevice.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopPlCalculateDevicePowerDraw @ 0x140304F64 (PopPlCalculateDevicePowerDraw.c)
 */

char __fastcall PopPlRegisterDeviceIterator(__int64 a1, _DWORD *a2, ULONG64 a3, ULONG a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG v8; // r9d
  unsigned __int64 i; // rdi
  __int64 v10; // rdi
  int v11; // eax
  ULONG64 v12; // r8
  ULONG v13; // r9d
  __int64 v14; // rax
  int v15; // ecx
  const GUID *v17; // [rsp+20h] [rbp-99h]
  const GUID *v18; // [rsp+28h] [rbp-91h]
  __int16 v19; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-75h] BYREF
  int v21; // [rsp+48h] [rbp-71h] BYREF
  int v22; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v23; // [rsp+50h] [rbp-69h] BYREF
  int v24; // [rsp+54h] [rbp-65h] BYREF
  int v25; // [rsp+58h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v27; // [rsp+80h] [rbp-39h]
  int v28; // [rsp+88h] [rbp-31h]
  int v29; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+98h] [rbp-21h]
  int v32; // [rsp+9Ch] [rbp-1Dh]
  __int64 v33; // [rsp+A0h] [rbp-19h]
  _DWORD v34[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v35; // [rsp+B0h] [rbp-9h]
  int v36; // [rsp+B8h] [rbp-1h]
  int v37; // [rsp+BCh] [rbp+3h]
  int *v38; // [rsp+C0h] [rbp+7h]
  int v39; // [rsp+C8h] [rbp+Fh]
  int v40; // [rsp+CCh] [rbp+13h]
  int *v41; // [rsp+D0h] [rbp+17h]
  int v42; // [rsp+D8h] [rbp+1Fh]
  int v43; // [rsp+DCh] [rbp+23h]
  int *v44; // [rsp+E0h] [rbp+27h]
  int v45; // [rsp+E8h] [rbp+2Fh]
  int v46; // [rsp+ECh] [rbp+33h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( PopPlRegisterDevice(v4, (__int64)a2, a3, a4) )
  {
    for ( i = 0LL;
          i < *(unsigned int *)(v4 + 820);
          PopPlRegisterComponent(*(_QWORD *)(*(_QWORD *)(v4 + 824) + 8 * i++), v6, v7, v8) )
    {
      ;
    }
    v20 = 0;
    v10 = *(_QWORD *)(v4 + 1176);
    v21 = 1;
    v11 = PopPlCalculateDevicePowerDraw(v4, &v21, &v20, 0LL);
    *(_DWORD *)(v10 + 32) = v11;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v22 = 0;
      v24 = 0;
      v23 = v11;
      v14 = *(_QWORD *)(v10 + 16);
      v19 = 1;
      v15 = *(_DWORD *)(v14 + 28);
      v29 = 0;
      v32 = 0;
      v34[1] = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v27 = &v19;
      v30 = v34;
      v33 = *(_QWORD *)(v4 + 224);
      v34[0] = *(unsigned __int16 *)(v4 + 216);
      v35 = &v22;
      v38 = &v23;
      v25 = v15;
      v41 = &v24;
      v28 = 2;
      v31 = 2;
      v44 = &v25;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      TlgWriteEx(&pCallbackContext, &unk_140391873, v12, v13, v17, v18, 9u, &pData);
    }
    *a2 += *(_DWORD *)(v10 + 32);
  }
  return 1;
}
