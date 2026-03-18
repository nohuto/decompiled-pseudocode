/*
 * XREFs of Register_ControllerReset @ 0x1C00200E4
 * Callers:
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003A08 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0020A5C (Register_SetClearSSICPortUnused.c)
 *     Register_WaitForControllerReady @ 0x1C0020B64 (Register_WaitForControllerReady.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     Etw_StartDeviceFail @ 0x1C003F150 (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // esi
  unsigned int v9; // r14d
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void (*v15)(void); // rax
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x3Cu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = Register_WaitForControllerReady(a1);
  v4 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v7 = 61;
LABEL_8:
    LODWORD(v17) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      v7,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v17);
    return v4;
  }
  if ( a2 || (XilRegister_ReadUlong(a1, v5 + 4) & 1) != 0 )
  {
    Register_SetClearSSICPortUnused(a1, 0LL);
    XilRegister_WriteUlong(a1, v5, 2LL);
    v8 = 0;
    v9 = 1;
    if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u8[0] & 2) != 0 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v8 = 1;
      v9 = 2;
    }
    v10 = v8;
    while ( (XilRegister_ReadUlong(a1, v5) & 2) != 0 )
    {
      if ( v8 == 100 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = v10;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            1u,
            6u,
            0x41u,
            (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
            v17);
        }
        Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v12, 3LL);
        return (unsigned int)-1073741823;
      }
      Interval.QuadPart = -10000LL * v9;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v9;
        LODWORD(v17) = v8;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x42u,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v17,
          v18);
      }
      v10 += v9;
      v11 = 2 * v9;
      ++v8;
      if ( v9 == 16 )
        v11 = 16;
      v9 = v11;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x3Fu,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v17);
    }
    if ( v10 > 0x32 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x40u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v17);
    }
    v6 = Register_WaitForControllerReady(a1);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v13 + 352) & 0x10) != 0 )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        v13 = *(_QWORD *)(a1 + 8);
      }
      v14 = *(_QWORD *)(v13 + 168);
      if ( v14 )
      {
        v15 = *(void (**)(void))(v14 + 32);
        if ( v15 )
          v15();
      }
      Register_RestoreRyzenFeatureBitsPostReset(a1);
      return v4;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v7 = 67;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      0x3Eu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
  return (unsigned int)-1073741823;
}
