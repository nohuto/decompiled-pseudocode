/*
 * XREFs of ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018F12C
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F4E0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018D860 (-ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018EE80 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_S @ 0x1C006C2CC (WPP_RECORDER_SF_S.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0188388 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0189234 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0189C04 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C0189D48 (-IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C018A340 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@.c)
 */

__int64 __fastcall CBaseInput::ivRootPnpCreated(
        CBaseInput *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3)
{
  void *v6; // rdx
  unsigned __int64 v7; // rsi
  char *v9; // rcx
  PVOID v10; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // r9d
  char *v18; // rcx
  _DWORD *v19; // rax
  struct _ETHREAD *CurrentThread; // r9
  int v21; // eax
  char v22; // [rsp+30h] [rbp-31h]
  struct _UNICODE_STRING v23; // [rsp+48h] [rbp-19h] BYREF
  void *v24; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-1h]
  _DWORD *v26; // [rsp+68h] [rbp+7h]
  char *v27; // [rsp+D0h] [rbp+6Fh] BYREF

  v6 = &WPP_349588ff992736496127141e84ae0ad6_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      12,
      15,
      (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
    v6 = &WPP_349588ff992736496127141e84ae0ad6_Traceguids;
  }
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  v7 = ((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL);
  if ( *(_BYTE *)(v7 + 0x30) <= 2u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gBaseLog,
        (_DWORD)v6,
        12,
        17,
        (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids,
        *(_QWORD *)((((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL)) + 0xD8));
    }
    v9 = *(char **)((((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL)) + 0x520);
    v10 = 0LL;
    v27 = 0LL;
    if ( v9 )
    {
      v11 = RawInputManagerDeviceObjectResolveHandle(v9, 3u, 0, (PVOID *)&v27);
      v13 = v11;
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v12,
            12,
            18,
            (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids,
            v11);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v14) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v14,
                12,
                19,
                (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
            }
          }
        }
        return v13;
      }
      v10 = v27;
      v23 = *(struct _UNICODE_STRING *)(v27 + 296);
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v24, 2120LL);
    if ( !v26 )
    {
      v13 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v17 = 23;
      v22 = 23;
      goto LABEL_24;
    }
    v16 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v7, &v23, (struct CIVSerializer *)&v24);
    v13 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v17 = 22;
      goto LABEL_23;
    }
    v16 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v24);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v16 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v7, &v23, (struct CIVSerializer *)&v24);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v18 = (char *)v24;
        *(_DWORD *)v24 = v25 - 16;
        v19 = v26;
        *(_QWORD *)(v18 + 4) = 1LL;
        *((_DWORD *)v18 + 3) = 0;
        *v19 = 1;
        CurrentThread = KeGetCurrentThread();
        v21 = IVSendPnP(v24, v25, CurrentThread, CurrentThread, this, *(unsigned __int8 *)(v7 + 48), a3);
        v13 = v21;
        if ( v21 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = v27;
        }
        else
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v15,
            12,
            24,
            (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids,
            v21);
          v10 = v27;
        }
        goto LABEL_32;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 21;
        goto LABEL_23;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 20;
LABEL_23:
      v22 = v16;
LABEL_24:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 12, v17, (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids, v22);
    }
LABEL_32:
    if ( v10 )
      ObfDereferenceObject(v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        12,
        25,
        (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
    }
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v24);
    return v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        12,
        16,
        (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
    }
  }
  return 0LL;
}
