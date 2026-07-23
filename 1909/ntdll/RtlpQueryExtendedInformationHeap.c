/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x180077050
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpWalkHeapInternal @ 0x180050FEC (RtlpWalkHeapInternal.c)
 *     RtlpHpHeapReportCounters @ 0x180077240 (RtlpHpHeapReportCounters.c)
 *     RtlpEstimateAllocatedSize @ 0x180077304 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpGetContainingRange @ 0x1800F06F4 (RtlpGetContainingRange.c)
 *     RtlpQueryMemoryUsageHeap @ 0x1800F106C (RtlpQueryMemoryUsageHeap.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD *, __int64); // r13
  unsigned int v6; // eax
  bool v7; // zf
  char v8; // r14
  _QWORD *v9; // rsi
  __int64 result; // rax
  unsigned int NumberOfHeaps; // ecx
  __int64 v12; // rax
  _DWORD *v13; // rax
  int v14; // ecx
  __int64 *v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  __int16 v20; // si
  int v21; // r15d
  __int64 v22; // rsi
  int HeapProtection; // esi
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  int v34; // eax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  char v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v41; // [rsp+38h] [rbp-C8h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v43)(_QWORD *, __int64); // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  _QWORD v49[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[16]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v51[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v4 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v6 = *(_DWORD *)a2;
  v41 = *(_DWORD *)a2;
  v42 = v2;
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v43 = v4;
  v48 = 0LL;
  if ( v7 )
  {
    v8 = 1;
    v39 = 1;
    v9 = (_QWORD *)a1;
    v47 = a1;
  }
  else
  {
    v7 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    v8 = 0;
    v39 = 0;
    v9 = 0LL;
    v47 = 0LL;
    if ( !v7 )
      return 3221225474LL;
  }
  if ( v6 != 0x80000000 )
  {
    memset(v49, 0, 0xA8uLL);
    LODWORD(v49[0]) = 2;
    v49[1] = 64LL;
    v49[2] = a1;
    if ( v8 )
    {
      v49[4] = v9[16] << 12;
      v49[4] += v9[11] << 12;
      v49[5] = v9[17] << 12;
      v49[5] += v9[12] << 12;
      result = 0LL;
      LODWORD(v49[3]) = 0;
    }
    else
    {
      LODWORD(v49[3]) = *(unsigned __int8 *)(a1 + 418);
      result = RtlpQueryMemoryUsageHeap(a1, &v49[4], &v49[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v4(v49, v2);
    if ( (int)result < 0 || v41 < 3 )
      return result;
    memset(v46, 0, sizeof(v46));
    v44 = 0LL;
    v18 = 0LL;
    v45 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        result = RtlpWalkHeapInternal(a1, (__int64)v46);
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v20 = WORD1(v46[2]);
        if ( (v46[2] & 0x20000LL) == 0 )
          break;
        if ( v8 || (v46[2] & 0x80000000LL) != 0 )
        {
          v21 = v48;
          v22 = v46[0];
        }
        else
        {
          v21 = v46[0];
          v22 = v46[0];
          v48 = v46[0];
          if ( v46[0] + 24LL == *(_QWORD *)(a1 + 288) )
            v22 = a1;
        }
        memset(v49, 0, 0xA8uLL);
        v49[3] = LODWORD(v46[3]) + (unsigned __int64)HIDWORD(v46[3]);
        v49[4] = LODWORD(v46[3]);
        LODWORD(v49[0]) = 3;
        v49[1] = 56LL;
        v49[2] = v22;
        result = v43(v49, v42);
        if ( (int)result < 0 )
          return result;
        if ( v8 )
        {
          v18 = v46[0];
          v19 = v46[0] + LODWORD(v46[3]);
          v44 = v46[0];
          v45 = v19;
          HeapProtection = (*(_DWORD *)(v47 + 20) & 0x40000000) != 0 ? 64 : 4;
          v40 = HeapProtection;
        }
        else if ( (v46[2] & 0x80000000LL) != 0 )
        {
          v18 = v46[0];
          v19 = v46[0] + LODWORD(v46[3]);
          v44 = v46[0];
          v45 = v19;
          HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 0);
          v40 = HeapProtection;
        }
        else
        {
          RtlpGetContainingRange(v21, v21, (unsigned int)&v44, (unsigned int)&v45, (__int64)v50, (__int64)&v40);
          v18 = v44;
          v19 = v45;
          HeapProtection = v40;
        }
        memset(v49, 0, 0xA8uLL);
        v49[2] = v18;
        v24 = v19 - v18;
        LODWORD(v49[4]) = 1;
        HIDWORD(v49[4]) = HeapProtection;
LABEL_70:
        v49[3] = v24;
        v49[1] = 56LL;
        LODWORD(v49[0]) = 4;
        result = v43(v49, v42);
        if ( (int)result < 0 )
          return result;
      }
      if ( (v46[2] & 0x40000000LL) != 0 )
        break;
      if ( (v46[2] & 0x10000000LL) != 0 )
      {
        if ( v41 >= 4 )
        {
          memset(v49, 0, 0xA8uLL);
          v49[2] = v46[0];
          v24 = v46[1];
          v49[4] = 0x100000002LL;
          goto LABEL_70;
        }
      }
      else
      {
        v7 = v8 == 0;
        v32 = v46[0];
        if ( v7 && (v46[0] < v18 || v46[0] > v19) )
        {
          RtlpGetContainingRange(v48, v46[0], (unsigned int)&v44, (unsigned int)&v45, (__int64)v50, (__int64)&v40);
          if ( v41 < 4 )
          {
            v18 = v44;
            v19 = v45;
            goto LABEL_99;
          }
          memset(v49, 0, 0xA8uLL);
          v18 = v44;
          v19 = v45;
          LODWORD(v49[0]) = 4;
          v49[3] = v45 - v44;
          HIDWORD(v49[4]) = v40;
          v49[1] = 56LL;
          v49[2] = v44;
          LODWORD(v49[4]) = 1;
          result = v43(v49, v42);
          if ( (int)result < 0 )
            return result;
          v20 = WORD1(v46[2]);
          v32 = v46[0];
        }
        if ( v41 < 4 )
        {
          v8 = v39;
        }
        else
        {
LABEL_80:
          if ( (v20 & 0xF0) == 0 )
          {
            memset(v49, 0, 0xA8uLL);
            v49[4] = v46[1];
            v36 = *(_QWORD *)((char *)&v46[4] + 4);
            LODWORD(v49[0]) = 5;
            v49[1] = 56LL;
            v49[2] = v32;
            if ( (v20 & 2) != 0 )
              v36 = LOBYTE(v46[2]);
            v49[5] = v36;
            v37 = v49[3];
            if ( (v20 & 1) != 0 )
              v37 = 1;
            LODWORD(v49[3]) = v37;
            if ( (v20 & 0x4000) != 0 )
            {
              v38 = v37 | 4;
              goto LABEL_96;
            }
            if ( v20 < 0 )
            {
              v38 = v37 | 8;
LABEL_96:
              LODWORD(v49[3]) = v38;
            }
            v35 = v49;
            goto LABEL_98;
          }
          memset(v51, 0, 0x58uLL);
          v51[4] = v46[1];
          v33 = *(_QWORD *)((char *)&v46[4] + 4);
          LODWORD(v51[0]) = 5;
          v51[1] = 88LL;
          v51[2] = v32;
          if ( (v20 & 2) != 0 )
            v33 = LOBYTE(v46[2]);
          v51[5] = v33;
          v34 = 2;
          if ( (v20 & 0x4000) != 0 )
            v34 = 6;
          LODWORD(v51[3]) = v34;
          if ( (v20 & 1) != 0 )
            LODWORD(v51[3]) = v34 | 1;
          v51[9] = v46[3];
          LODWORD(v51[10]) = v46[4];
          HIDWORD(v51[7]) = 1;
          v35 = v51;
          v51[8] = 32LL;
LABEL_98:
          result = v43(v35, v42);
          if ( (int)result < 0 )
            return result;
LABEL_99:
          v8 = v39;
        }
      }
    }
    memset(v49, 0, 0xA8uLL);
    v25 = 0LL;
    LODWORD(v49[0]) = 3;
    v26 = 0LL;
    v49[1] = 56LL;
    if ( v39 )
    {
      v49[2] = v46[0];
      v26 = *(_QWORD *)(v47 + 72);
      if ( (*(_BYTE *)(v47 + 80) & 1) != 0 )
      {
        if ( v26 )
          v26 ^= v47 + 72;
        else
          v26 = 0LL;
      }
      while ( v26 )
      {
        v29 = *(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL;
        if ( v46[0] < v29 )
        {
          v30 = *(_QWORD *)v26;
        }
        else
        {
          if ( v46[0] <= v29 )
            break;
          v30 = *(_QWORD *)(v26 + 8);
        }
        if ( (*(_BYTE *)(v47 + 80) & 1) != 0 && v30 )
          v26 ^= v30;
        else
          v26 = v30;
      }
      v49[3] = (*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v28 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v27 = v46[0] - 16LL;
      _m_prefetchw((const void *)(v46[0] - 16LL));
      if ( *(_BYTE *)(v27 + 15) == 5 )
        v27 -= 16LL * *(unsigned __int8 *)(v27 + 14);
      v25 = v27 - 48;
      v49[2] = (v27 - 48) & 0xFFFFFFFFFFFF0000uLL;
      v49[3] = *(_QWORD *)(v27 - 48 + 40);
      v28 = *(_QWORD *)(v27 - 48 + 32);
    }
    v49[4] = v28;
    result = v43(v49, v42);
    if ( (int)result < 0 )
      return result;
    memset(v49, 0, 0xA8uLL);
    LODWORD(v49[0]) = 4;
    v49[1] = 56LL;
    if ( v39 )
    {
      v49[2] = v46[0];
      v31 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v49[4]) = 1;
      v49[3] = v31;
      HIDWORD(v49[4]) = (*(_DWORD *)(v47 + 20) & 0x40000000) != 0 ? 64 : 4;
    }
    else
    {
      v49[2] = v25;
      v49[3] = *(_QWORD *)(v25 + 32);
      LODWORD(v49[4]) = 1;
      HIDWORD(v49[4]) = RtlpGetHeapProtection((_DWORD *)a1, 0);
    }
    result = v43(v49, v42);
    if ( (int)result < 0 )
      return result;
    v20 = WORD1(v46[2]);
    v32 = v46[0];
    goto LABEL_80;
  }
  memset(v49, 0, 0xA8uLL);
  LODWORD(v49[0]) = 0x80000000;
  v49[1] = 168LL;
  if ( v8 )
  {
    RtlpHpHeapReportCounters(v9, v49);
  }
  else
  {
    LODWORD(v49[3]) = *(unsigned __int16 *)(a1 + 208);
    HIDWORD(v49[2]) = 1;
    v49[4] = a1;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v49[5] = *(_QWORD *)(a1 + 568);
    v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    HIDWORD(v49[3]) = NumberOfHeaps - 1;
    v49[6] = v12;
    v49[10] = RtlpEstimateAllocatedSize(a1);
    v49[11] = 16LL * *(_QWORD *)(a1 + 192);
    LODWORD(v49[9]) = *(_DWORD *)(a1 + 604);
    LODWORD(v49[13]) = *(_DWORD *)(a1 + 592);
    v49[8] = *(_QWORD *)(a1 + 584);
    LODWORD(v49[7]) = *(_DWORD *)(a1 + 600);
    HIDWORD(v49[13]) = *(_DWORD *)(a1 + 608);
    LODWORD(v49[14]) = HIDWORD(v49[13]);
    v13 = *(_DWORD **)(a1 + 312);
    if ( v13 )
    {
      v14 = v13[4];
      LODWORD(v49[12]) = v14;
      if ( *(_QWORD *)v13 )
        LODWORD(v49[12]) = *(_DWORD *)(*(_QWORD *)v13 + 16LL) + v14;
    }
    v15 = *(__int64 **)(a1 + 352);
    v16 = *(_DWORD *)(a1 + 620);
    HIDWORD(v49[12]) = v16;
    if ( v15 )
    {
      v17 = *v15;
      if ( v17 != -1 )
        v3 = *(_DWORD *)(v17 + 36);
      HIDWORD(v49[12]) = v3 + v16;
    }
  }
  return v4(v49, v2);
}
