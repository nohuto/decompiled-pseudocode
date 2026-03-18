/*
 * XREFs of PopPlPublishSystemPowerChange @ 0x140304E08
 * Callers:
 *     PopPlNotifyDeviceDState @ 0x14017BBE0 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x14017F3E4 (PopPlNotifyDeviceFState.c)
 *     PopPlPublishInitialPowerDraw @ 0x140304C50 (PopPlPublishInitialPowerDraw.c)
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 * Callees:
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPlPublishSystemPowerChange(unsigned __int16 *a1, int a2, ULONG64 a3, ULONG a4)
{
  int v6; // eax
  __int64 result; // rax
  const GUID *v8; // [rsp+20h] [rbp-59h]
  const GUID *v9; // [rsp+28h] [rbp-51h]
  __int16 v10; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+44h] [rbp-35h] BYREF
  int v12; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 v18; // [rsp+90h] [rbp+17h]
  _DWORD v19[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  int *v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]

  if ( a2 )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v11 = a2;
      v10 = 1;
      v6 = *((_DWORD *)a1 + 7);
      v15 = 2LL;
      v12 = a2 + v6;
      v14 = &v10;
      v16 = v19;
      v18 = *((_QWORD *)a1 + 1);
      v19[0] = *a1;
      v20 = &v11;
      v22 = &v12;
      v17 = 2LL;
      v19[1] = 0;
      v21 = 4LL;
      v23 = 4LL;
      TlgWriteEx(&pCallbackContext, &unk_14039182A, a3, a4, v8, v9, 7u, &pData);
    }
    *((_DWORD *)a1 + 7) += a2;
    return (*((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 5))(*((_QWORD *)a1 + 4), *((unsigned int *)a1 + 7));
  }
  return result;
}
