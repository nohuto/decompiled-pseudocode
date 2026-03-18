/*
 * XREFs of ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C0180000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0188388 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0189234 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0189AE0 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAUCIVSerializer@@@Z @ 0x1C018A1C0 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DE30 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CHidInput::ivRootDeliverTouchInput(CHidInput *this, char *a2)
{
  void *v4; // rdx
  PVOID v5; // rdi
  __int64 v6; // rsi
  struct CPointerInputFrame *v7; // r13
  char *v9; // rcx
  int v10; // r12d
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ebx
  struct _UNICODE_STRING v14; // xmm6
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v20; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v22; // eax
  char v23; // [rsp+30h] [rbp-61h]
  int (*v24)(struct _IVSRContext *); // [rsp+40h] [rbp-51h]
  struct _UNICODE_STRING v25; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING v26; // [rsp+68h] [rbp-29h] BYREF
  void *v27; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  PVOID Object; // [rsp+F8h] [rbp+67h] BYREF

  v4 = &WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      12,
      10,
      (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
    v4 = &WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids;
  }
  v5 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = (struct CPointerInputFrame *)*((_QWORD *)a2 + 1);
  Object = 0LL;
  if ( *((_DWORD *)this + 298) )
  {
    v9 = *(char **)(v6 + 32);
    v10 = 0;
    if ( v9 )
    {
      v11 = RawInputManagerDeviceObjectResolveHandle(v9, 3u, *(_DWORD *)(v6 + 72) == 0, &Object);
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
            12,
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
                13,
                (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
            }
          }
        }
        return v13;
      }
      v5 = Object;
      v14 = *(struct _UNICODE_STRING *)((char *)Object + 296);
    }
    else
    {
      v14 = (struct _UNICODE_STRING)0LL;
      v10 = 1;
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v27, 0x78uLL);
    if ( !v29 )
    {
      v13 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v18 = 17;
      v23 = 23;
      goto LABEL_23;
    }
    v25 = v14;
    v17 = IVMeasureRimCompleteFrame((struct RIMCOMPLETEFRAME *)v6, v7, &v25, (struct CIVSerializer *)&v27);
    v13 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v18 = 16;
      goto LABEL_22;
    }
    v17 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v27);
    v13 = v17;
    if ( v17 >= 0 )
    {
      *(union _LARGE_INTEGER *)(v6 + 64) = gliQpcFreq;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v26 = v14;
      *(LARGE_INTEGER *)(v6 + 48) = PerformanceCounter;
      v17 = IVSerializeRimCompleteFrameForTouchInputPacket(
              (struct RIMCOMPLETEFRAME *)v6,
              v7,
              &v26,
              v10,
              (struct CIVSerializer *)&v27);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v20 = v27;
        *(_DWORD *)v27 = v28 - 16;
        v20[1] = 1;
        *((_QWORD *)v20 + 1) = 2LL;
        CurrentThread = KeGetCurrentThread();
        v22 = ivrIVSend(v27, v28, CurrentThread, CurrentThread, this, 2u, (const struct CONTAINER_ID *)(a2 + 16), v24);
        v13 = v22;
        if ( v22 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v5 = Object;
        }
        else
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v16,
            12,
            18,
            (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids,
            v22);
          v5 = Object;
        }
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 15;
        goto LABEL_22;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 14;
LABEL_22:
      v23 = v17;
LABEL_23:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v16, 12, v18, (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids, v23);
    }
LABEL_31:
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v16) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        12,
        19,
        (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
    }
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v27);
    return v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v4,
        12,
        11,
        (__int64)&WPP_a14e2d94549d36d5d3db06dbd0dbf490_Traceguids);
    }
  }
  return 0LL;
}
