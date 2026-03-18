/*
 * XREFs of HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002DB44
 * Callers:
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007378C (HUBREG_QueryUsbflagsValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

void __fastcall HUBREG_QueryUsbflagsAlternateSettingFilter(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r9
  PVOID PoolWithTag; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, _QWORD, unsigned int *, int *))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         a2,
         L",.",
         0LL,
         0LL,
         &v8,
         &v9) == -2147483643 )
  {
    if ( !v8 || (v8 & 1) != 0 )
    {
      v4 = 20;
      goto LABEL_12;
    }
    if ( v9 != 3 )
    {
      v4 = 21;
LABEL_12:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v4,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
      return;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v8 + 6LL, 0x64334855u);
    *(_QWORD *)(a1 + 2448) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = 22;
      goto LABEL_12;
    }
    memset(PoolWithTag, 0, v8 + 6LL);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           a2,
           L",.",
           v8,
           *(_QWORD *)(a1 + 2448) + 4LL,
           0LL,
           0LL);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 >= 0 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v7 + 1432), 4u, 5u, 0x18u, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
      **(_DWORD **)(a1 + 2448) = v8 >> 1;
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v7 + 1432), 2u, 5u, 0x17u, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
      ExFreePoolWithTag(*(PVOID *)(a1 + 2448), 0x64334855u);
      *(_QWORD *)(a1 + 2448) = 0LL;
    }
  }
}
