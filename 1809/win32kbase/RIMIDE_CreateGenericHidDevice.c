/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x1C01209A8
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00EFC90 (NtUserInitializeGenericHidInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC (RIMIDECreatePseudoHIDDevice.c)
 */

__int64 __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7; // eax
  char *v8; // rcx
  __int16 v9; // dx
  __int16 v10; // cx
  __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp-61h]
  unsigned int v14[4]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v15[4]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v16[4]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = 0;
  v4 = *(unsigned __int16 *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 32);
  v14[0] = 1;
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
           v6,
           v4,
           1LL,
           v16);
  else
    v7 = -1073741637;
  if ( v7 >= 0 )
  {
    v8 = *(char **)(a1 + 48);
    if ( v8 )
      rimHidP_GetUsageValue(
        HidP_Feature,
        0xDu,
        0,
        0x55u,
        v14,
        *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)&v16[0] + 32LL),
        v8,
        *(unsigned __int16 *)(a1 + 56));
    v13 = *(_QWORD *)(a1 + 24);
    v15[1] = v16[1];
    v15[0] = v16[0];
    v9 = *(_WORD *)(*(_QWORD *)&v16[0] + 2LL);
    v10 = **(_WORD **)&v16[0];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v11 = RIMIDECreatePseudoHIDDevice(v10, v9, v14[0], 1u, 0LL, v15, 1, 0, 0, v13);
    if ( v11 )
    {
      *a2 = v11;
      return 1;
    }
  }
  return v2;
}
