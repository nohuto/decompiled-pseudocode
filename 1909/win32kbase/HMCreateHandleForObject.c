/*
 * XREFs of HMCreateHandleForObject @ 0x1C00623F0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0062340 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A8980 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0028C7C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0061E30 (-HMGrowHandleTable@@YAHXZ.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     EtwTraceUserCreateHandle @ 0x1C0062580 (EtwTraceUserCreateHandle.c)
 */

__int64 __fastcall HMCreateHandleForObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r14
  char *v9; // rdx
  bool v10; // cc
  __int64 v11; // rbp
  unsigned int EtwUserHandleType; // eax
  __int64 v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)&v15,
    a2,
    a3);
  v5 = 0LL;
  if ( (v4 == 19 || v4 == 22) && a1 )
  {
    while ( 1 )
    {
      if ( qword_1C0210700 )
      {
        v6 = &qword_1C0210700;
        goto LABEL_5;
      }
      if ( qword_1C02106F8 )
        break;
      if ( !(unsigned int)HMGrowHandleTable() )
        return v5;
    }
    v6 = &qword_1C02106F8;
LABEL_5:
    v7 = *v6;
    v8 = gpKernelHandleTable;
    v9 = (char *)qword_1C0210758 + 32 * *v6;
    v10 = (unsigned int)*v6 <= giheLast;
    v11 = 3 * *v6;
    *v6 = *((_QWORD *)gpKernelHandleTable + 3 * *v6);
    if ( !v10 )
      giheLast = v7;
    v9[24] = v4;
    v8[v11] = a1;
    *(_QWORD *)a1 = (int)v7 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C0210758
                                                                     + v7 * (unsigned int)dword_1C0210760
                                                                     + 26) << 16);
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    EtwUserHandleType = GetEtwUserHandleType(v4);
    EtwTraceUserCreateHandle(*(void **)a1, EtwUserHandleType, 0);
    if ( v4 == 19 )
    {
      RawInputManagerDeviceObjectReference(*(_QWORD *)(a1 + 32));
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 16);
      RawInputManagerDeviceObjectReference(*(_QWORD *)(v14 + 32));
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    }
    v8[v11 + 2] = 0LL;
    return v8[v11];
  }
  return v5;
}
