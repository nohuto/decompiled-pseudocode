/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C009D3A4
 * Callers:
 *     OSInterruptVector @ 0x1C00BE308 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0099B20 (IcCopyInputStateToDeviceState.c)
 *     ProcessorCopyData @ 0x1C009A850 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1C009ACE0 (IcClearPossibleData.c)
 *     IrqArbGetDeviceIrql @ 0x1C009B360 (IrqArbGetDeviceIrql.c)
 *     IcRemapInputs @ 0x1C009B490 (IcRemapInputs.c)
 *     IcSetPossibleInput @ 0x1C009C164 (IcSetPossibleInput.c)
 *     IcCopyData @ 0x1C009D5C8 (IcCopyData.c)
 *     IcAddPossibleReference @ 0x1C009D714 (IcAddPossibleReference.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00BE3CC (IrqPolicyGetDistributionDisposition.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00BE4D4 (IrqLibpSetSciConnectionData.c)
 */

__int64 AcpiIrqLibSetupSciInterrupt()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *UserData; // rbx
  char v2; // bp
  ULONGLONG v3; // rdx
  unsigned int v4; // edi
  char v5; // cl
  int v6; // eax
  __int64 result; // rax
  _OWORD v8[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v9[40]; // [rsp+70h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(v8, 0, sizeof(v8));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  *UserData = 1;
  v2 = 3;
  UserData[2] = 1;
  UserData[11] = 2;
  v3 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  if ( (unsigned int)v3 >= 0x10 )
  {
    v4 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  }
  else
  {
    v4 = *((_DWORD *)&IsaVectorOverrides + 2 * v3);
    v5 = *((_BYTE *)&IsaVectorOverrides + 8 * v3 + 4);
    if ( v5 != -1 )
    {
      v6 = UserData[11];
      v2 = *((_BYTE *)&IsaVectorOverrides + 8 * v3 + 4);
      if ( (v5 & 1) == 0 )
        v6 = 1;
      UserData[11] = v6;
    }
  }
  UserData[22] = v4;
  IrqLibSciGsiv = v4;
  RtlAddRange(RangeList, v3, v3, 0, 0x12u, UserData, *(PVOID *)(RootDeviceExtension + 736));
  v9[4] = 0;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, _DWORD, int, int, _OWORD *))ProcessorReserveIdtEntries)(
             *(_QWORD *)(RootDeviceExtension + 736),
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v9,
             1,
             0,
             1,
             1,
             v8);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v8[0];
    UserData[9] = DWORD1(v8[1]);
    result = IrqArbGetDeviceIrql(UserData + 8, (_BYTE *)UserData + 40);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      result = IcSetPossibleInput(v4, (__int64)v8, v2, 0);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v4, 0LL);
        result = ProcessorCopyData(0);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState((__int64)&IrqLibArbiterInstance, 0);
            result = IcCopyData(0LL);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(UserData + 8);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
