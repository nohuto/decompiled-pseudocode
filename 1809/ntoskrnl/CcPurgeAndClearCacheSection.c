/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1400E7978
 * Callers:
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 * Callees:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140108C50 (CcUpdateSharedCacheMapFlag.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // rsi
  ULONG_PTR v4; // r13
  BOOLEAN v5; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rdx
  struct _KEVENT *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-70h] BYREF
  void *VirtualAddress; // [rsp+48h] [rbp-60h]
  volatile signed __int32 *v15; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h]

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v4 = CcReferenceSharedCacheMapFileObject(a1);
  v13[1] = v4;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v13[0] = v2->QuadPart;
  v2 = (LARGE_INTEGER *)v13;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v8 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, &v15, &v12, 1, 0);
    memset(VirtualAddress, 0, v8);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, 1LL);
      LOBYTE(v11) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v11);
    }
    else
    {
      CcSetDirtyInMask((struct _FAST_MUTEX *)a1, v13, v8, 0LL);
    }
    v13[0] = v8 + QuadPart;
    v9 = *((_QWORD *)v15 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v15 + 4) )
    {
      v10 = *(struct _KEVENT **)(v9 + 184);
      if ( v10 )
        KeSetEvent(v10, 0, 0);
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v4 + 40), (va_list)v13, 1LL);
  result = (unsigned int)v16;
  if ( v16 >= 0 )
  {
LABEL_3:
    v5 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), v2, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v4);
    return v5 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
