/*
 * XREFs of Register_BiosHandoff @ 0x1C001FE14
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     XilRegister_ReadUchar @ 0x1C0020CE0 (XilRegister_ReadUchar.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     Etw_StartDeviceFail @ 0x1C003F150 (Etw_StartDeviceFail.c)
 *     Register_WriteSecureMmio @ 0x1C006869C (Register_WriteSecureMmio.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // rbp
  char Uchar; // al
  __int64 v4; // rcx
  char v5; // al
  int v6; // ebx
  int i; // r14d
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int Ulong; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  Interval.QuadPart = 0LL;
  v1 = a1[8];
  if ( v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        6u,
        0x32u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
    Uchar = XilRegister_ReadUchar(a1, v1 + 3);
    v4 = a1[1];
    v5 = Uchar | 1;
    v21 = v5;
    if ( *(_BYTE *)(v4 + 537) )
    {
      Register_WriteSecureMmio(a1, v1 + 3, 0LL, &v21);
    }
    else
    {
      *(_BYTE *)(v1 + 3) = v5;
      _InterlockedOr(v19, 0);
    }
    v6 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUchar(a1, v1 + 2) & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v9 = a1[1];
        v10 = 51;
        LODWORD(v20) = i;
        v11 = 4;
LABEL_18:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v9 + 72),
          v11,
          6u,
          v10,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v20);
        goto LABEL_22;
      }
      if ( !v6 )
        break;
      --v6;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = a1[1];
    if ( (*(_QWORD *)(v9 + 336) & 4) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_22;
      v10 = 52;
      LODWORD(v20) = 2000;
      v11 = 3;
      goto LABEL_18;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_QWORD *)(v9 + 72);
      LODWORD(v20) = 2000;
      WPP_RECORDER_SF_d(v12, 2u, 6u, 0x35u, (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids, v20);
      v9 = a1[1];
    }
    v13 = 1LL;
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 72LL),
      3u,
      6u,
      0x31u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
LABEL_22:
  if ( (XilRegister_ReadUlong(a1, a1[4] + 4LL) & 1) != 0 )
    goto LABEL_33;
  v9 = a1[1];
  v8 = 0x8000000000000000uLL;
  if ( *(__int64 *)(v9 + 336) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2u, 6u, 0x36u, (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
      v9 = a1[1];
    }
    v13 = 2LL;
LABEL_27:
    Etw_StartDeviceFail(v9, v8, v13);
    return (unsigned int)-1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2u, 6u, 0x37u, (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
  v15 = Register_ControllerStop(a1);
  v14 = v15;
  if ( v15 >= 0 )
  {
LABEL_33:
    if ( v1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v1 + 4);
      XilRegister_WriteUlong(a1, v1 + 4, Ulong & 0x1FFFDFFF);
    }
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = a1[1];
    LODWORD(v20) = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v16 + 72),
      2u,
      6u,
      0x38u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v20);
  }
  return v14;
}
