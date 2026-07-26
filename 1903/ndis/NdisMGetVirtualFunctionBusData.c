/*
 * XREFs of NdisMGetVirtualFunctionBusData @ 0x1C00B1130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisMGetVirtualFunctionBusData(__int64 a1, __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int16 v7; // r14
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx

  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      111,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4784);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4816);
    if ( v11 )
      v9 = v10(v11, v7, a3, a4, a5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      112,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      v9);
  }
  return v9;
}
