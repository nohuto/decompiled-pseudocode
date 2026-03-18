/*
 * XREFs of ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_s @ 0x1C010B84C (WPP_RECORDER_SF_s.c)
 *     isChildPartition @ 0x1C010FE74 (isChildPartition.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0123B30 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C01256D8 (rimDoVirtRimDevChange.c)
 *     rimProcessCompleteFrame @ 0x1C0126B0C (rimProcessCompleteFrame.c)
 *     RIMVirtProcessHidRawInput @ 0x1C0128AE0 (RIMVirtProcessHidRawInput.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0153A10 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C0154228 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVRawInputPacketForRimDev@@YAJPEAU_IVRawInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01542F8 (-IVDeSerializeIVRawInputPacketForRimDev@@YAJPEAU_IVRawInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C015439C (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@IEAAJXZ @ 0x1C0156A3C (-ivChildLoop@CBaseInput@@IEAAJXZ.c)
 */

__int64 __fastcall CHidInput::ivCallback(CHidInput *this, _QWORD *a2)
{
  unsigned int *v4; // rsi
  __int64 v5; // rax
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct RIMCOMPLETEFRAME *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int PacketForRimDev; // eax
  unsigned __int16 v13; // r9
  unsigned __int64 v14; // rax
  int v15; // r8d
  _BYTE *v16; // rcx
  unsigned int v17; // ebx
  void *v18; // rax
  unsigned __int16 v19; // r9
  int v20; // ebx
  __int64 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-58h]
  UNICODE_STRING String1; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  char v29; // [rsp+70h] [rbp-10h]
  struct RIMCOMPLETEFRAME *v30; // [rsp+C8h] [rbp+48h] BYREF
  int v31; // [rsp+D0h] [rbp+50h] BYREF
  int v32; // [rsp+D4h] [rbp+54h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0xDu,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  v4 = (unsigned int *)a2[13];
  if ( !(unsigned int)isChildPartition() )
    goto LABEL_47;
  switch ( v4[2] )
  {
    case 1u:
      goto LABEL_39;
    case 2u:
      WPP_RECORDER_SF_s(
        *((_QWORD *)this + 131),
        4u,
        0x11u,
        0x15u,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        (const struct _MCGEN_TRACE_CONTEXT *)"IV_PACKET_TYPE_PNP_DATA");
      v14 = *((_QWORD *)v4 + 4) & 0xFFFFFFFFFFFFFFFEuLL;
      v25 = v4;
      v26 = 0LL;
      *((_QWORD *)v4 + 4) = (char *)v4 + v14;
      v15 = v4[4];
      v16 = (_BYTE *)*((_QWORD *)this + 2);
      String1 = *(UNICODE_STRING *)(v4 + 6);
      v27 = 0LL;
      v28 = 0LL;
      v29 = 1;
      rimDoVirtRimDevChange(v16, &String1, v15);
      goto LABEL_27;
    case 3u:
      goto LABEL_39;
    case 4u:
      WPP_RECORDER_SF_s(
        *((_QWORD *)this + 131),
        4u,
        0x11u,
        0x11u,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        (const struct _MCGEN_TRACE_CONTEXT *)"IV_PACKET_TYPE_PNP_CREATE_DATA");
      v25 = v4;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 1;
      PacketForRimDev = IVDeSerializeIVPnpCreatePacketForRimDev(
                          (struct _IVPnpCreatePacket *)v4,
                          (struct CIVSerializer *)&v25);
      if ( PacketForRimDev < 0 )
      {
        v13 = 20;
      }
      else
      {
        if ( v4[4] != 1 )
          goto LABEL_27;
        WPP_RECORDER_SF_s(
          *((_QWORD *)this + 131),
          4u,
          0x11u,
          0x12u,
          (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
          (const struct _MCGEN_TRACE_CONTEXT *)"RIM_DEVICE_CREATED");
        PacketForRimDev = RIMVirtDeviceClassNotify(*((char **)this + 2), (__int64)(v4 + 6));
        if ( PacketForRimDev >= 0 )
          goto LABEL_27;
        v13 = 19;
      }
      goto LABEL_32;
    case 5u:
LABEL_39:
      WPP_RECORDER_SF_d(
        *((_QWORD *)this + 131),
        4u,
        0x11u,
        0xEu,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        v4[2]);
      v17 = *v4;
      Win32FreePool(*((_QWORD *)this + 135));
      v18 = Win32AllocPoolZInit(v17, 0x63725649u);
      *((_QWORD *)this + 135) = v18;
      if ( v18 )
      {
        if ( gpfnIVRecv )
          v20 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, CHidInput *, __int64 (__fastcall *)(void *, void *)))gpfnIVRecv)(
                  v18,
                  *v4,
                  a2[16],
                  a2[17],
                  this,
                  CBaseInput::_ivCallback);
        else
          v20 = -1073741637;
        if ( v20 >= 0 )
          goto LABEL_48;
        Win32FreePool(*((_QWORD *)this + 135));
        *((_QWORD *)this + 135) = 0LL;
        v19 = 16;
        LODWORD(v23) = v20;
      }
      else
      {
        v19 = 15;
        LODWORD(v23) = -1073741801;
      }
      WPP_RECORDER_SF_d(
        *((_QWORD *)this + 131),
        2u,
        0x11u,
        v19,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        v23);
      break;
    case 6u:
      WPP_RECORDER_SF_s(
        *((_QWORD *)this + 131),
        4u,
        0x11u,
        0x17u,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        (const struct _MCGEN_TRACE_CONTEXT *)"IV_PACKET_TYPE_RAW_INPUT_DATA");
      v25 = v4;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 1;
      PacketForRimDev = IVDeSerializeIVRawInputPacketForRimDev(
                          (struct _IVRawInputPacket *)v4,
                          (struct CIVSerializer *)&v25);
      if ( PacketForRimDev < 0 )
      {
        v13 = 25;
      }
      else
      {
        PacketForRimDev = RIMVirtProcessHidRawInput(
                            *((_QWORD *)this + 2),
                            (const UNICODE_STRING *)v4 + 1,
                            *((const void **)v4 + 5),
                            v4[8]);
        if ( PacketForRimDev >= 0 )
        {
LABEL_27:
          Win32FreePool(*((_QWORD *)this + 135));
          *((_QWORD *)this + 135) = 0LL;
          CIVSerializer::~CIVSerializer((CIVSerializer *)&v25);
          break;
        }
        v13 = 24;
      }
LABEL_32:
      LODWORD(v22) = PacketForRimDev;
      WPP_RECORDER_SF_d(
        *((_QWORD *)this + 131),
        2u,
        0x11u,
        v13,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        v22);
      goto LABEL_27;
    case 7u:
      goto LABEL_39;
    case 8u:
      WPP_RECORDER_SF_s(
        *((_QWORD *)this + 131),
        4u,
        0x11u,
        0x1Au,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        (const struct _MCGEN_TRACE_CONTEXT *)"IV_PACKET_TYPE_TOUCH_INPUT_DATA");
      v25 = v4;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 1;
      if ( IVDeSerializeIVTouchInputPacket((struct _IVTouchInputPacket *)v4, (struct CIVSerializer *)&v25) >= 0 )
      {
        v5 = *((_QWORD *)this + 2);
        if ( !*(_BYTE *)(v5 + 81) && !*(_BYTE *)(v5 + 80) )
        {
          ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v31, 1, 0);
          RIMLockExclusive(*((_QWORD *)this + 2) + 104LL);
          v6 = 0;
          v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
          if ( v7 )
          {
            while ( !RtlEqualUnicodeString((PCUNICODE_STRING)v4 + 1, (PCUNICODE_STRING)(v7 + 208), 0) )
            {
              v7 = *(_QWORD *)(v7 + 40);
              if ( !v7 )
                goto LABEL_20;
            }
            v6 = 1;
          }
LABEL_20:
          v8 = *((_QWORD *)this + 2) + 104LL;
          *(_QWORD *)(v8 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v8, 0LL);
          KeLeaveCriticalRegion();
          if ( v6 )
          {
            v30 = 0LL;
            rimGetCompleteFrameFromIVCompleteFrame((__int64)(v4 + 4), &v30);
            v9 = v30;
            if ( v30 )
            {
              RIMLockExclusive(*((_QWORD *)this + 2) + 104LL);
              RIMLockExclusive(*((_QWORD *)this + 2) + 568LL);
              *((_QWORD *)v9 + 4) = *(_QWORD *)(v7 + 16);
              rimProcessCompleteFrame(*((HANDLE **)this + 2), (struct RIMDEV *)v7, v9);
              v10 = *((_QWORD *)this + 2) + 568LL;
              *(_QWORD *)(v10 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v10, 0LL);
              KeLeaveCriticalRegion();
              v11 = *((_QWORD *)this + 2) + 104LL;
              *(_QWORD *)(v11 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v11, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          if ( v31 && !v32 && (int)IsLeaveEditionCritSupported() >= 0 )
            LeaveEditionCrit();
        }
      }
      goto LABEL_27;
  }
LABEL_47:
  v20 = CBaseInput::ivChildLoop(this);
LABEL_48:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Bu,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  return (unsigned int)v20;
}
