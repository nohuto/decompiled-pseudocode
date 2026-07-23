/*
 * XREFs of KeConfigureHeteroProcessors @ 0x140843D08
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14017E38C (KiConfigureCpuSetSchedulingInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  unsigned __int8 v7; // r14
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r8
  unsigned __int8 *v10; // r9
  __int64 v11; // r10
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r13
  unsigned int v16; // edi
  unsigned __int8 *v17; // rsi
  unsigned __int8 v18; // r14
  unsigned __int8 v19; // r14
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // edi
  unsigned __int8 v24; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v25; // [rsp+24h] [rbp-DCh]
  int v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+2Ch] [rbp-D4h]
  struct _SINGLE_LIST_ENTRY v30[88]; // [rsp+40h] [rbp-C0h] BYREF

  v26 = KiDefaultHeteroCpuPolicy;
  v27 = KeHeteroSystem;
  memset(v30, 0, 0x2B8uLL);
  v30[0].Next = (struct _SINGLE_LIST_ENTRY *)a1;
  LODWORD(v30[1].Next) = a2;
  LODWORD(v30[3].Next) = 1310721;
  memset((char *)&v30[3].Next + 4, 0, 0xA4uLL);
  LODWORD(v30[24].Next) = 1310721;
  memset((char *)&v30[24].Next + 4, 0, 0xA4uLL);
  LODWORD(v30[45].Next) = 1310721;
  memset((char *)&v30[45].Next + 4, 0, 0xA4uLL);
  LODWORD(v30[66].Next) = 1310721;
  memset((char *)&v30[66].Next + 4, 0, 0xA4uLL);
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v10 = (unsigned __int8 *)(a1 + 7);
    v11 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v12 = *(v10 - 1);
      v13 = v8;
      v14 = v9;
      v9 = v10[1];
      if ( v9 <= v14 )
        v9 = v14;
      v8 = *v10;
      v10 += 3;
      if ( v8 <= v13 )
        v8 = v13;
      if ( v12 <= v7 )
        v12 = v7;
      v7 = v12;
      --v11;
    }
    while ( v11 );
    v25 = v8;
    v24 = v9;
    if ( v9 || v8 )
    {
      v15 = *(_BYTE *)(a1 + 5);
      v16 = 0;
      v17 = (unsigned __int8 *)(a1 + 8);
      LODWORD(v30[2].Next) = 1;
      while ( 1 )
      {
        v18 = *v17;
        if ( *v17 >= v15 )
        {
          KeAddProcessorAffinityEx(&v30[3], v16);
          if ( v18 == v24 )
            KeAddProcessorAffinityEx(&v30[24], v16);
        }
        if ( v12 )
        {
          v19 = *(v17 - 1);
          KiEfficiencyClassSystem = 1;
          if ( v19 < *(_BYTE *)(a1 + 4) )
            goto LABEL_23;
          KeAddProcessorAffinityEx(&v30[45], v16);
          if ( v19 != v25 )
            goto LABEL_23;
        }
        else
        {
          if ( v15 && v18 >= v15 )
            goto LABEL_23;
          KeAddProcessorAffinityEx(&v30[45], v16);
        }
        KeAddProcessorAffinityEx(&v30[66], v16);
LABEL_23:
        ++v16;
        v17 += 3;
        if ( v16 >= v5 )
          goto LABEL_28;
      }
    }
  }
  v20 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
      KeAddProcessorAffinityEx(&v30[3], v20++);
    while ( v20 < v5 );
  }
  KeCopyAffinityEx((__int64)&v30[24], (unsigned __int16 *)&v30[3]);
  KeCopyAffinityEx((__int64)&v30[45], (unsigned __int16 *)&v30[3]);
  KeCopyAffinityEx((__int64)&v30[66], (unsigned __int16 *)&v30[3]);
  HIDWORD(v30[1].Next) = a2;
  LODWORD(v30[2].Next) = v7 != 0;
LABEL_28:
  KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)KiConfigureHeteroProcessorsTarget, v30);
  v21 = KeHeteroSystem;
  v22 = 0;
  *a3 = KeHeteroSystem;
  for ( KiDefaultHeteroCpuPolicy = v21 != 0 ? KiDesiredHeteroCpuPolicy : 0; v22 < (unsigned int)KeNumberProcessors_0; ++v22 )
    KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v22]);
  if ( v26 != KiDefaultHeteroCpuPolicy || v27 != KeHeteroSystem )
    return 1;
  return v6;
}
