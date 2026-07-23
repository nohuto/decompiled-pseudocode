/*
 * XREFs of PspQueryRateControlHistory @ 0x140616FFC
 * Callers:
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140616EF0 (PspEnforceLimitsJobPreCallback.c)
 * Callees:
 *     PspJobIoRateQueryHistory @ 0x140083CE8 (PspJobIoRateQueryHistory.c)
 *     RtlNumberOfSetBits @ 0x140083DF0 (RtlNumberOfSetBits.c)
 *     KeQuerySchedulingGroupHistory @ 0x140083FE4 (KeQuerySchedulingGroupHistory.c)
 *     RtlCopyBitMap @ 0x1400840D0 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x1400CF210 (RtlClearBits.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspNetRateControlDispatch @ 0x1408C7624 (PspNetRateControlDispatch.c)
 */

__int64 __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  __int64 result; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // ecx
  __int64 v13; // r12
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // eax
  void *v17; // rcx
  unsigned int v18; // r13d
  unsigned int v19; // ebx
  __int64 *v20; // rdx
  __int64 v21; // rcx
  ULONG TargetBit; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v27[4]; // [rsp+48h] [rbp-28h] BYREF

  memset(v27, 0, sizeof(v27));
  result = 0LL;
  *a4 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  if ( a5 == 1 )
  {
    v10 = a1 + 1344;
  }
  else
  {
    result = a1 + 1296;
    v9 = (__int64 *)(a1 + 1008);
    if ( !a5 )
      v9 = (__int64 *)(a1 + 1296);
    v10 = *v9;
  }
  if ( v10 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        result = PspJobIoRateQueryHistory(a1, &v25, &v24, &TargetBit);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v10 + 128, &v25, &v24, &TargetBit);
      }
      v11 = TargetBit;
      v12 = v24;
      v13 = v25;
    }
    else
    {
      LODWORD(v27[1]) = 1;
      v27[0] = *(_QWORD *)(v10 + 56);
      result = PspNetRateControlDispatch(v27);
      if ( (int)result < 0 )
        return result;
      v13 = v27[2];
      v12 = v27[3];
      v11 = HIDWORD(v27[3]);
    }
    v14 = a2 - 2;
    if ( v14 )
    {
      if ( v14 == 1 )
        v15 = 600000;
      else
        v15 = 10000;
    }
    else
    {
      v15 = 60000;
    }
    v16 = (v12 + v15 - 1) / v12;
    v17 = *(void **)(v10 + 24);
    v18 = v16;
    v19 = (v16 + 7) >> 3;
    if ( v19 < 8 )
      v19 = 8;
    if ( *(_QWORD *)(v10 + 24) && *(_QWORD *)(v10 + 32) < (unsigned __int64)v19 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 32) = 0LL;
      v17 = 0LL;
    }
    if ( v17 )
    {
      if ( v11 >= 8 * v19 )
      {
        memset(v17, 0, v19);
      }
      else if ( v11 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v10 + 8), (PRTL_BITMAP)(v10 + 8), v11);
        RtlClearBits((PRTL_BITMAP)(v10 + 8), 0, v11);
      }
    }
    else
    {
      result = (__int64)ExAllocatePoolWithTag(PagedPool, v19, 0x624A7350u);
      *(_QWORD *)(v10 + 24) = result;
      if ( !result )
        return result;
      memset((void *)result, 0, v19);
      v21 = *(_QWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 8) = 8 * v19;
      *(_QWORD *)(v10 + 16) = v21;
      *(_QWORD *)(v10 + 32) = v19;
    }
    v20 = *(__int64 **)(v10 + 24);
    BitMapHeader.SizeOfBitMap = v18;
    if ( v11 > 0x40 )
      LOBYTE(v11) = 64;
    *v20 = v13 & ((1LL << v11) - 1) | *v20 & ~((1LL << v11) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v10 + 24);
    result = 100 * RtlNumberOfSetBits(&BitMapHeader) / v18;
    if ( (unsigned int)result >= 0x3C )
    {
      *a4 = 3;
    }
    else if ( (unsigned int)result >= 0x28 )
    {
      *a4 = 2;
    }
    else if ( (unsigned int)result >= 0x14 )
    {
      *a4 = 1;
    }
    if ( a3 )
      return (__int64)memset(*(void **)(v10 + 24), 0, *(_QWORD *)(v10 + 32));
  }
  return result;
}
