/*
 * XREFs of UpdateKernelPlatformStates @ 0x1C00084EC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0025E80 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1C0031CB0 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000DFC0 (memmove.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001EED8 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C00301E0 (ValidatePlatformIdleState.c)
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
  char v31; // [rsp+90h] [rbp+18h]
  int v32; // [rsp+98h] [rbp+20h]

  v31 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1C0013414;
    v32 = dword_1C0013414;
    v8 = (48 * v6 + 59) & 0xFFFFFFFC;
    v9 = v8 + 8 * dword_1C0013414 * v6;
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
        v5 = v32;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  v18 = 0LL;
  if ( !v3 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x1Au,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
  {
LABEL_29:
    *((_BYTE *)v3 + 48) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0013418,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1C0013658)(v3);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x1Cu,
          (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids,
          ProcessorNumberFromIndex);
    }
    else
    {
      v18 = Src;
      Src = v3;
      v3 = 0LL;
      ProcLibTracePlatformIdleStates(0LL);
    }
    v27 = qword_1C0013418;
LABEL_34:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v27);
LABEL_35:
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72637250u);
    goto LABEL_37;
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
        if ( (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64))qword_1C00136C8)(*(_QWORD *)(a1 + 1104), v4, v23) >= 0 )
        {
          ProcessorNumberFromIndex = ValidatePlatformIdleState(v4);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_35;
          v31 = 1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1C0013420,
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
              v27 = qword_1C0013420;
              goto LABEL_34;
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
            qword_1C0013420);
          v20 = (unsigned int)(16 * v5 + 40);
        }
        ++v21;
        v22 += 48;
      }
      while ( v21 < v6 );
      if ( v31 )
        goto LABEL_29;
    }
    ProcessorNumberFromIndex = 0;
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Bu,
      (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids);
  ProcessorNumberFromIndex = -1073741670;
LABEL_37:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x72637250u);
  return (unsigned int)ProcessorNumberFromIndex;
}
