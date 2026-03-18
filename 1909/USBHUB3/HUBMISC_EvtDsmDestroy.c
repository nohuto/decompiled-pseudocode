/*
 * XREFs of HUBMISC_EvtDsmDestroy @ 0x1C002DC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_EvtDsmDestroy(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  PVOID *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0064018);
  v2 = v1;
  if ( v1[187] )
  {
    (*(void (**)(void))(*v1 + 520LL))();
    (*(void (__fastcall **)(_QWORD))(*v2 + 504LL))(v2[187]);
    v2[187] = 0LL;
  }
  v3 = (PVOID *)v2[330];
  if ( v3 )
  {
    if ( *v3 )
    {
      ExFreePoolWithTag(*v3, 0x68334855u);
      v3 = (PVOID *)v2[330];
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0x68334855u);
  }
  v4 = (void *)v2[269];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 265));
  v5 = (void *)v2[306];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x64334855u);
  v6 = (void *)v2[271];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x64334855u);
  v7 = (void *)v2[252];
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  v8 = (void *)v2[263];
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  v9 = (void *)v2[253];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x64334855u);
  v10 = (void *)v2[254];
  if ( v10 )
    ExFreePoolWithTag(v10, 0x64334855u);
  v11 = (void *)v2[257];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x64334855u);
  v12 = (void *)v2[321];
  if ( v12 )
    ExFreePoolWithTag(v12, 0x64334855u);
  v13 = (void *)v2[311];
  if ( v13 )
    ExFreePoolWithTag(v13, 0x64334855u);
  *((_DWORD *)v2 + 24) = 0;
  v14 = (void *)v2[13];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x64334855u);
    v2[13] = 0LL;
  }
  v15 = (void *)v2[17];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x64334855u);
    v2[17] = 0LL;
  }
  v16 = (void *)v2[15];
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x64334855u);
    v2[15] = 0LL;
  }
  if ( v2[31] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[31],
      "DSM Tag",
      7140LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[31] = 0LL;
  }
  v17 = v2[52];
  if ( v17 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[52],
      "DSM Tag",
      7140LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[52] = 0LL;
  }
  v18 = v2[193];
  if ( v18 )
  {
    LOBYTE(v17) = 1;
    ExDeleteTimer(v18, v17, 0LL, 0LL);
    v2[193] = 0LL;
  }
  if ( v2[302] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[302],
      "DSM Tag",
      7140LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[302] = 0LL;
  }
  if ( v2[54] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[54],
      "DSM Tag",
      7140LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[54] = 0LL;
  }
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2[1]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v19,
           "DSM Create Tag",
           7226LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
}
