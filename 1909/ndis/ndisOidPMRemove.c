/*
 * XREFs of ndisOidPMRemove @ 0x1C0022E6C
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C0008570 (WPP_RECORDER_SF_qDd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0072A2C (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ndisOidPMRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // r14
  __int64 v7; // rbp
  struct _KSEMAPHORE *v8; // rbp
  unsigned int SetMiniport; // edi
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  const char *v15; // rdx
  int v16; // [rsp+20h] [rbp-38h]

  v3 = *(_DWORD *)(a3 + 32);
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      74,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      *(_DWORD *)(a3 + 32));
  }
  v7 = 3920LL;
  if ( v3 != -50265845 )
    v7 = 3952LL;
  v8 = (struct _KSEMAPHORE *)(a1 + v7);
  KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a3 + 88) |= 0x2000000u;
  SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v5);
  if ( SetMiniport && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = "OID_PM_REMOVE_WOL_PATTERN";
    if ( v3 != -50265845 )
      v15 = "OID_PM_REMOVE_PROTOCOL_OFFLOAD";
    WPP_RECORDER_SF_sL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v15, v10, v11, v16, (__int64)v15, SetMiniport);
  }
  KeReleaseSemaphore(v8, 0, 1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      v13,
      76,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v3,
      SetMiniport);
  }
  return SetMiniport;
}
