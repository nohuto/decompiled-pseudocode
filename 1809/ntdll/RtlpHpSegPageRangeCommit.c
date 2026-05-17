/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180015130
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x1800150B0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpMetadataCommit @ 0x180066ABC (RtlpHpMetadataCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180075BA0 (RtlpHpSegLfhVsDecommit.c)
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
  signed __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // r8d
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  int v48; // ebx
  int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+44h] [rbp-54h]
  int v55; // [rsp+A0h] [rbp+8h]
  unsigned int v56; // [rsp+A8h] [rbp+10h]
  unsigned int v57; // [rsp+A8h] [rbp+10h]
  unsigned int v58; // [rsp+B0h] [rbp+18h] BYREF
  int v59; // [rsp+B8h] [rbp+20h]

  v7 = a3;
  v59 = 0;
  if ( (a5 & 0x800000) != 0 )
    v59 = 2;
  v10 = a3 + a4;
  v11 = 0x7FFF;
  if ( (*((_BYTE *)a1 + 13) & 7) != 0 )
    v11 = 511;
  v54 = v11;
  v12 = (unsigned int)((a2 - (a2 & *a1)) >> 5) << *((_BYTE *)a1 + 9);
  if ( a4 <= 0 )
    v10 = a3 - a4;
  v13 = 0;
  v55 = 0;
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
    v53 = v15;
    v19 = (unsigned __int64)v7 >> v14;
    v20 = -1;
    a5 = -1;
    v21 = a2 + 32 * v19;
    v22 = v19 << v18;
    v58 = v7 & (v16 - 1);
    v23 = v15 + v58 - 1;
    v24 = (v16 - 1) & v23;
    v25 = v23 >> v18;
    v26 = v24 + 1;
    v27 = v58;
    v28 = v21 + 32 * v25;
    v56 = v26;
    if ( v58 )
    {
      v46 = v16;
      if ( v21 == v28 )
        v46 = v26;
      v47 = *(unsigned __int8 *)(v21 + 25);
      if ( a4 <= 0 )
      {
        if ( v47 > v58 )
        {
          v48 = v7 & (v16 - 1);
          v46 = *(unsigned __int8 *)(v21 + 25);
          goto LABEL_64;
        }
      }
      else if ( v47 < v46 )
      {
        v48 = v46;
        v27 = *(unsigned __int8 *)(v21 + 25);
LABEL_64:
        v49 = v22 + v46;
        v17 = v48 - v47;
        a5 = v49;
        v20 = v22 + v27;
        if ( v17 )
        {
          a5 = v49;
          if ( a4 <= 0 )
          {
            a5 = v49;
            *(_BYTE *)(v21 + 25) = v17 + v47;
          }
        }
      }
      v21 += 32LL;
      LODWORD(v22) = v16 + v22;
    }
    for ( ; v21 < v28; LODWORD(v22) = v16 + v22 )
    {
      v39 = *(unsigned __int8 *)(v21 + 25);
      v40 = 0;
      v41 = v20;
      if ( a4 > 0 )
      {
        if ( v39 < v16 )
        {
          v20 = v39 + v22;
          v40 = v16 - v39;
          if ( v41 != -1 )
            v20 = v41;
          v42 = v16;
          goto LABEL_49;
        }
      }
      else if ( *(_BYTE *)(v21 + 25) )
      {
        v43 = v22;
        v40 = -v39;
        if ( v20 != -1 )
          v43 = v20;
        v20 = v43;
        v42 = *(unsigned __int8 *)(v21 + 25);
LABEL_49:
        v44 = v22 + v42;
        a5 = v44;
        if ( v40 )
        {
          a5 = v44;
          if ( a4 <= 0 )
          {
            a5 = v44;
            *(_BYTE *)(v21 + 25) = v40 + v39;
          }
        }
      }
      v17 += v40;
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
      v45 = v22;
      v31 = -v30;
      v32 = *(unsigned __int8 *)(v21 + 25);
      if ( v20 != -1 )
        v45 = v20;
      v20 = v45;
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
    v32 = v56;
    if ( v30 < v56 )
    {
      v20 = v30 + v22;
      v31 = v56 - v30;
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
    v58 = v20;
    v35 = a2 & v34;
    a5 -= v20;
    v36 = 4096;
    v57 = v20 + v12;
    if ( v17 <= 0 )
      v36 = 0x4000;
    result = RtlpHpSegMgrCommit((_DWORD)a1, v35, v20 + v12, a5, v17, v36, v59);
    if ( (int)result < 0 )
      return result;
    if ( v17 > 0 )
      RtlpHpSegPageRangeHandleCommit((_DWORD)a1, a2, (unsigned int)&v58, (unsigned int)&a5, 1);
    v37 = _InterlockedExchangeAdd64((__int64 *)((char *)a1 + *((__int16 *)a1 + 11) + 8), v17);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(a1[7], (char *)a1 + *((__int16 *)a1 + 11));
    *(_WORD *)(a2 + 28) = ~(v17 + ~*(_WORD *)(a2 + 28));
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v37) )
      v38 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v38 = 2147353472LL;
    if ( *(_BYTE *)v38 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v50 = a1[7];
      v51 = v35 + (v57 << 12);
      v52 = (unsigned int)(a5 << 12);
      if ( v17 <= 0 )
        RtlpLogHeapDecommit(v50, v51, v52, 13LL);
      else
        RtlpLogHeapCommit(v50, v51, v52, 10LL);
    }
LABEL_17:
    v7 += v53;
    v13 = v17 + v55;
    v55 += v17;
    if ( v7 >= v10 )
    {
LABEL_18:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    v11 = v54;
  }
}
