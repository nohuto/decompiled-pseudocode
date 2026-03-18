/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C002DF30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C002E05C (ACPIDispatchForwardOrFailPowerIrp.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C002E0E0 (ACPIDeviceIrpWaitWakeRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddqss @ 0x1C0062510 (WPP_RECORDER_SF_qddqss.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 result; // rax
  void *v8; // r8
  const char *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // r10
  void *v12; // rdx
  int v13; // r9d
  __int64 v14; // r9
  _BYTE v15[16]; // [rsp+60h] [rbp-18h] BYREF
  char v16; // [rsp+90h] [rbp+18h] BYREF
  char v17; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  v6 = DeviceExtension[1];
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( (DeviceExtension[119] & 0x100000000LL) != 0 && !DeviceExtension[79] )
  {
    v9 = (const char *)&unk_1C006FE7D;
    v10 = (const char *)&unk_1C006FE7D;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)DeviceExtension[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v10 = (const char *)DeviceExtension[71];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x1Au,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v9,
        v10);
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  }
  if ( (v6 & 0x102000000LL) != 0 && (v6 & 0x20) == 0 )
  {
    (*((void (__fastcall **)(_QWORD, char *, _BYTE *, char *))PciPmeInterface + 4))(
      DeviceExtension[92],
      &v16,
      v15,
      &v17);
    if ( v16 )
    {
      if ( (v5[1] & 0x800000000000000LL) == 0 )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  if ( *((_DWORD *)v5 + 122) < (signed int)a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v11 = v5[1];
    v12 = &unk_1C006FE7D;
    v8 = &unk_1C006FE7D;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = (void *)v5[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v8 = (void *)v5[71];
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v13 = 27;
    goto LABEL_27;
  }
  LODWORD(v8) = *((_DWORD *)v5 + 84);
  if ( *((_DWORD *)v5 + 123) < (int)v8 )
  {
    v14 = v5[1];
    v12 = &unk_1C006FE7D;
    if ( (v14 & 0x200000000000LL) != 0 )
      v12 = (void *)v5[70];
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v13 = 28;
LABEL_27:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, (_DWORD)v8, v13);
LABEL_28:
    a2->IoStatus.Status = -1073741436;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)v5 + 170);
  result = ACPIDeviceIrpWaitWakeRequest(a1, a2);
  if ( (_DWORD)result == -1073741802 )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    return 259LL;
  }
  return result;
}
