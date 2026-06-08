/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x1C0005C80
 * Callers:
 *     <none>
 * Callees:
 *     ComputeProcessorEnergyMsr @ 0x1C0001440 (ComputeProcessorEnergyMsr.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0007C1C (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C0007E50 (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned int SystemArgument1; // r9d
  unsigned int v8; // r10d
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 SystemArgument1_low; // r14
  unsigned int v12; // ebx
  unsigned int *p_ActiveThreadCount; // r15
  __int64 v14; // r14
  __int64 DpcData_high; // r12
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  __int64 *v20; // r15
  unsigned int *v21; // r12
  unsigned __int64 *v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rbx
  signed __int64 v26; // r8
  double v27; // xmm3_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  double v30; // xmm4_8
  double v31; // xmm1_8
  double v32; // xmm0_8
  _LIST_ENTRY *Flink; // xmm3_8
  double v34; // xmm1_8
  int *v35; // rcx
  __int64 v36; // r10
  double *v37; // r9
  __int64 v38; // r13
  int v39; // eax
  unsigned __int64 v40; // rcx
  double v41; // xmm1_8
  unsigned int *v42; // r9
  __int64 v43; // r11
  double *v44; // r10
  signed __int64 v45; // rax
  double v46; // xmm0_8
  double v47; // xmm1_8
  double v48; // xmm1_8
  __int64 *v49; // rcx
  __int64 v50; // r10
  double *v51; // r9
  double v52; // xmm0_8
  double v53; // xmm1_8
  __int64 v54; // rax
  double v55; // xmm0_8
  void **p_Reserved; // rax
  __int64 v57; // r9
  double *v58; // rcx
  double v59; // xmm0_8
  double v60; // xmm0_8
  double *v61; // rax
  __int64 v62; // r9
  double *v63; // rcx
  double v64; // xmm0_8
  double v65; // xmm0_8
  int v66; // ecx
  double v67; // xmm0_8
  double v68; // xmm0_8
  unsigned __int64 v69; // rax
  unsigned __int64 *result; // rax
  __int64 v74[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v75[6]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v76[2]; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  _QWORD v80[4]; // [rsp+C8h] [rbp-38h] BYREF
  double v81[4]; // [rsp+E8h] [rbp-18h]
  _BYTE v82[32]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v83[40]; // [rsp+128h] [rbp+28h] BYREF

  memset(v74, 0, sizeof(v74));
  memset(v75, 0, sizeof(v75));
  v6 = 0LL;
  if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) == 0 )
  {
    ComputeProcessorEnergyMsr(0LL, 0LL, 0LL, 0LL, a5);
    v6 = *a5;
    goto LABEL_79;
  }
  SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) > 4 )
    goto LABEL_79;
  v8 = 0;
  if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
  {
LABEL_8:
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v10 = 0LL;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v12 = *(_DWORD *)((char *)v80 + v10);
        ProcLibTracePackageEnergyCounterUpdate(
          *(unsigned int *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v10 + 4),
          v12,
          v5);
        *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v10) = *(_DWORD *)((char *)v76 + v10);
        *(_DWORD *)((char *)v75 + v10) = v12;
        v10 += 4LL;
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
      v14 = 0LL;
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      do
      {
        v16 = *p_ActiveThreadCount;
        v17 = __readmsr(v16);
        v18 = v17 - *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v14 * 8);
        ProcLibTracePackageEnergyCounterUpdate(v16, v18, v5);
        v75[v14 + 2] = v18;
        ++p_ActiveThreadCount;
        *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v14 * 8) = v17;
        ++v14;
        --DpcData_high;
      }
      while ( DpcData_high );
    }
    LODWORD(v74[3]) = 32;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    v74[0] = (__int64)&qword_1C001B3A8;
    v74[1] = (__int64)&qword_1C001B3A8;
    v74[2] = 0LL;
    ResetEnumerationContext(v74);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v74, v80) )
    {
      v19 = v80[0];
      v20 = &v77;
      v21 = (unsigned int *)&CounterId;
      v76[0] = 3LL;
      v22 = (unsigned __int64 *)(*(_QWORD *)(v80[0] + 360LL) + 24LL);
      do
      {
        v23 = *v22;
        v24 = *(v22 - 1);
        if ( v24 < *v22 )
          v25 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink + v24 - v23 + 1;
        else
          v25 = v24 - v23;
        ProcLibTraceEnergyCounterUpdate(v19, *v21, v25);
        *v20 += v25;
        ++v21;
        *v22 = v24;
        ++v20;
        v22 += 3;
        --v76[0];
      }
      while ( v76[0] );
    }
    v26 = 1000000 * a3 / (qword_1C001BB50 * (unsigned __int64)(unsigned int)dword_1C001BB48);
    if ( !v26 || !v77 )
      goto LABEL_79;
    v27 = (double)(int)v78;
    if ( v78 < 0 )
      v27 = v27 + 1.844674407370955e19;
    v28 = (double)(int)a2;
    if ( a2 < 0 )
      v28 = v28 + 1.844674407370955e19;
    v29 = (double)(int)a3;
    if ( a3 < 0 )
      v29 = v29 + 1.844674407370955e19;
    v30 = (double)(int)v77;
    v31 = v28 / v29;
    if ( v77 < 0 )
      v30 = v30 + 1.844674407370955e19;
    v81[0] = v27 / v30 * v31;
    if ( !v79 )
      goto LABEL_79;
    v32 = (double)(int)v79;
    if ( v79 < 0 )
      v32 = v32 + 1.844674407370955e19;
    v81[2] = v31;
    v81[1] = v27 / v32 * v31;
    v81[3] = 1.0 - v31;
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
    {
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
      {
        Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
        v34 = (double)(int)v26;
        if ( v26 < 0 )
          v34 = v34 + 1.844674407370955e19;
        v35 = (int *)v75;
        v36 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
        v37 = (double *)v82;
        v38 = 4LL;
        do
        {
          v39 = *v35++;
          *v37++ = (double)v39 * 1000000.0 * *(double *)&Flink / v34;
          --v36;
        }
        while ( v36 );
        goto LABEL_52;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v40 = ((unsigned __int64)*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
      v41 = (double)(int)v26;
      if ( v26 < 0 )
        v41 = v41 + 1.844674407370955e19;
      v42 = (unsigned int *)v75;
      v43 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      v44 = (double *)v82;
      v38 = 4LL;
      do
      {
        v45 = (unsigned __int64)*v42 << v40;
        v46 = (double)(int)v45;
        if ( v45 < 0 )
          v46 = v46 + 1.844674407370955e19;
        ++v42;
        *v44++ = v46 / v41;
        --v43;
      }
      while ( v43 );
      goto LABEL_52;
    }
    v38 = 4LL;
LABEL_52:
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      v47 = (double)((int)v26 * (int)qword_1C001BB58);
      if ( v26 * qword_1C001BB58 < 0 )
        v47 = v47 + 1.844674407370955e19;
      v48 = v47 / 1000000.0;
      v49 = &v75[2];
      v50 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v51 = (double *)v83;
      do
      {
        v52 = (double)(int)*v49;
        if ( *v49 < 0 )
          v52 = v52 + 1.844674407370955e19;
        ++v49;
        *v51++ = v52 * 100.0 / v48;
        --v50;
      }
      while ( v50 );
    }
    v53 = *(double *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
    v54 = 0LL;
    do
    {
      v55 = *(double *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v54 * 8) * v81[v54];
      ++v54;
      v53 = v53 + v55;
      --v38;
    }
    while ( v38 );
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Reserved = &WPP_MAIN_CB.Reserved;
      v57 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      v58 = (double *)v82;
      do
      {
        v59 = *(double *)p_Reserved++;
        v60 = v59 * *v58++;
        v53 = v53 + v60;
        --v57;
      }
      while ( v57 );
    }
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      v61 = (double *)&unk_1C001B320;
      v62 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v63 = (double *)v83;
      do
      {
        v64 = *v63++;
        v65 = v64 * *v61++;
        v53 = v53 + v65;
        --v62;
      }
      while ( v62 );
    }
    if ( v53 >= 0.0 && v53 <= (double)SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
    {
      if ( v53 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1) )
        goto LABEL_73;
      v66 = 100;
      if ( a4 <= 0x64 )
        v66 = a4;
      if ( v53 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) * v66 / 0x64u) )
      {
LABEL_73:
        v67 = (double)(int)v26;
        if ( v26 < 0 )
          v67 = v67 + 1.844674407370955e19;
        v68 = v67 * v53;
        v69 = 0LL;
        if ( v68 >= 9.223372036854776e18 )
        {
          v68 = v68 - 9.223372036854776e18;
          if ( v68 < 9.223372036854776e18 )
            v69 = 0x8000000000000000uLL;
        }
        v6 = v69 + (unsigned int)(int)v68;
      }
    }
    goto LABEL_79;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v9 = __readmsr(*(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v5 + 4));
    *(_DWORD *)((char *)v76 + v5) = v9;
    LODWORD(v9) = v9 - *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v5);
    *(_DWORD *)((char *)v80 + v5) = v9;
    if ( (unsigned int)v9 > 0x7FFFFFFF )
      break;
    ++v8;
    v5 += 4LL;
    if ( v8 >= SystemArgument1 )
      goto LABEL_8;
  }
LABEL_79:
  result = a5;
  *a5 = v6;
  return result;
}
