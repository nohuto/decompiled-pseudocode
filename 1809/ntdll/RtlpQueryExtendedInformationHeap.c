/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x18007D330
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18007B17C (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x18005B71C (RtlpWalkHeapInternal.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006651C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpEstimateAllocatedSize @ 0x18007D518 (RtlpEstimateAllocatedSize.c)
 *     RtlpHpHeapReportCounters @ 0x18007D558 (RtlpHpHeapReportCounters.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpGetContainingRange @ 0x1800F3544 (RtlpGetContainingRange.c)
 *     RtlpQueryMemoryUsageHeap @ 0x1800F3CBC (RtlpQueryMemoryUsageHeap.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD *, __int64); // r12
  unsigned int v6; // eax
  bool v7; // zf
  char v8; // r14
  _QWORD *v9; // rsi
  unsigned int NumberOfHeaps; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r15
  __int16 v20; // si
  int v21; // r15d
  unsigned __int64 v22; // rsi
  int HeapProtection; // esi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 Metadata; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  char v36; // [rsp+30h] [rbp-D0h]
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v40)(_QWORD *, __int64); // [rsp+48h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  unsigned __int64 v45; // [rsp+98h] [rbp-68h]
  _QWORD v46[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v47[16]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v48[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v4 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v6 = *(_DWORD *)a2;
  v38 = *(_DWORD *)a2;
  v39 = v2;
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v40 = v4;
  v45 = 0LL;
  if ( v7 )
  {
    v8 = 1;
    v36 = 1;
    v9 = (_QWORD *)a1;
    v44 = a1;
  }
  else
  {
    v7 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    v8 = 0;
    v36 = 0;
    v9 = 0LL;
    v44 = 0LL;
    if ( !v7 )
      return 3221225474LL;
  }
  if ( v6 != 0x80000000 )
  {
    memset(v46, 0, 0xA8uLL);
    LODWORD(v46[0]) = 2;
    v46[1] = 64LL;
    v46[2] = a1;
    if ( v8 )
    {
      v46[4] = v9[16] << 12;
      v46[4] += v9[11] << 12;
      v46[5] = v9[17] << 12;
      v46[5] += v9[12] << 12;
      result = 0LL;
      LODWORD(v46[3]) = 0;
    }
    else
    {
      LODWORD(v46[3]) = *(unsigned __int8 *)(a1 + 418);
      result = RtlpQueryMemoryUsageHeap(a1, &v46[4], &v46[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v4(v46, v2);
    if ( (int)result < 0 || v38 < 3 )
      return result;
    memset(v43, 0, sizeof(v43));
    v41 = 0LL;
    v18 = 0LL;
    v42 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        result = RtlpWalkHeapInternal(a1, (__int64)v43);
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v20 = WORD1(v43[2]);
        if ( (v43[2] & 0x20000) == 0 )
          break;
        if ( v8 || (v43[2] & 0x80000000) != 0 )
        {
          v21 = v45;
          v22 = v43[0];
        }
        else
        {
          v21 = v43[0];
          v22 = v43[0];
          v45 = v43[0];
          if ( v43[0] + 24 == *(_QWORD *)(a1 + 288) )
            v22 = a1;
        }
        memset(v46, 0, 0xA8uLL);
        v46[3] = LODWORD(v43[3]) + (unsigned __int64)HIDWORD(v43[3]);
        v46[4] = LODWORD(v43[3]);
        LODWORD(v46[0]) = 3;
        v46[1] = 56LL;
        v46[2] = v22;
        result = v40(v46, v39);
        if ( (int)result < 0 )
          return result;
        if ( v8 )
        {
          v18 = v43[0];
          v19 = v43[0] + LODWORD(v43[3]);
          v41 = v43[0];
          v42 = v19;
          HeapProtection = (*(_DWORD *)(v44 + 20) & 0x40000000) != 0 ? 64 : 4;
          v37 = HeapProtection;
        }
        else if ( (v43[2] & 0x80000000) != 0 )
        {
          v18 = v43[0];
          v19 = v43[0] + LODWORD(v43[3]);
          v41 = v43[0];
          v42 = v19;
          HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 0);
          v37 = HeapProtection;
        }
        else
        {
          RtlpGetContainingRange(v21, v21, (unsigned int)&v41, (unsigned int)&v42, (__int64)v47, (__int64)&v37);
          v18 = v41;
          v19 = v42;
          HeapProtection = v37;
        }
        memset(v46, 0, 0xA8uLL);
        v46[2] = v18;
        v24 = v19 - v18;
        LODWORD(v46[4]) = 1;
        HIDWORD(v46[4]) = HeapProtection;
LABEL_56:
        v46[3] = v24;
        v46[1] = 56LL;
        LODWORD(v46[0]) = 4;
        result = v40(v46, v39);
        if ( (int)result < 0 )
          return result;
      }
      if ( (v43[2] & 0x40000000) != 0 )
        break;
      if ( (v43[2] & 0x10000000) != 0 )
      {
        if ( v38 >= 4 )
        {
          memset(v46, 0, 0xA8uLL);
          v46[2] = v43[0];
          v24 = v43[1];
          v46[4] = 0x100000002LL;
          goto LABEL_56;
        }
      }
      else
      {
        v7 = v8 == 0;
        v29 = v43[0];
        if ( v7 && (v43[0] < v18 || v43[0] > v19) )
        {
          RtlpGetContainingRange(v45, v43[0], (unsigned int)&v41, (unsigned int)&v42, (__int64)v47, (__int64)&v37);
          if ( v38 < 4 )
          {
            v18 = v41;
            v19 = v42;
            goto LABEL_85;
          }
          memset(v46, 0, 0xA8uLL);
          v18 = v41;
          v19 = v42;
          LODWORD(v46[0]) = 4;
          v46[3] = v42 - v41;
          HIDWORD(v46[4]) = v37;
          v46[1] = 56LL;
          v46[2] = v41;
          LODWORD(v46[4]) = 1;
          result = v40(v46, v39);
          if ( (int)result < 0 )
            return result;
          v20 = WORD1(v43[2]);
          v29 = v43[0];
        }
        if ( v38 < 4 )
        {
          v8 = v36;
        }
        else
        {
LABEL_66:
          if ( (v20 & 0xF0) == 0 )
          {
            memset(v46, 0, 0xA8uLL);
            v46[4] = v43[1];
            v33 = *(unsigned __int64 *)((char *)&v43[4] + 4);
            LODWORD(v46[0]) = 5;
            v46[1] = 56LL;
            v46[2] = v29;
            if ( (v20 & 2) != 0 )
              v33 = LOBYTE(v43[2]);
            v46[5] = v33;
            v34 = v46[3];
            if ( (v20 & 1) != 0 )
              v34 = 1;
            LODWORD(v46[3]) = v34;
            if ( (v20 & 0x4000) != 0 )
            {
              v35 = v34 | 4;
              goto LABEL_82;
            }
            if ( v20 < 0 )
            {
              v35 = v34 | 8;
LABEL_82:
              LODWORD(v46[3]) = v35;
            }
            v32 = v46;
            goto LABEL_84;
          }
          memset(v48, 0, 0x58uLL);
          v48[4] = v43[1];
          v30 = *(unsigned __int64 *)((char *)&v43[4] + 4);
          LODWORD(v48[0]) = 5;
          v48[1] = 88LL;
          v48[2] = v29;
          if ( (v20 & 2) != 0 )
            v30 = LOBYTE(v43[2]);
          v48[5] = v30;
          v31 = 2;
          if ( (v20 & 0x4000) != 0 )
            v31 = 6;
          LODWORD(v48[3]) = v31;
          if ( (v20 & 1) != 0 )
            LODWORD(v48[3]) = v31 | 1;
          v48[9] = v43[3];
          LODWORD(v48[10]) = v43[4];
          HIDWORD(v48[7]) = 1;
          v32 = v48;
          v48[8] = 32LL;
LABEL_84:
          result = v40(v32, v39);
          if ( (int)result < 0 )
            return result;
LABEL_85:
          v8 = v36;
        }
      }
    }
    memset(v46, 0, 0xA8uLL);
    v25 = 0LL;
    LODWORD(v46[0]) = 3;
    Metadata = 0LL;
    v46[1] = 56LL;
    if ( v36 )
    {
      v46[2] = v43[0];
      Metadata = RtlpHpLargeAllocGetMetadata(v44, v43[0]);
      v46[3] = (*(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v46[4] = *(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v27 = v43[0] - 16;
      _m_prefetchw((const void *)(v43[0] - 16));
      if ( *(_BYTE *)(v27 + 15) == 5 )
        v27 -= 16LL * *(unsigned __int8 *)(v27 + 14);
      v25 = v27 - 48;
      v46[2] = (v27 - 48) & 0xFFFFFFFFFFFF0000uLL;
      v46[3] = *(_QWORD *)(v27 - 48 + 40);
      v46[4] = *(_QWORD *)(v27 - 48 + 32);
    }
    result = v40(v46, v39);
    if ( (int)result < 0 )
      return result;
    memset(v46, 0, 0xA8uLL);
    LODWORD(v46[0]) = 4;
    v46[1] = 56LL;
    if ( v36 )
    {
      v46[2] = v43[0];
      v28 = *(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v46[4]) = 1;
      v46[3] = v28;
      HIDWORD(v46[4]) = (*(_DWORD *)(v44 + 20) & 0x40000000) != 0 ? 64 : 4;
    }
    else
    {
      v46[2] = v25;
      v46[3] = *(_QWORD *)(v25 + 32);
      LODWORD(v46[4]) = 1;
      HIDWORD(v46[4]) = RtlpGetHeapProtection((_DWORD *)a1, 0);
    }
    result = v40(v46, v39);
    if ( (int)result < 0 )
      return result;
    v20 = WORD1(v43[2]);
    v29 = v43[0];
    goto LABEL_66;
  }
  memset(v46, 0, 0xA8uLL);
  LODWORD(v46[0]) = 0x80000000;
  v46[1] = 168LL;
  if ( v8 )
  {
    RtlpHpHeapReportCounters(v9, v46);
  }
  else
  {
    LODWORD(v46[3]) = *(unsigned __int16 *)(a1 + 208);
    HIDWORD(v46[2]) = 1;
    v46[4] = a1;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v46[5] = *(_QWORD *)(a1 + 568);
    v11 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    HIDWORD(v46[3]) = NumberOfHeaps - 1;
    v46[6] = v11;
    v46[10] = RtlpEstimateAllocatedSize(a1);
    v46[11] = 16LL * *(_QWORD *)(a1 + 192);
    LODWORD(v46[9]) = *(_DWORD *)(a1 + 604);
    LODWORD(v46[13]) = *(_DWORD *)(a1 + 592);
    v46[8] = *(_QWORD *)(a1 + 584);
    LODWORD(v46[7]) = *(_DWORD *)(a1 + 600);
    HIDWORD(v46[13]) = *(_DWORD *)(a1 + 608);
    LODWORD(v46[14]) = HIDWORD(v46[13]);
    v12 = *(_DWORD **)(a1 + 312);
    if ( v12 )
    {
      v13 = v12[4];
      LODWORD(v46[12]) = v13;
      if ( *(_QWORD *)v12 )
        LODWORD(v46[12]) = *(_DWORD *)(*(_QWORD *)v12 + 16LL) + v13;
    }
    v14 = *(__int64 **)(a1 + 352);
    v15 = *(_DWORD *)(a1 + 620);
    HIDWORD(v46[12]) = v15;
    if ( v14 )
    {
      v16 = *v14;
      if ( v16 != -1 )
        v3 = *(_DWORD *)(v16 + 36);
      HIDWORD(v46[12]) = v3 + v15;
    }
  }
  return v4(v46, v2);
}
