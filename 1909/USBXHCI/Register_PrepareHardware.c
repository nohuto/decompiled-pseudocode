/*
 * XREFs of Register_PrepareHardware @ 0x1C0068064
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     Register_MapSecureMmio @ 0x1C006768C (Register_MapSecureMmio.c)
 *     Register_ParseCapabilityRegister @ 0x1C0067778 (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned __int16 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 2432))(WPP_MAIN_CB.Dpc.ProcessorHistory) )
  {
LABEL_11:
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x10u,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
      goto LABEL_32;
    }
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) )
    {
      v8 = Register_MapSecureMmio((_QWORD *)a1);
      if ( v8 < 0 )
        goto LABEL_32;
    }
    v9 = Register_ParseCapabilityRegister(a1);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v9 = Register_BiosHandoff((_QWORD *)a1);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v9 = Register_ControllerReset(a1, 0);
        v8 = v9;
        if ( v9 >= 0 )
        {
          if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
          {
            v11 = *(_QWORD *)(a1 + 8);
            v12 = 2LL;
            v18 = 1uLL;
            v13 = (_QWORD *)(v11 + 336);
            do
            {
              *v13 |= *(_QWORD *)((char *)v13 + (_QWORD)&v18 - v11 - 336);
              ++v13;
              --v12;
            }
            while ( v12 );
          }
          goto LABEL_32;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v10 = 19;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v10 = 18;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v10 = 17;
    }
    LODWORD(v15) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      6u,
      v10,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v15);
    goto LABEL_32;
  }
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v4);
    if ( *(_BYTE *)v5 != 3 )
      goto LABEL_10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0xCu,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v15);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = *(_DWORD *)(v5 + 12);
        LODWORD(v16) = *(_DWORD *)(v5 + 4);
        LODWORD(v15) = *(_DWORD *)(v5 + 8);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0xDu,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v15,
          v16,
          v17);
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
      goto LABEL_10;
    v6 = MmMapIoSpaceEx(*(_QWORD *)(v5 + 4), *(unsigned int *)(v5 + 12), 516LL);
    *(_QWORD *)(a1 + 24) = v6;
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(a1 + 20) = v7;
    *(_BYTE *)(a1 + 16) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v7;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0xFu,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v6,
        v16);
    }
LABEL_10:
    if ( ++v4 >= (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2432))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a2) )
      goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      0xEu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
  v8 = -1073741670;
LABEL_32:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x14u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
