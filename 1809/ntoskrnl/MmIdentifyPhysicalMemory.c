/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x14084F534
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 *     EtwpSetMark @ 0x1408B9C4C (EtwpSetMark.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400A7D70 (MiIdentifyPfnWrapper.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x140141BD0 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x140310770 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // r8
  unsigned int *v9; // rsi
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // r14
  unsigned int *v14; // [rsp+38h] [rbp-31h]
  _QWORD v15[3]; // [rsp+40h] [rbp-29h] BYREF
  int v16; // [rsp+58h] [rbp-11h] BYREF
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  int *v19; // [rsp+70h] [rbp+7h] BYREF
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]

  v7 = 0;
  v14 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v9 = v14;
  if ( *v14 )
  {
    do
    {
      v10 = 48LL * *(_QWORD *)&v9[4 * v7 + 4] - 0x58000000000LL;
      v11 = v10 + 48LL * *(_QWORD *)&v9[4 * v7 + 6];
      if ( v10 < v11 )
      {
        do
        {
          if ( !a4 || (*(_BYTE *)(v10 + 34) & 7) == 6 )
          {
            memset(v15, 0, sizeof(v15));
            MiIdentifyPfnWrapper(v10, (__int64)v15, v8);
            v21 = 0;
            v19 = (int *)v15;
            v20 = 24;
            EtwTraceSiloDcEvent((__int64)&v19, 1u, a1, a2, a3, 0x401802u);
          }
          v10 += 48LL;
        }
        while ( v10 < v11 );
        v9 = v14;
      }
      ++v7;
    }
    while ( v7 < *v9 );
  }
  MiDereferencePageRuns((__int64)v9);
  if ( !a4 )
  {
    v16 &= 0xFFFFFFE0;
    v21 = 0;
    v17 = MmPfnDatabase;
    v18 = MxPfnAllocation;
    v19 = &v16;
    v20 = 24;
    EtwTraceSiloDcEvent((__int64)&v19, 1u, a1, a2, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
