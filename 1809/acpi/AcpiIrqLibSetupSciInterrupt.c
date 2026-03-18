/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C0094260
 * Callers:
 *     OSInterruptVector @ 0x1C00B9728 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     IcAddPossibleReference @ 0x1C008F890 (IcAddPossibleReference.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00910F0 (IcCopyInputStateToDeviceState.c)
 *     ProcessorCopyData @ 0x1C0091D50 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1C00921A0 (IcClearPossibleData.c)
 *     IrqArbGetDeviceIrql @ 0x1C0092974 (IrqArbGetDeviceIrql.c)
 *     IcRemapInputs @ 0x1C0092A88 (IcRemapInputs.c)
 *     IcSetPossibleInput @ 0x1C0093910 (IcSetPossibleInput.c)
 *     IcCopyData @ 0x1C009447C (IcCopyData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00B88A8 (IrqPolicyGetDistributionDisposition.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00B89A8 (IrqLibpSetSciConnectionData.c)
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
  __int128 v8; // [rsp+58h] [rbp-60h] BYREF
  int v9; // [rsp+6Ch] [rbp-4Ch]
  _BYTE v10[40]; // [rsp+78h] [rbp-40h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  *UserData = 1;
  UserData[2] = 1;
  v2 = 3;
  UserData[8] = 0;
  UserData[12] = 0;
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
  v10[4] = 0;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             *(_QWORD *)(RootDeviceExtension + 736),
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v10,
             1,
             0,
             1,
             1,
             &v8);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v8;
    UserData[9] = v9;
    result = IrqArbGetDeviceIrql(UserData + 8, (_BYTE *)UserData + 40);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      result = IcSetPossibleInput(v4, (__int64)&v8, v2, 0);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v4, 0);
        result = ProcessorCopyData(0LL);
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
