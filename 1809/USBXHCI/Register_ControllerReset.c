/*
 * XREFs of Register_ControllerReset @ 0x1C001C7FC
 * Callers:
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003180 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Register_SetClearSSICPortUnused @ 0x1C001D0D4 (Register_SetClearSSICPortUnused.c)
 *     Register_WaitForControllerReady @ 0x1C001D1DC (Register_WaitForControllerReady.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     Etw_StartDeviceFail @ 0x1C00398E0 (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (*v15)(void); // rax
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x3Cu,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = Register_WaitForControllerReady(a1);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( a2 || (XilRegister_ReadUlong(a1, v5 + 4) & 1) != 0 )
      {
        Register_SetClearSSICPortUnused(a1, 0LL);
        XilRegister_WriteUlong(a1, v5, 2LL);
        v9 = 0;
        v10 = 1;
        if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 272LL), 8).m128i_u8[0] & 2) != 0 )
        {
          Interval.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v9 = 1;
          v10 = 2;
        }
        v11 = v9;
        while ( (XilRegister_ReadUlong(a1, v5) & 2) != 0 )
        {
          if ( v9 == 100 )
          {
            LODWORD(v17) = v11;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              1u,
              6u,
              0x41u,
              (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
              v17);
            Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v13, 3LL);
            return (unsigned int)-1073741823;
          }
          Interval.QuadPart = -10000LL * v10;
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(v18) = v10;
          LODWORD(v17) = v9;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x42u,
            (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
            v17,
            v18);
          v11 += v10;
          v12 = 2 * v10;
          ++v9;
          if ( v10 == 16 )
            v12 = 16;
          v10 = v12;
        }
        LODWORD(v17) = v11;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x3Fu,
          (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
          v17);
        if ( v11 > 0x32 )
        {
          LODWORD(v17) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            6u,
            0x40u,
            (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
            v17);
        }
        v6 = Register_WaitForControllerReady(a1);
        v7 = *(_QWORD *)(a1 + 8);
        v4 = v6;
        if ( v6 < 0 )
        {
          v8 = 67;
          goto LABEL_5;
        }
        if ( (*(_BYTE *)(v7 + 288) & 0x10) != 0 )
        {
          Interval.QuadPart = -1000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v7 = *(_QWORD *)(a1 + 8);
        }
        v14 = *(_QWORD *)(v7 + 168);
        if ( v14 )
        {
          v15 = *(void (**)(void))(v14 + 32);
          if ( v15 )
            v15();
        }
        Register_RestoreRyzenFeatureBitsPostReset(a1);
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x3Eu,
          (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = 61;
LABEL_5:
      LODWORD(v17) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 72),
        2u,
        6u,
        v8,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v17);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
