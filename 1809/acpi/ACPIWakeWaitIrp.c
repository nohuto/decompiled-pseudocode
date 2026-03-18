/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C002CF40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C002D06C (ACPIDispatchForwardOrFailPowerIrp.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C002D0F0 (ACPIDeviceIrpWaitWakeRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddqss @ 0x1C0060590 (WPP_RECORDER_SF_qddqss.c)
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
  _BYTE v14[16]; // [rsp+60h] [rbp-18h] BYREF
  char v15; // [rsp+90h] [rbp+18h] BYREF
  char v16; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  v6 = DeviceExtension[1];
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( (DeviceExtension[119] & 0x100000000LL) != 0 && !DeviceExtension[79] )
  {
    v9 = (const char *)&unk_1C006E28A;
    v10 = (const char *)&unk_1C006E28A;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)DeviceExtension[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v10 = (const char *)DeviceExtension[71];
    }
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
      &v15,
      v14,
      &v16);
    if ( v15 )
    {
      if ( (v5[1] & 0x800000000000000LL) == 0 )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  if ( *((_DWORD *)v5 + 122) < (signed int)a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v11 = v5[1];
    v12 = &unk_1C006E28A;
    v8 = &unk_1C006E28A;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = (void *)v5[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v8 = (void *)v5[71];
    }
    v13 = 27;
    goto LABEL_22;
  }
  LODWORD(v8) = *((_DWORD *)v5 + 84);
  if ( *((_DWORD *)v5 + 123) < (int)v8 )
  {
    v12 = &unk_1C006E28A;
    if ( (v5[1] & 0x200000000000LL) != 0 )
      v12 = (void *)v5[70];
    v13 = 28;
LABEL_22:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, (_DWORD)v8, v13);
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
