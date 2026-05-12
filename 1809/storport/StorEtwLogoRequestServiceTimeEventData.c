/*
 * XREFs of StorEtwLogoRequestServiceTimeEventData @ 0x1C004D02C
 * Callers:
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 *     McTemplateK0uuuuxqbr5uppxxx @ 0x1C004C498 (McTemplateK0uuuuxqbr5uppxxx.c)
 */

int __fastcall StorEtwLogoRequestServiceTimeEventData(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 SrbScsiData; // rax
  __int64 v4; // rdi
  int v5; // ebp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  char v8; // si
  __int64 v9; // r15
  LARGE_INTEGER v12; // rax
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  signed __int64 v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rtt
  __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // dl
  char v21; // r9
  char v22; // r10
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  union _LARGE_INTEGER v25; // [rsp+C0h] [rbp+8h] BYREF
  int v26; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+18h]

  SrbScsiData = (unsigned __int64)&retaddr;
  v27 = a3;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0;
  LOBYTE(v6) = 0;
  v26 = 0;
  LOBYTE(v7) = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
  {
    if ( UseQPCTime )
      v12 = KeQueryPerformanceCounter(&v25);
    else
      v12.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v12.QuadPart <= 0 || (v13 = *(_QWORD *)(a1 + 696), v12.QuadPart >= v13) )
    {
      v13 = *(_QWORD *)(a1 + 696);
      v14 = v12.QuadPart - v13;
    }
    else
    {
      v14 = v12.QuadPart - v13 - 1;
    }
    if ( UseQPCTime )
    {
      if ( v25.QuadPart && v14 )
        v6 = 10000 * (1000 * (v14 % v25.QuadPart) % v25.QuadPart) / v25.QuadPart
           + 10000 * (1000 * (v14 % v25.QuadPart) / v25.QuadPart + 1000 * (v14 / v25.QuadPart));
    }
    else
    {
      LOBYTE(v6) = v14;
    }
    v15 = *(_QWORD *)(a1 + 704);
    if ( v15 >= v13 )
    {
      v16 = v15 - v13;
      if ( UseQPCTime )
      {
        if ( v25.QuadPart && v16 )
          v7 = 10000 * (1000 * (v16 % v25.QuadPart) % v25.QuadPart) / v25.QuadPart
             + 10000 * (1000 * (v16 % v25.QuadPart) / v25.QuadPart + 1000 * (v16 / v25.QuadPart));
      }
      else
      {
        LOBYTE(v7) = v15 - v13;
      }
    }
    SrbScsiData = *(_QWORD *)(a1 + 712);
    if ( v15 && (__int64)SrbScsiData >= v15 )
    {
      SrbScsiData -= v15;
    }
    else
    {
      if ( (__int64)SrbScsiData < v13 )
        goto LABEL_30;
      SrbScsiData -= v13;
    }
    if ( UseQPCTime )
    {
      if ( v25.QuadPart && SrbScsiData )
      {
        v17 = 1000 * (SrbScsiData % v25.QuadPart);
        v18 = v17 / v25.QuadPart + 1000 * (SrbScsiData / v25.QuadPart);
        SrbScsiData = 10000 * (v17 % v25.QuadPart) / v25.QuadPart;
        v8 = SrbScsiData + 16 * v18;
      }
    }
    else
    {
      v8 = SrbScsiData;
    }
  }
LABEL_30:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      SrbScsiData = GetSrbScsiData(v4, &v26, &v26, 0LL, 0LL, 0LL);
      v5 = v26;
      v9 = SrbScsiData;
    }
    v19 = *(unsigned int *)(v4 + 52);
    v20 = *(_BYTE *)(v19 + v4 + 8);
    v21 = *(_BYTE *)(v19 + v4 + 9);
    v22 = *(_BYTE *)(v19 + v4 + 10);
  }
  else
  {
    v20 = *(_BYTE *)(v4 + 5);
    v9 = v4 + 72;
    v21 = *(_BYTE *)(v4 + 6);
    v5 = 16;
    v22 = *(_BYTE *)(v4 + 7);
  }
  if ( a2 )
  {
    if ( (byte_1C00617E3 & 2) != 0 )
      LODWORD(SrbScsiData) = McTemplateK0uuuuxqbr5uppxxx(
                               *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 216),
                               &EventLogoPerformanceMeasurementTarget,
                               (const GUID *)(a1 + 728),
                               *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                               v20,
                               v21,
                               v22,
                               v27,
                               v5,
                               v9,
                               *(_BYTE *)(v4 + 3),
                               *(_QWORD *)(a1 + 160),
                               *(_QWORD *)(a1 + 768),
                               0,
                               0,
                               0);
  }
  else if ( (byte_1C00617E3 & 2) != 0 )
  {
    LODWORD(SrbScsiData) = McTemplateK0uuuuxqbr5uppxxx(
                             *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 216),
                             &EventLogoPerformanceMeasurement,
                             (const GUID *)(a1 + 728),
                             *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                             v20,
                             v21,
                             v22,
                             v6,
                             v5,
                             v9,
                             *(_BYTE *)(v4 + 3),
                             *(_QWORD *)(a1 + 160),
                             *(_QWORD *)(a1 + 768),
                             v7,
                             v8,
                             *(_QWORD *)(a1 + 720));
  }
  return SrbScsiData;
}
