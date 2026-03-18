/*
 * XREFs of ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018CC90
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00732C0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A5F10 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A7CC0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018B670 (-ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_S @ 0x1C005836C (WPP_RECORDER_SF_S.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0186198 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0186200 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0187044 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C0187B58 (-IVSendPnP@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C0189508 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivRootPnp(
        CBaseInput *this,
        struct DEVICEINFO *a2,
        int a3,
        const struct CONTAINER_ID *a4)
{
  struct DEVICEINFO *v6; // rdi
  int v9; // eax
  struct RawInputManagerDeviceObject *v10; // rdx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r9d
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  struct _ETHREAD *CurrentThread; // r9
  char v19; // [rsp+28h] [rbp-58h]
  void *v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        12,
        26,
        (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gBaseLog,
        (_DWORD)a2,
        12,
        27,
        (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids,
        *((_QWORD *)v6 + 27));
    }
  }
  if ( *((_BYTE *)v6 + 48) > 2u )
    return 0LL;
  if ( a3 == 2 )
  {
    v9 = *((_DWORD *)v6 + 46);
    if ( (v9 & 0x20000000) != 0 )
    {
      v10 = (struct RawInputManagerDeviceObject *)*((_QWORD *)v6 + 4);
      *((_DWORD *)v6 + 46) = v9 & 0xDFFFFFFF;
      CBaseInput::ivRootPnpCreated(this, v10, a4);
    }
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v20, 32LL);
  v11 = v22;
  if ( v22 )
  {
    v12 = CIVSerializer::Serialize(
            (CIVSerializer *)&v20,
            (struct _UNICODE_STRING *)(v22 + 8),
            (const struct _UNICODE_STRING *)v6 + 13,
            1);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 30;
        goto LABEL_16;
      }
    }
    else
    {
      v12 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v20);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v15 = v20;
        *((_DWORD *)v20 + 1) = 1;
        v15[1] = 1LL;
        v16 = v22;
        *(_DWORD *)v15 = -16;
        *(_DWORD *)v16 = a3;
        *(_DWORD *)(v16 + 24) = *((unsigned __int8 *)v6 + 48);
        v12 = CIVSerializer::Serialize(
                (CIVSerializer *)&v20,
                (struct _UNICODE_STRING *)(v16 + 8),
                (const struct _UNICODE_STRING *)v6 + 13,
                0);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v17 = v20;
          *(_DWORD *)v20 = v21 - 16;
          v17[1] = 1;
          *((_QWORD *)v17 + 1) = 1LL;
          *(_DWORD *)v22 = a3;
          CurrentThread = KeGetCurrentThread();
          v12 = IVSendPnP(v20, v21, CurrentThread, CurrentThread, this, *((unsigned __int8 *)v6 + 48), a4);
          v13 = v12;
          if ( v12 >= 0 )
          {
LABEL_28:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v11) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v11,
                  12,
                  33,
                  (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids);
              }
            }
            goto LABEL_31;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = 32;
            goto LABEL_16;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 29;
          goto LABEL_16;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 28;
LABEL_16:
        v19 = v12;
LABEL_17:
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_D(
          (_DWORD)gBaseLog,
          v11,
          12,
          v14,
          (__int64)&WPP_349588ff992736496127141e84ae0ad6_Traceguids,
          v19);
        goto LABEL_28;
      }
    }
  }
  else
  {
    v13 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 31;
      v19 = 23;
      goto LABEL_17;
    }
  }
LABEL_31:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v20);
  return v13;
}
