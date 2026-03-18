/*
 * XREFs of ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01539B8 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0153A10 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01541CC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154464 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154738 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAU.c)
 */

__int64 __fastcall CHidInput::ivRootDeliverTouchInput(CHidInput *this, _QWORD *a2)
{
  char *v5; // rcx
  KPROCESSOR_MODE v6; // r8
  int v7; // eax
  int v8; // ebx
  struct _UNICODE_STRING v9; // xmm6
  int v10; // eax
  unsigned __int16 v11; // r9
  struct _ETHREAD *CurrentThread; // r9
  _DWORD *v13; // rcx
  struct _ETHREAD *v14; // r9
  __int64 v15; // [rsp+30h] [rbp-61h]
  PVOID Object; // [rsp+48h] [rbp-49h] BYREF
  _DWORD *v17; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-39h]
  struct _UNICODE_STRING v19; // [rsp+78h] [rbp-19h] BYREF
  struct _UNICODE_STRING v20; // [rsp+88h] [rbp-9h] BYREF
  _DWORD v21[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+Fh]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x27u,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  if ( *((_BYTE *)this + 1072) )
  {
    v5 = (char *)a2[4];
    v6 = *((_DWORD *)a2 + 12) == 0;
    Object = 0LL;
    v7 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, v6, &Object);
    v8 = v7;
    if ( v7 < 0 )
    {
      WPP_RECORDER_SF_d(
        *((_QWORD *)this + 131),
        2u,
        0x11u,
        0x29u,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
        v7);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0x11u,
          0x2Au,
          (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
      return (unsigned int)v8;
    }
    v9 = *(struct _UNICODE_STRING *)((char *)Object + 296);
    ObfDereferenceObject(Object);
    CIVSerializer::CIVSerializer((CIVSerializer *)&v17, 0x68uLL);
    if ( v17 )
    {
      v19 = v9;
      v10 = IVMeasureRimCompleteFrame((struct RIMCOMPLETEFRAME *)a2, &v19, (struct CIVSerializer *)&v17);
      v8 = v10;
      if ( v10 < 0 )
      {
        v11 = 45;
        goto LABEL_12;
      }
      v10 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v17);
      v8 = v10;
      if ( v10 < 0 )
      {
        v11 = 43;
LABEL_12:
        LODWORD(v15) = v10;
LABEL_28:
        WPP_RECORDER_SF_d(
          *((_QWORD *)this + 131),
          2u,
          0x11u,
          v11,
          (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
          v15);
LABEL_29:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0x11u,
            0x31u,
            (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
        CIVSerializer::~CIVSerializer((CIVSerializer *)&v17);
        return (unsigned int)v8;
      }
      v20 = v9;
      v10 = IVSerializeRimCompleteFrameForTouchInputPacket(
              (struct RIMCOMPLETEFRAME *)a2,
              &v20,
              (struct CIVSerializer *)&v17);
      v8 = v10;
      if ( v10 < 0 )
      {
        v11 = 44;
        goto LABEL_12;
      }
      v21[0] = v18;
      v21[1] = 1;
      v22 = 7LL;
      CurrentThread = KeGetCurrentThread();
      if ( gpfnIVSend )
        v8 = gpfnIVSend(
               v21,
               0x10u,
               CurrentThread,
               CurrentThread,
               this,
               (int (*)(void *, void *))CBaseInput::_ivCallback);
      else
        v8 = -1073741637;
      if ( v8 >= 0 )
      {
        v13 = v17;
        *v17 = v18;
        v13[1] = 1;
        *((_QWORD *)v13 + 1) = 8LL;
        v14 = KeGetCurrentThread();
        if ( gpfnIVSend )
          v8 = gpfnIVSend(v17, v18, v14, v14, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
        else
          v8 = -1073741637;
        if ( v8 >= 0 )
          goto LABEL_29;
        v11 = 48;
      }
      else
      {
        v11 = 47;
      }
    }
    else
    {
      v8 = -1073741801;
      v11 = 46;
    }
    LODWORD(v15) = v8;
    goto LABEL_28;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x28u,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  return 0LL;
}
