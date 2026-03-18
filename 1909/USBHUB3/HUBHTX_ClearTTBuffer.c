/*
 * XREFs of HUBHTX_ClearTTBuffer @ 0x1C0006470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C0006258 (HUBHTX_GetClearTtBufferInfoForEndpoint.c)
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

_UNKNOWN **__fastcall HUBHTX_ClearTTBuffer(__int64 a1, __int64 a2, __int64 a3, char a4, __int16 a5)
{
  int v9; // r15d
  _QWORD *v10; // rdi
  __int16 v11; // r14
  int v12; // r15d
  __int64 v13; // rax
  int ClearTtBufferInfoForEndpoint; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ebx
  _UNKNOWN **result; // rax
  unsigned __int16 v20; // r9
  _QWORD *PoolWithTag; // rax
  char v22; // al
  _QWORD v23[14]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v24; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+D8h] [rbp+67h] BYREF

  memset(v23, 0, 0x38uLL);
  v9 = *(_DWORD *)(a1 + 40);
  v24 = 0;
  v10 = 0LL;
  v25 = 0LL;
  v11 = 1;
  if ( (v9 & 1) != 0 && a2 && (v9 & 0x1000) == 0 )
  {
    v12 = v9 & 0x800;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v13,
      "ClearTTBuffer Tag",
      5338LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    ClearTtBufferInfoForEndpoint = HUBHTX_GetClearTtBufferInfoForEndpoint(a2, a3, a4, &v24);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v15,
      "ClearTTBuffer Tag",
      5346LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    if ( ClearTtBufferInfoForEndpoint < 0 )
    {
LABEL_19:
      if ( v25 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x68334855u);
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 528))(*(_QWORD *)(a1 + 376), a3);
    }
    v16 = *(_QWORD *)(a1 + 16);
    LODWORD(v23[0]) = 56;
    v23[3] = 0x100000001LL;
    v23[4] = v16;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v23,
            v17,
            &v25);
    if ( v18 < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v20 = 117;
      goto LABEL_8;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xB8uLL, 0x68334855u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xA8uLL);
      v10[22] = a3;
      v10[21] = a1;
      *v10 = v25;
      *((_BYTE *)v10 + 152) = v10[19] & 0x1C | 0x23;
      if ( v12 )
      {
        *((_WORD *)v10 + 77) = 0;
        v22 = 9;
      }
      else
      {
        *((_WORD *)v10 + 77) = v24;
        v22 = 8;
      }
      *((_BYTE *)v10 + 153) = v22;
      if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
        v11 = a5;
      *((_WORD *)v10 + 78) = v11;
      *((_WORD *)v10 + 79) = 0;
      result = (_UNKNOWN **)HUBMISC_ControlTransfer(
                              a1,
                              *(_QWORD *)(a1 + 248),
                              (_DWORD)v10,
                              (_DWORD)v10,
                              (__int64)HUBHTX_ClearTtBufferControlTransferComplete,
                              0LL,
                              0,
                              0,
                              *(_BYTE *)(a1 + 2272));
      v18 = (int)result;
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 118;
LABEL_8:
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                *(_QWORD *)(a1 + 2520),
                                2u,
                                3u,
                                v20,
                                (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
                                v18);
      }
    }
LABEL_18:
    if ( v18 >= 0 )
      return result;
    goto LABEL_19;
  }
  return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 528))(*(_QWORD *)(a1 + 376), a3);
}
