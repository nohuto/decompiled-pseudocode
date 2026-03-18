/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x1C00F5D84
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00B7760 (NtUserInitializeGenericHidInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     rimHidP_GetCollectionDescription @ 0x1C00F0D4C (rimHidP_GetCollectionDescription.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00F37B0 (RIMIDECreatePseudoHIDDevice.c)
 */

__int64 __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  unsigned __int16 v6; // dx
  __int16 v7; // cx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp-61h]
  unsigned int v11[4]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v12[4]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v13; // [rsp+A0h] [rbp-9h]
  __int128 v14; // [rsp+B0h] [rbp+7h]
  __int128 v15; // [rsp+C0h] [rbp+17h]
  __int128 v16; // [rsp+D0h] [rbp+27h]

  v11[0] = 1;
  v4 = 0;
  if ( (int)rimHidP_GetCollectionDescription(*(_QWORD *)(a1 + 32), *(unsigned __int16 *)(a1 + 40)) >= 0 )
  {
    v5 = *(char **)(a1 + 48);
    if ( v5 )
      rimHidP_GetUsageValue(
        HidP_Feature,
        0xDu,
        0,
        0x55u,
        v11,
        *(struct _HIDP_PREPARSED_DATA **)(v13 + 32),
        v5,
        *(unsigned __int16 *)(a1 + 56));
    v10 = *(_QWORD *)(a1 + 24);
    v12[1] = v14;
    v12[0] = v13;
    v6 = *(_WORD *)(v13 + 2);
    v7 = *(_WORD *)v13;
    v12[2] = v15;
    v12[3] = v16;
    v8 = RIMIDECreatePseudoHIDDevice(v7, v6, v11[0], 1u, 0LL, v12, 1, 0, 0, v10);
    if ( v8 )
    {
      *a2 = v8;
      return 1;
    }
  }
  return v4;
}
