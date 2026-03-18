/*
 * XREFs of ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017FC6C
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017BBA0 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0188388 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0189234 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0189A24 (-IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z @ 0x1C018A0E4 (-IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DE30 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CHidInput::ivRootDeliverPTPInertiaInput(
        CHidInput *this,
        char *a2,
        unsigned __int64 a3,
        int a4,
        const struct CONTAINER_ID *a5)
{
  CBaseInput *v5; // r14
  char *v8; // rbx
  PVOID v9; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ebx
  struct _UNICODE_STRING v14; // xmm6
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  _DWORD *v20; // rcx
  const struct CONTAINER_ID *v21; // rax
  struct _ETHREAD *CurrentThread; // r9
  int v23; // eax
  char v24; // [rsp+30h] [rbp-69h]
  int (*v25)(struct _IVSRContext *); // [rsp+40h] [rbp-59h]
  struct _UNICODE_STRING v26; // [rsp+58h] [rbp-41h] BYREF
  struct _UNICODE_STRING v27; // [rsp+68h] [rbp-31h] BYREF
  void *v28; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  PVOID Object; // [rsp+F8h] [rbp+5Fh] BYREF

  Object = this;
  v5 = gpHidInput;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      20,
      (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
  }
  v9 = 0LL;
  Object = 0LL;
  if ( *((_DWORD *)v5 + 298) )
  {
    if ( v8 )
    {
      v11 = RawInputManagerDeviceObjectResolveHandle(v8, 3u, a4 == 0, &Object);
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
            22,
            (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids,
            v11);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v15) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v15,
                12,
                23,
                (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
            }
          }
        }
        return v13;
      }
      v9 = Object;
      v14 = *(struct _UNICODE_STRING *)((char *)Object + 296);
    }
    else
    {
      v14 = (struct _UNICODE_STRING)0LL;
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v28, 0x18uLL);
    if ( !v30 )
    {
      v13 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v19 = 27;
      v24 = 23;
      goto LABEL_22;
    }
    v26 = v14;
    v17 = IVMeasurePTPInertiaPacket(&v26, (struct CIVSerializer *)&v28);
    v13 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v19 = 26;
    }
    else
    {
      v18 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v28);
      v13 = v18;
      if ( v18 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 24;
          v24 = v18;
LABEL_22:
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v16,
            12,
            v19,
            (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids,
            v24);
        }
LABEL_31:
        if ( v9 )
          ObfDereferenceObject(v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v16) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            12,
            29,
            (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
        }
        CIVSerializer::~CIVSerializer((CIVSerializer *)&v28);
        return v13;
      }
      v27 = v14;
      v17 = IVSerializePTPInertiaPacket(&v27, a3, (struct CIVSerializer *)&v28);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v20 = v28;
        *(_DWORD *)v28 = v29 - 16;
        v21 = a5;
        v20[1] = 1;
        *((_QWORD *)v20 + 1) = 8LL;
        CurrentThread = KeGetCurrentThread();
        v23 = ivrIVSend(v28, v29, CurrentThread, CurrentThread, v5, 2u, v21, v25);
        v13 = v23;
        if ( v23 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = Object;
        }
        else
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v16,
            12,
            28,
            (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids,
            v23);
          v9 = Object;
        }
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v19 = 25;
    }
    v24 = v17;
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        12,
        21,
        (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
    }
  }
  return 0LL;
}
