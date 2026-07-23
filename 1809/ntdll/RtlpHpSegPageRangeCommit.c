/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180015130
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x1800150B0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpMetadataCommit @ 0x180066ABC (RtlpHpMetadataCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180075BB0 (RtlpHpSegLfhVsDecommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x18006E008 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180105D20 (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogMemStats @ 0x180109F84 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(__int64 *a1, __int64 a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  unsigned int v7; // esi
  unsigned int v10; // r12d
  int v11; // edx
  unsigned int v12; // ebp
  int v13; // eax
  char v14; // r9
  int v15; // r11d
  unsigned int v16; // r14d
  int v17; // ebx
  char v18; // cl
  unsigned __int64 v19; // r10
  int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  int v24; // edx
  unsigned __int64 v25; // r11
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r11
  int v29; // ecx
  unsigned int v30; // r8d
  int v31; // edx
  unsigned int v32; // r11d
  __int64 result; // rax
  __int64 v34; // r14
  __int64 v35; // r14
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // r8d
  int v39; // edx
  int v40; // ecx
  unsigned int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned int v45; // r8d
  unsigned int v46; // edx
  int v47; // ebx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // [rsp+40h] [rbp-58h]
  int v53; // [rsp+44h] [rbp-54h]
  int v54; // [rsp+A0h] [rbp+8h]
  unsigned int v55; // [rsp+A8h] [rbp+10h]
  unsigned int v56; // [rsp+A8h] [rbp+10h]
  unsigned int v57; // [rsp+B0h] [rbp+18h] BYREF
  int v58; // [rsp+B8h] [rbp+20h]

  v7 = a3;
  v58 = 0;
  if ( (a5 & 0x800000) != 0 )
    v58 = 2;
  v10 = a3 + a4;
  v11 = 0x7FFF;
  if ( (*((_BYTE *)a1 + 13) & 7) != 0 )
    v11 = 511;
  v53 = v11;
  v12 = (unsigned int)((a2 - (a2 & *a1)) >> 5) << *((_BYTE *)a1 + 9);
  if ( a4 <= 0 )
    v10 = a3 - a4;
  v13 = 0;
  v54 = 0;
  if ( a3 >= v10 )
    goto LABEL_18;
  while ( 1 )
  {
    v14 = *((_BYTE *)a1 + 9);
    v15 = v10 - v7;
    if ( v11 - (v11 & (v7 + v12)) + 1 < v10 - v7 )
      v15 = v11 - (v11 & (v7 + v12)) + 1;
    v16 = 1 << v14;
    v17 = 0;
    v18 = *((_BYTE *)a1 + 9);
    v52 = v15;
    v19 = (unsigned __int64)v7 >> v14;
    v20 = -1;
    a5 = -1;
    v21 = a2 + 32 * v19;
    v22 = v19 << v18;
    v57 = v7 & (v16 - 1);
    v23 = v15 + v57 - 1;
    v24 = (v16 - 1) & v23;
    v25 = v23 >> v18;
    v26 = v24 + 1;
    v27 = v57;
    v28 = v21 + 32 * v25;
    v55 = v26;
    if ( v57 )
    {
      v45 = v16;
      if ( v21 == v28 )
        v45 = v26;
      v46 = *(unsigned __int8 *)(v21 + 25);
      if ( a4 <= 0 )
      {
        if ( v46 > v57 )
        {
          v47 = v7 & (v16 - 1);
          v45 = *(unsigned __int8 *)(v21 + 25);
          goto LABEL_64;
        }
      }
      else if ( v46 < v45 )
      {
        v47 = v45;
        v27 = *(unsigned __int8 *)(v21 + 25);
LABEL_64:
        v48 = v22 + v45;
        v17 = v47 - v46;
        a5 = v48;
        v20 = v22 + v27;
        if ( v17 )
        {
          a5 = v48;
          if ( a4 <= 0 )
          {
            a5 = v48;
            *(_BYTE *)(v21 + 25) = v17 + v46;
          }
        }
      }
      v21 += 32LL;
      LODWORD(v22) = v16 + v22;
    }
    for ( ; v21 < v28; LODWORD(v22) = v16 + v22 )
    {
      v38 = *(unsigned __int8 *)(v21 + 25);
      v39 = 0;
      v40 = v20;
      if ( a4 > 0 )
      {
        if ( v38 < v16 )
        {
          v20 = v38 + v22;
          v39 = v16 - v38;
          if ( v40 != -1 )
            v20 = v40;
          v41 = v16;
          goto LABEL_49;
        }
      }
      else if ( *(_BYTE *)(v21 + 25) )
      {
        v42 = v22;
        v39 = -v38;
        if ( v20 != -1 )
          v42 = v20;
        v20 = v42;
        v41 = *(unsigned __int8 *)(v21 + 25);
LABEL_49:
        v43 = v22 + v41;
        a5 = v43;
        if ( v39 )
        {
          a5 = v43;
          if ( a4 <= 0 )
          {
            a5 = v43;
            *(_BYTE *)(v21 + 25) = v39 + v38;
          }
        }
      }
      v17 += v39;
      v21 += 32LL;
    }
    v29 = v20;
    if ( v21 != v28 )
      goto LABEL_16;
    v30 = *(unsigned __int8 *)(v21 + 25);
    v31 = 0;
    if ( a4 <= 0 )
    {
      if ( !*(_BYTE *)(v21 + 25) )
        goto LABEL_15;
      v44 = v22;
      v31 = -v30;
      v32 = *(unsigned __int8 *)(v21 + 25);
      if ( v20 != -1 )
        v44 = v20;
      v20 = v44;
LABEL_35:
      a5 = v22 + v32;
      if ( v31 )
      {
        a5 = v22 + v32;
        if ( a4 <= 0 )
        {
          a5 = v22 + v32;
          *(_BYTE *)(v21 + 25) = v31 + v30;
        }
      }
      goto LABEL_15;
    }
    v32 = v55;
    if ( v30 < v55 )
    {
      v20 = v30 + v22;
      v31 = v55 - v30;
      if ( v29 != -1 )
        v20 = v29;
      goto LABEL_35;
    }
LABEL_15:
    v17 += v31;
LABEL_16:
    if ( !v17 )
      goto LABEL_17;
    v34 = *a1;
    v57 = v20;
    v35 = a2 & v34;
    a5 -= v20;
    v36 = 4096;
    v56 = v20 + v12;
    if ( v17 <= 0 )
      v36 = 0x4000;
    result = RtlpHpSegMgrCommit((int)a1, v17, v36, v58);
    if ( (int)result < 0 )
      return result;
    if ( v17 > 0 )
      RtlpHpSegPageRangeHandleCommit((_DWORD)a1, a2, (unsigned int)&v57, (unsigned int)&a5, 1);
    _InterlockedExchangeAdd64((__int64 *)((char *)a1 + *((__int16 *)a1 + 11) + 8), v17);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(a1[7], (char *)a1 + *((__int16 *)a1 + 11));
    *(_WORD *)(a2 + 28) = ~(v17 + ~*(_WORD *)(a2 + 28));
    if ( RtlGetCurrentServiceSessionId() )
      v37 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v37 = 2147353472LL;
    if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v49 = a1[7];
      v50 = v35 + (v56 << 12);
      v51 = (unsigned int)(a5 << 12);
      if ( v17 <= 0 )
        RtlpLogHeapDecommit(v49, v50, v51, 13LL);
      else
        RtlpLogHeapCommit(v49, v50, v51, 10LL);
    }
LABEL_17:
    v7 += v52;
    v13 = v17 + v54;
    v54 += v17;
    if ( v7 >= v10 )
    {
LABEL_18:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    v11 = v53;
  }
}
