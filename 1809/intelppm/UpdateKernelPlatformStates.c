/*
 * XREFs of UpdateKernelPlatformStates @ 0x1C000D3CC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C002DBB0 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1C0034860 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004C80 (memmove.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0029610 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C002BEC0 (ValidatePlatformIdleState.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // bp
  unsigned int *v3; // rdi
  _DWORD *v4; // rsi
  int v5; // r13d
  unsigned int v6; // r15d
  const void *v7; // rbx
  unsigned int v8; // r14d
  SIZE_T v9; // r12
  unsigned int *PoolWithTag; // rax
  int v11; // r13d
  unsigned int *v12; // rbp
  signed __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rcx
  _BYTE *v16; // rcx
  size_t v17; // r8
  void *v18; // r12
  NTSTATUS ProcessorNumberFromIndex; // ebx
  SIZE_T v20; // rbx
  unsigned int v21; // ebp
  _BYTE *v22; // r14
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  char v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  v32 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A398,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1C001A394;
    v33 = dword_1C001A394;
    v8 = (48 * v6 + 59) & 0xFFFFFFFC;
    v9 = v8 + 8 * dword_1C001A394 * v6;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x72637250u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v9);
      memmove(v3, v7, (int)(48 * v6 + 56));
      if ( v6 )
      {
        v11 = 8 * v5;
        v12 = v3 + 18;
        v13 = (_BYTE *)v7 - (_BYTE *)v3;
        v14 = v6;
        do
        {
          v15 = v8;
          v8 += v11;
          v16 = (char *)v3 + v15;
          v17 = 8LL * *v12;
          *((_QWORD *)v12 + 3) = v16;
          memmove(v16, *(const void **)((char *)v12 + v13 + 24), v17);
          v12 += 12;
          --v14;
        }
        while ( v14 );
        v5 = v33;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A398);
  v18 = 0LL;
  if ( !v3 )
  {
    ProcessorNumberFromIndex = -1073741670;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Au,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
  {
LABEL_26:
    *((_BYTE *)v3 + 48) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A398,
      0LL);
    v28 = ((__int64 (__fastcall *)(unsigned int *))qword_1C001A5C8)(v3);
    ProcessorNumberFromIndex = v28;
    if ( v28 < 0 )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Cu,
        (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
        v28);
    }
    else
    {
      v18 = Src;
      Src = v3;
      v3 = 0LL;
      ProcLibTracePlatformIdleStates(0LL);
    }
    v27 = qword_1C001A398;
LABEL_30:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v27);
LABEL_31:
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72637250u);
    goto LABEL_33;
  }
  v20 = (unsigned int)(16 * v5 + 40);
  v4 = ExAllocatePoolWithTag(PagedPool, v20, 0x72637250u);
  if ( v4 )
  {
    v21 = 0;
    if ( v6 )
    {
      v22 = v3 + 17;
      do
      {
        memset(v4, 0, v20);
        LOBYTE(v23) = 1;
        *v4 = v21;
        v4[8] = v5;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64))qword_1C001A638)(*(_QWORD *)(a1 + 1088), v4, v23) >= 0 )
        {
          ProcessorNumberFromIndex = ValidatePlatformIdleState(v4);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_31;
          v32 = 1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1C001A3A0,
            0LL);
          *((_DWORD *)v22 - 1) = v4[5];
          *(_DWORD *)v22 = v4[6];
          *(v22 - 7) = *((_BYTE *)v4 + 16);
          if ( *((_QWORD *)v4 + 1) )
          {
            *(v22 - 8) = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(_DWORD *)(*((_QWORD *)v4 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)v22 - 3);
            if ( ProcessorNumberFromIndex < 0 )
            {
              v27 = qword_1C001A3A0;
              goto LABEL_30;
            }
          }
          memset(*(void **)(v22 + 28), 0, 8LL * *((unsigned int *)v22 + 1));
          v24 = v4[7];
          v25 = 0LL;
          for ( *((_DWORD *)v22 + 1) = v24; (unsigned int)v25 < *((_DWORD *)v22 + 1); v25 = (unsigned int)(v25 + 1) )
          {
            v26 = *(_QWORD *)(v22 + 28);
            *(_DWORD *)(v26 + 8 * v25) = *(_DWORD *)(*(_QWORD *)&v4[4 * (unsigned int)v25 + 10] + 56LL);
            *(_BYTE *)(v26 + 8 * v25 + 4) = v4[4 * (unsigned int)v25 + 12];
            *(_BYTE *)(v26 + 8 * v25 + 6) = BYTE2(v4[4 * (unsigned int)v25 + 12]);
            *(_BYTE *)(v26 + 8 * v25 + 5) = BYTE1(v4[4 * (unsigned int)v25 + 12]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C001A3A0);
          v20 = (unsigned int)(16 * v5 + 40);
        }
        ++v21;
        v22 += 48;
      }
      while ( v21 < v6 );
      if ( v32 )
        goto LABEL_26;
    }
    ProcessorNumberFromIndex = 0;
    goto LABEL_31;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    4u,
    0x1Bu,
    (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
  ProcessorNumberFromIndex = -1073741670;
LABEL_33:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x72637250u);
  return (unsigned int)ProcessorNumberFromIndex;
}
