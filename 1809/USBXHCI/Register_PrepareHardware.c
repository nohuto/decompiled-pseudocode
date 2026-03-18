/*
 * XREFs of Register_PrepareHardware @ 0x1C006014C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     Register_MapSecureMmio @ 0x1C005F8C8 (Register_MapSecureMmio.c)
 *     Register_ParseCapabilityRegister @ 0x1C005F990 (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int16 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2432))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2);
        ++i )
  {
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           i);
    if ( *(_BYTE *)v5 == 3 )
    {
      LODWORD(v16) = i;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0xCu,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v16);
      LODWORD(v19) = *(_DWORD *)(v5 + 12);
      LODWORD(v18) = *(_DWORD *)(v5 + 4);
      LODWORD(v17) = *(_DWORD *)(v5 + 8);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0xDu,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v17,
        v18,
        v19);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v6 = MmMapIoSpaceEx(*(_QWORD *)(v5 + 4), *(unsigned int *)(v5 + 12), 516LL);
        *(_QWORD *)(a1 + 24) = v6;
        if ( !v6 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            6u,
            0xEu,
            (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
          v8 = -1073741670;
          goto LABEL_23;
        }
        v7 = *(_DWORD *)(v5 + 12);
        *(_DWORD *)(a1 + 20) = v7;
        *(_BYTE *)(a1 + 16) = 1;
        LODWORD(v18) = v7;
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0xFu,
          (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
          v6,
          v18);
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v8 = -1073741670;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2u, 6u, 0x10u, (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
    goto LABEL_23;
  }
  if ( !Controller_IsSecureDevice(v9) || (v8 = Register_MapSecureMmio((_QWORD *)a1), v8 >= 0) )
  {
    v10 = Register_ParseCapabilityRegister(a1);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 17;
LABEL_15:
      LODWORD(v16) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        6u,
        v11,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v16);
      goto LABEL_23;
    }
    v10 = Register_BiosHandoff((_QWORD *)a1);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 18;
      goto LABEL_15;
    }
    v10 = Register_ControllerReset(a1, 0);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 19;
      goto LABEL_15;
    }
    if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = 2LL;
      v20 = 1uLL;
      v14 = (_QWORD *)(v12 + 272);
      do
      {
        *v14 |= *(_QWORD *)((char *)v14 + (_QWORD)&v20 - v12 - 272);
        ++v14;
        --v13;
      }
      while ( v13 );
    }
  }
LABEL_23:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      0x14u,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
