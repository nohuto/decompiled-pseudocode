/*
 * XREFs of HUBCONNECTOR_DeRegisterPort @ 0x1C0078514
 * Callers:
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C0078E70 (HUBCONNECTOR_UnMapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBCONNECTOR_DeRegisterPort(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  _QWORD *v4; // r14
  _QWORD *i; // rax
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 56),
    0LL);
  if ( (*(_DWORD *)(a1 + 204) & 0x20) == 0 )
    goto LABEL_23;
  v4 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C0064130)
                + 40);
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v6[10] )
  {
    v6 = i - 10;
    if ( v4 == i )
      break;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      goto LABEL_7;
  }
  v6 = 0LL;
LABEL_7:
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 2u, 4u, 0x13u, (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids);
    v2 = -1073741823;
    goto LABEL_23;
  }
  v7 = *(_DWORD *)(a1 + 208);
  if ( v7 == 512 )
  {
    v6[7] = 0LL;
    v8 = 0LL;
  }
  else
  {
    if ( v7 != 768 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 1432),
          2u,
          6u,
          0x14u,
          (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
          *(_DWORD *)(a1 + 208));
      goto LABEL_23;
    }
    v8 = v6[7];
    v6[8] = 0LL;
  }
  if ( !v8 && !v6[8] )
  {
    v9 = v6[10];
    if ( *(_QWORD **)(v9 + 8) != v6 + 10 || (v10 = (_QWORD *)v6[11], (_QWORD *)*v10 != v6 + 10) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ExFreePoolWithTag(v6, 0x70334855u);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 204), 0xFFFFFFDF);
LABEL_23:
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C0064130);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v11 + 56));
  return v2;
}
