/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x140889988
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 *     EtwpSetMark @ 0x1408F4E2C (EtwpSetMark.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400054B0 (MiIdentifyPfnWrapper.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14015D40C (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x14032DE80 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  unsigned int v7; // edi
  unsigned int *v8; // rsi
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r14
  __int64 v13; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  __int64 v16; // [rsp+50h] [rbp-19h] BYREF
  __int64 v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  unsigned int *v19; // [rsp+68h] [rbp-1h]
  __int64 *v20; // [rsp+70h] [rbp+7h] BYREF
  __int64 v21; // [rsp+78h] [rbp+Fh]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v7 = 0;
  v19 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v8 = v19;
  if ( *v19 )
  {
    do
    {
      v9 = 48LL * *(_QWORD *)&v8[4 * v7 + 4] - 0x58000000000LL;
      v10 = v9 + 48LL * *(_QWORD *)&v8[4 * v7 + 6];
      if ( v9 < v10 )
      {
        do
        {
          if ( !a4 || (*(_BYTE *)(v9 + 34) & 7) == 6 )
          {
            v13 = 0LL;
            v14 = 0LL;
            v15 = 0LL;
            MiIdentifyPfnWrapper(v9);
            v20 = &v13;
            v21 = 24LL;
            EtwTraceSiloDcEvent((__int64)&v20, 1u, a1, a2, a3, 0x401802u);
          }
          v9 += 48LL;
        }
        while ( v9 < v10 );
        v8 = v19;
      }
      ++v7;
    }
    while ( v7 < *v8 );
  }
  MiDereferencePageRuns((__int64)v8);
  if ( !a4 )
  {
    LODWORD(v16) = v16 & 0xFFFFFFE0;
    v17 = MmPfnDatabase;
    v18 = MxPfnAllocation;
    v20 = &v16;
    v21 = 24LL;
    EtwTraceSiloDcEvent((__int64)&v20, 1u, a1, a2, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
