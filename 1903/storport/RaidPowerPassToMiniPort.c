/*
 * XREFs of RaidPowerPassToMiniPort @ 0x1C00112EC
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0015EE0 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0016690 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x1C00060E0 (RaSrbSetMiniportContext.c)
 *     RaAdapterStartPowerIo @ 0x1C0011454 (RaAdapterStartPowerIo.c)
 *     RaInitializePower @ 0x1C001A6B8 (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x1C0037BDC (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1C00394A8 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x1C00413D0 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v7; // r14d
  __int64 v8; // rcx
  _WORD *v9; // rbx
  __int64 v10; // r8
  int v11; // ecx
  struct _DEVICE_OBJECT *v12; // r10
  unsigned int started; // ebp
  __int64 v14; // r8
  __int64 Timer_high; // rdx
  int v17; // eax
  __int64 v18; // rcx
  char *v19; // rcx
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v21[0] = 0LL;
  v7 = a1;
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 4632);
  v9 = (_WORD *)(v3 + 4464);
  if ( v8 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      58LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      a2,
      v3 + 4464,
      v3);
  }
  RaInitializePower(v3);
  v8 = *(_QWORD *)(v3 + 4632);
  if ( v8 )
  {
LABEL_4:
    *(_BYTE *)(v3 + 4640) = 1;
    v10 = v8 + 1088;
    v21[2] = v8 + 32;
    v21[1] = v8 + 1088;
    v21[3] = v8 + 832;
    v11 = *(_BYTE *)(v3 + 4641) != 0 ? 2304 : 256;
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      *(_DWORD *)(v3 + 4488) = v11;
      *v9 = 8;
      *(_WORD *)(v3 + 4500) = 2;
      *(_QWORD *)(v3 + 4560) = 0LL;
      *(_QWORD *)(v3 + 4544) = a2;
      *(_BYTE *)(v3 + 4466) = 40;
      *(_DWORD *)(v3 + 4472) = 1397899864;
      *(_DWORD *)(v3 + 4476) = 1;
      *(_DWORD *)(v3 + 4480) = 168;
      *(_DWORD *)(v3 + 4484) = 36;
      v17 = *(_DWORD *)(v3 + 5624);
      *(_DWORD *)(v3 + 4516) = 128;
      *(_DWORD *)(v3 + 4504) = v17;
      *(_QWORD *)(v3 + 4528) = 0LL;
      *(_QWORD *)(v3 + 4520) = 1LL;
      *(_DWORD *)(v3 + 4584) = 144;
      v18 = v3 + 4464 + *(unsigned int *)(v3 + 4516);
      *(_WORD *)v18 = 1;
      *(_DWORD *)(v18 + 4) = 4;
      *(_WORD *)(v18 + 2) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v18 + 8) = 0;
      *(_BYTE *)(v18 + 10) = 0;
      v19 = (char *)v9 + *(unsigned int *)(v3 + 4584);
      *(_DWORD *)v19 = 97;
      *((_DWORD *)v19 + 1) = 12;
      *((_DWORD *)v19 + 4) = *(_DWORD *)(v4 + 32);
      *((_DWORD *)v19 + 3) = *(_DWORD *)(v4 + 24);
      v19[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4512) = 0LL;
      *v9 = 88;
      *(_BYTE *)(v3 + 4466) = 36;
      *(_QWORD *)(v3 + 4488) = 0LL;
      *(_DWORD *)(v3 + 4480) = 0;
      *(_DWORD *)(v3 + 4528) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v3 + 4472) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v3 + 4476) = v11;
      *(_DWORD *)(v3 + 4484) = *(_DWORD *)(v3 + 5624);
      *(_DWORD *)(v3 + 4468) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4464, v10);
    if ( WPP_GLOBAL_Control != v12
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( *(_BYTE *)(v3 + 4466) == 40 )
        v20 = *(_QWORD *)(v3 + 4568);
      else
        v20 = *(_QWORD *)(v3 + 4520);
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
        a2,
        v3 + 4464,
        v20,
        v3);
    }
    started = RaAdapterStartPowerIo(v7, a2, (int)v3 + 4464, (unsigned int)v21, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (Timer_high & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, Timer_high, v14, a2, v3 + 4464, v3, started);
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
        &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
        a2,
        v3 + 4464,
        v3);
    }
    return 3221225495LL;
  }
}
