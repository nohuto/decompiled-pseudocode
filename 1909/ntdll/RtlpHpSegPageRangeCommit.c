/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180047490
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x1800367E0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x180036D88 (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x180045D7C (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1800465D0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180047370 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpMetadataCommit @ 0x18004F044 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x180047D28 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x1801033F8 (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogMemStats @ 0x180107428 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v9; // r12d
  int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // eax
  char v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edi
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r9
  unsigned int v22; // r11d
  unsigned int v23; // eax
  int v24; // ebx
  int v25; // ecx
  unsigned __int64 v26; // rsi
  int v27; // r8d
  unsigned __int64 v28; // rsi
  unsigned int v29; // ebp
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ebx
  unsigned int v33; // eax
  int v34; // edx
  int v35; // r11d
  unsigned int v36; // ecx
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // edx
  int v40; // r11d
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rsi
  unsigned int v44; // edi
  int v45; // eax
  __int64 result; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned int v51; // [rsp+40h] [rbp-68h]
  unsigned int v52; // [rsp+44h] [rbp-64h]
  int v53; // [rsp+48h] [rbp-60h]
  unsigned int v54; // [rsp+50h] [rbp-58h]
  int v55; // [rsp+B0h] [rbp+8h]
  int v56; // [rsp+B8h] [rbp+10h]
  int v57; // [rsp+C0h] [rbp+18h] BYREF
  int v58; // [rsp+C8h] [rbp+20h] BYREF

  v56 = (a5 >> 22) & 2;
  v9 = a3;
  v10 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v10 = 0x7FFF;
  v53 = v10;
  v11 = a3 - a4;
  v12 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  v13 = a4 + a3;
  v54 = v12;
  if ( a4 <= 0 )
    v13 = v11;
  v14 = 0;
  v52 = v13;
  v55 = 0;
  if ( v9 < v13 )
  {
    while ( 1 )
    {
      v15 = v13;
      v16 = *(_BYTE *)(a1 + 9);
      v17 = v15 - v9;
      v18 = v10 - (v10 & (v9 + v12)) + 1;
      if ( v18 >= v17 )
        v18 = v17;
      v19 = 1 << v16;
      v51 = v18;
      v20 = (unsigned __int64)v9 >> v16 << v16;
      v21 = a2 + 32 * ((unsigned __int64)v9 >> v16);
      v22 = v9 & ((1 << v16) - 1);
      v23 = v18 + v22 - 1;
      v24 = 0;
      v25 = -1;
      v26 = 32 * ((unsigned __int64)v23 >> v16);
      v27 = -1;
      v28 = v21 + v26;
      v29 = (v23 & (v19 - 1)) + 1;
      if ( v22 )
        break;
LABEL_20:
      while ( v21 < v28 )
      {
        v33 = *(unsigned __int8 *)(v21 + 25);
        v34 = 0;
        v35 = v27;
        if ( a4 <= 0 )
        {
          if ( *(_BYTE *)(v21 + 25) )
          {
            v37 = v20;
            v34 = -v33;
            if ( v27 != -1 )
              v37 = v27;
            v27 = v37;
            v36 = *(unsigned __int8 *)(v21 + 25);
            goto LABEL_30;
          }
        }
        else if ( v33 < v19 )
        {
          v27 = v33 + v20;
          v34 = v19 - v33;
          v36 = v19;
          if ( v35 != -1 )
            v27 = v35;
LABEL_30:
          v25 = v20 + v36;
          if ( v34 && a4 <= 0 )
            *(_BYTE *)(v21 + 25) = v34 + v33;
        }
        v24 += v34;
        v21 += 32LL;
        LODWORD(v20) = v19 + v20;
      }
      v38 = v27;
      if ( v21 == v28 )
      {
        v39 = *(unsigned __int8 *)(v21 + 25);
        v40 = 0;
        if ( a4 <= 0 )
        {
          if ( *(_BYTE *)(v21 + 25) )
          {
            v41 = v20;
            v40 = -v39;
            v29 = *(unsigned __int8 *)(v21 + 25);
            if ( v27 != -1 )
              v41 = v27;
            v27 = v41;
LABEL_44:
            v25 = v20 + v29;
            if ( v40 && a4 <= 0 )
              *(_BYTE *)(v21 + 25) = v40 + v39;
          }
        }
        else if ( v39 < v29 )
        {
          v27 = v20 + v39;
          v40 = v29 - v39;
          if ( v38 != -1 )
            v27 = v38;
          goto LABEL_44;
        }
        v24 += v40;
      }
      if ( v24 )
      {
        v42 = v25 - v27;
        v43 = a2 & *(_QWORD *)a1;
        v44 = v27 + v54;
        v57 = v27;
        v58 = v42;
        if ( v24 > 0 )
        {
          v45 = 4096;
          if ( (a5 & 2) != 0 )
            v45 = 1073745920;
        }
        else
        {
          v45 = 0x4000;
        }
        result = RtlpHpSegMgrCommit(a1, v43, v44, v42, v24, v45, v56);
        if ( (int)result < 0 )
          return result;
        if ( v24 > 0 )
          RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v57, (unsigned int)&v58, 1);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v24);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
        *(_WORD *)(a2 + 28) = ~(v24 + ~*(_WORD *)(a2 + 28));
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v47 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v47 = 2147353472LL;
        if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          v48 = *(_QWORD *)(a1 + 56);
          v49 = v43 + (v44 << 12);
          v50 = (unsigned int)(v58 << 12);
          if ( v24 <= 0 )
            RtlpLogHeapDecommit(v48, v49, v50, 13LL);
          else
            RtlpLogHeapCommit(v48, v49, v50, 10LL);
        }
      }
      v9 += v51;
      v14 = v24 + v55;
      v13 = v52;
      v55 += v24;
      if ( v9 >= v52 )
        goto LABEL_68;
      v12 = v54;
      v10 = v53;
    }
    v30 = *(unsigned __int8 *)(v21 + 25);
    v31 = v19;
    if ( v21 == v28 )
      v31 = v29;
    if ( a4 <= 0 )
    {
      if ( v30 > v22 )
      {
        v32 = v22;
        v31 = *(unsigned __int8 *)(v21 + 25);
        goto LABEL_16;
      }
    }
    else if ( v30 < v31 )
    {
      v32 = v31;
      v22 = *(unsigned __int8 *)(v21 + 25);
LABEL_16:
      v24 = v32 - v30;
      v27 = v20 + v22;
      v25 = v20 + v31;
      if ( v24 && a4 <= 0 )
        *(_BYTE *)(v21 + 25) = v24 + v30;
    }
    v21 += 32LL;
    LODWORD(v20) = v19 + v20;
    goto LABEL_20;
  }
LABEL_68:
  if ( a6 )
    *a6 = v14;
  return 0LL;
}
