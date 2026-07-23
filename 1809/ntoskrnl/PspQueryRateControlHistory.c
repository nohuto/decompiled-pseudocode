/*
 * XREFs of PspQueryRateControlHistory @ 0x1405A8F5C
 * Callers:
 *     PspEnforceLimitsJobPreCallback @ 0x1405A8E50 (PspEnforceLimitsJobPreCallback.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspJobIoRateQueryHistory @ 0x14000F310 (PspJobIoRateQueryHistory.c)
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     KeQuerySchedulingGroupHistory @ 0x14000F634 (KeQuerySchedulingGroupHistory.c)
 *     RtlCopyBitMap @ 0x14000F710 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspNetRateControlDispatch @ 0x14088B074 (PspNetRateControlDispatch.c)
 */

void __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  char v6; // r15
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned int v13; // ecx
  __int64 v14; // r12
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  void *v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  __int64 *v21; // rdx
  ULONG v22; // eax
  PVOID PoolWithTag; // rax
  __int64 v24; // rcx
  ULONG TargetBit; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v27; // [rsp+28h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF
  int v30; // [rsp+48h] [rbp-28h]
  __int64 v31; // [rsp+50h] [rbp-20h]
  unsigned int v32; // [rsp+58h] [rbp-18h]
  unsigned int v33; // [rsp+5Ch] [rbp-14h]

  *a4 = 0;
  v6 = a3;
  if ( a5 == 1 )
  {
    v11 = a1 + 1344;
  }
  else
  {
    v9 = (__int64 *)(a1 + 1296);
    v10 = (__int64 *)(a1 + 1008);
    if ( !a5 )
      v10 = v9;
    v11 = *v10;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        if ( (int)PspJobIoRateQueryHistory(a1, &BitMapHeader, &v27, &TargetBit) < 0 )
          return;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v11 + 128, &BitMapHeader, &v27, &TargetBit);
      }
      v12 = TargetBit;
      v13 = v27;
      v14 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    }
    else
    {
      v30 = 1;
      v29 = *(_QWORD *)(v11 + 56);
      if ( (int)PspNetRateControlDispatch(&v29) < 0 )
        return;
      v14 = v31;
      v13 = v32;
      v12 = v33;
    }
    v15 = a2 - 2;
    if ( v15 )
    {
      if ( v15 == 1 )
        v16 = 600000;
      else
        v16 = 10000;
    }
    else
    {
      v16 = 60000;
    }
    v17 = (v13 + v16 - 1) / v13;
    v18 = *(void **)(v11 + 24);
    v19 = v17;
    v20 = (v17 + 7) >> 3;
    if ( v20 < 8 )
      v20 = 8;
    if ( *(_QWORD *)(v11 + 24) && *(_QWORD *)(v11 + 32) < (unsigned __int64)v20 )
    {
      ExFreePoolWithTag(v18, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v18 = 0LL;
    }
    if ( v18 )
    {
      if ( v12 >= 8 * v20 )
      {
        memset(v18, 0, v20);
      }
      else if ( v12 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v11 + 8), (PRTL_BITMAP)(v11 + 8), v12);
        RtlClearBits((PRTL_BITMAP)(v11 + 8), 0, v12);
      }
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, v20);
      v24 = *(_QWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 8) = 8 * v20;
      *(_QWORD *)(v11 + 16) = v24;
      *(_QWORD *)(v11 + 32) = v20;
      v6 = a3;
    }
    v21 = *(__int64 **)(v11 + 24);
    BitMapHeader.SizeOfBitMap = v19;
    if ( v12 > 0x40 )
      LOBYTE(v12) = 64;
    *v21 = v14 & ((1LL << v12) - 1) | *v21 & ~((1LL << v12) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v11 + 24);
    v22 = 100 * RtlNumberOfSetBits(&BitMapHeader) / v19;
    if ( v22 >= 0x3C )
    {
      *a4 = 3;
    }
    else if ( v22 >= 0x28 )
    {
      *a4 = 2;
    }
    else if ( v22 >= 0x14 )
    {
      *a4 = 1;
    }
    if ( v6 )
      memset(*(void **)(v11 + 24), 0, *(_QWORD *)(v11 + 32));
  }
}
