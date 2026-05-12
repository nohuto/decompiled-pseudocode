/*
 * XREFs of RaidPowerPassToMiniPort @ 0x1C0013118
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013050 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0016AD0 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     RaAdapterStartPowerIo @ 0x1C001327C (RaAdapterStartPowerIo.c)
 *     RaInitializePower @ 0x1C001EBF4 (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x1C003BD14 (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1C003D2C8 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x1C00449DC (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rcx
  _WORD *v10; // rbx
  PDEVICE_OBJECT *v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  struct _DEVICE_OBJECT *v14; // r9
  unsigned int started; // ebp
  __int64 v16; // r8
  __int64 Timer_high; // rdx
  int v19; // eax
  __int64 v20; // rcx
  char *v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h]
  __int64 v25; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 184);
  v7 = 1LL;
  v8 = a1;
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 4696);
  v10 = (_WORD *)(v3 + 4528);
  v11 = &WPP_GLOBAL_Control;
  if ( v9 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      58LL,
      &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      a2,
      v3 + 4528,
      v3);
  }
  RaInitializePower(v3, v7, a3, v11);
  v9 = *(_QWORD *)(v3 + 4696);
  if ( v9 )
  {
LABEL_4:
    *(_BYTE *)(v3 + 4704) = 1;
    v12 = v9 + 1088;
    v25 = v9 + 32;
    v24 = v9 + 1088;
    v26 = v9 + 832;
    v13 = *(_BYTE *)(v3 + 4705) != 0 ? 2304 : 256;
    if ( *(_BYTE *)(v3 + 418) == 1 )
    {
      *(_DWORD *)(v3 + 4552) = v13;
      *v10 = 8;
      *(_WORD *)(v3 + 4564) = 2;
      *(_QWORD *)(v3 + 4624) = 0LL;
      *(_QWORD *)(v3 + 4608) = a2;
      *(_BYTE *)(v3 + 4530) = 40;
      *(_DWORD *)(v3 + 4536) = 1397899864;
      *(_DWORD *)(v3 + 4540) = 1;
      *(_DWORD *)(v3 + 4544) = 168;
      *(_DWORD *)(v3 + 4548) = 36;
      v19 = *(_DWORD *)(v3 + 5760);
      *(_DWORD *)(v3 + 4580) = 128;
      *(_DWORD *)(v3 + 4568) = v19;
      *(_QWORD *)(v3 + 4592) = 0LL;
      *(_QWORD *)(v3 + 4584) = 1LL;
      *(_DWORD *)(v3 + 4648) = 144;
      v20 = v3 + 4528 + *(unsigned int *)(v3 + 4580);
      *(_WORD *)v20 = 1;
      *(_DWORD *)(v20 + 4) = 4;
      *(_WORD *)(v20 + 2) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v20 + 8) = 0;
      *(_BYTE *)(v20 + 10) = 0;
      v21 = (char *)v10 + *(unsigned int *)(v3 + 4648);
      *(_DWORD *)v21 = 97;
      *((_DWORD *)v21 + 1) = 12;
      *((_DWORD *)v21 + 4) = *(_DWORD *)(v5 + 32);
      *((_DWORD *)v21 + 3) = *(_DWORD *)(v5 + 24);
      v21[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4576) = 0LL;
      *v10 = 88;
      *(_BYTE *)(v3 + 4530) = 36;
      *(_QWORD *)(v3 + 4552) = 0LL;
      *(_DWORD *)(v3 + 4544) = 0;
      *(_DWORD *)(v3 + 4592) = *(_DWORD *)(v5 + 32);
      *(_DWORD *)(v3 + 4536) = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v3 + 4540) = v13;
      *(_DWORD *)(v3 + 4548) = *(_DWORD *)(v3 + 5760);
      *(_DWORD *)(v3 + 4532) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4528, v12);
    if ( WPP_GLOBAL_Control != v14
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( *(_BYTE *)(v3 + 4530) == 40 )
        v22 = *(_QWORD *)(v3 + 4632);
      else
        v22 = *(_QWORD *)(v3 + 4584);
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
        a2,
        v3 + 4528,
        v22,
        v3);
    }
    started = RaAdapterStartPowerIo(v8, a2, (int)v3 + 4528, (unsigned int)&v23, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (Timer_high & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, Timer_high, v16, a2, v3 + 4528, v3, started);
    }
    return started;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        59LL,
        &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
        a2,
        v3 + 4528,
        v3);
    }
    return 3221225495LL;
  }
}
