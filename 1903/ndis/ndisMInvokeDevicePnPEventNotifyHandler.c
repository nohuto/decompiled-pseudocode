/*
 * XREFs of ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00FF5E8
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeDevicePnPEventNotifyHandler(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // ebp
  __int64 result; // rax
  int v8; // edx
  char v9[4]; // [rsp+30h] [rbp-28h]

  v2 = a1[470];
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *(_DWORD *)(a2 + 8);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      251,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v9[0]);
  }
  if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, _QWORD))ndisVerifierNdisDispatch->NdisMiniportDevicePnPEventNotifyHandler)(
               a1[3],
               v3,
               a1,
               a1[620],
               *(_QWORD *)(v2 + 224));
  else
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 224))(a1[3], v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return WPP_RECORDER_SF_qD(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v8,
             13,
             252,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             (char)a1,
             v4);
  }
  return result;
}
