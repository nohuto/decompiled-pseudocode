/*
 * XREFs of IrqArbpSetDeviceProperties @ 0x1C00988AC
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0099C90 (IrqArbCommitAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B6A34 (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C0098398 (IrqPolicySetDeviceAffinity.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0099A20 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, struct _RANGE_LIST_ITERATOR *a2)
{
  PVOID *p_Owner; // rax
  char v4; // di
  struct _DEVICE_OBJECT *Owner; // rsi
  char v6; // r15
  unsigned int v7; // r14d
  PRTL_RANGE v8; // rcx
  NTSTATUS DeviceIdtAssignment; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  _DWORD *UserData; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *Data; // rsi
  __int128 v15; // xmm0
  unsigned int v16; // edi
  unsigned int v17; // eax
  _DWORD *v18; // rbx
  __int64 v19; // r13
  int v20; // eax
  NTSTATUS NextRange; // eax
  PRTL_RANGE Range; // [rsp+40h] [rbp-59h] BYREF
  PVOID *v24; // [rsp+48h] [rbp-51h]
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-49h]
  struct _RANGE_LIST_ITERATOR v26; // [rsp+58h] [rbp-41h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v28[8]; // [rsp+98h] [rbp-1h] BYREF

  v26 = *a2;
  memset(v28, 0, sizeof(v28));
  p_Owner = &a1->Owner;
  v4 = 0;
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v6 = 0;
  v7 = 0;
  v24 = &a1->Owner;
  v8 = a1;
  Pdo = Owner;
  Iterator = v26;
  Range = a1;
  while ( 1 )
  {
    if ( v8->Owner == *p_Owner )
    {
      v10 = IrqArbGsivFromIrq(LODWORD(v8->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v10, 0LL, v28);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v11 = v28[6];
      v7 += v28[6];
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v4 )
      {
        IrqPolicySetDeviceAffinity(Owner, (unsigned __int16 *)v28);
        v11 = v28[6];
        v4 = 1;
      }
      if ( v7 > v11 && UserData[2] == 3 )
        v6 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    v8 = Range;
    p_Owner = v24;
  }
  if ( !v7 )
    return (unsigned int)DeviceIdtAssignment;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 88 * v7 + 8, 0x49706341u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 1, 0, 0x5CuLL);
    v15 = *(_OWORD *)&v26.RangeListHead;
    *Data = v7;
    Range = a1;
    *(_OWORD *)&Iterator.RangeListHead = v15;
    v16 = v6 != 0 ? v7 : 0;
    *(_OWORD *)&Iterator.Current = *(_OWORD *)&v26.Current;
    while ( 1 )
    {
      if ( a1->Owner == *v24 )
      {
        v17 = IrqArbGsivFromIrq(LODWORD(a1->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Pdo, v17, 0LL, v28);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_28;
        if ( v6 )
          v16 -= v28[6];
        v18 = Range->UserData;
        v19 = 22LL * v16;
        memmove(&Data[v19 + 2], v18 + 8, 88LL * v28[6]);
        v20 = v18[1];
        if ( (v20 & 0x10) != 0 && v18[2] == 1 )
        {
          Data[v19 + 17] |= 1u;
          v20 = v18[1];
        }
        if ( !v6 )
          v16 += v28[6];
        v18[1] = v20 & 0xFFFFFFFE;
      }
      NextRange = RtlGetNextRange(&Iterator, &Range, 1u);
      if ( v16 >= v7 || NextRange == -2147483622 )
        break;
      a1 = Range;
    }
    DeviceIdtAssignment = IoSetDevicePropertyData(
                            Pdo,
                            &INTERRUPT_CONNECTION_DATA_PKEY,
                            0,
                            0,
                            0x1003u,
                            88 * v7 + 8,
                            Data);
LABEL_28:
    ExFreePoolWithTag(Data, 0);
    return (unsigned int)DeviceIdtAssignment;
  }
  return 3221225626LL;
}
