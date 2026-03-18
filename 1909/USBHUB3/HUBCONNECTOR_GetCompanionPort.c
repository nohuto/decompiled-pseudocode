/*
 * XREFs of HUBCONNECTOR_GetCompanionPort @ 0x1C007874C
 * Callers:
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C0030174 (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0073400 (HUBFDO_IoctlGetPortConnectorProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBCONNECTOR_GetCompanionPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // r15
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  int v11; // ecx
  bool v12; // zf
  int v14; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 204) & 0x20) == 0 )
    return v2;
  if ( a2 > 1u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_DWORD *)(a1 + 208);
      v6 = 21;
      v7 = *(_QWORD *)(a1 + 1432);
      v14 = v5;
LABEL_5:
      WPP_RECORDER_SF_d(v7, 2u, 6u, v6, (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids, v14);
      return v2;
    }
    return v2;
  }
  v8 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C0064130)
                + 40);
  for ( i = (_QWORD *)*v8; ; i = (_QWORD *)v10[10] )
  {
    v10 = i - 10;
    if ( v8 == i )
      break;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      goto LABEL_11;
  }
  v10 = 0LL;
LABEL_11:
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 2u, 4u, 0x16u, (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids);
    return v2;
  }
  v11 = *(_DWORD *)(a1 + 208);
  if ( v11 == 512 )
  {
    if ( !a2 )
      return v10[8];
    v12 = a2 == 1;
    goto LABEL_24;
  }
  if ( v11 != 768 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v2;
    v14 = *(_DWORD *)(a1 + 208);
    v6 = 23;
    v7 = *(_QWORD *)(a1 + 1432);
    goto LABEL_5;
  }
  if ( !a2 )
    return v10[7];
  if ( a2 == 1 )
  {
    v2 = v10[8];
    v12 = a1 == v2;
LABEL_24:
    if ( v12 )
      return v10[9];
  }
  return v2;
}
