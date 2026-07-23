/*
 * XREFs of RtlpHpAllocVA @ 0x180060CA0
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18005D6A4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x180063B20 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180060E80 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800631B0 (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpTlLogVAChange @ 0x18010A060 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(PVOID *BaseAddress, ULONG_PTR *a2, __int64 a3, int a4, ULONG a5, __int128 *a6)
{
  unsigned int v7; // edi
  __int128 v8; // xmm0
  ULONG_PTR v10; // r8
  int v11; // r9d
  ULONG_PTR v12; // r8
  int v13; // ebx
  ULONG_PTR v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  int v18; // [rsp+28h] [rbp-41h]
  int v19; // [rsp+30h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h]
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int128 v23; // [rsp+68h] [rbp-1h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+Fh] BYREF
  int v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+84h] [rbp+1Bh]

  RegionSize = 0x100000001000LL;
  v7 = a4 & 0xFEFFFFFF;
  v25 = 0x200000;
  v8 = *a6;
  v26 = 0x40000000;
  v23 = v8;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = a4 & 0x2000;
    if ( (v7 & 0x2000) != 0 )
    {
      v17 = *((unsigned int *)&RegionSize + BYTE1(v23));
      v12 = v17 - ((v10 + v17 - 1) & (unsigned int)(v17 - 1)) + v10 - 1;
    }
    else
    {
      v12 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    RegionSize = v12;
    if ( (v7 & 0x1000) != 0 && BYTE1(v23) >= 2u )
    {
      *a2 = v12;
      if ( (v7 & 0x40000000) != 0 )
        memset(*BaseAddress, 0, v12);
      goto LABEL_9;
    }
    if ( v11 && (v23 & 8) != 0 )
      v7 |= 0x40000u;
    v13 = RtlpHpEnvAllocVA(BaseAddress, &RegionSize, a5, v18, v19, 0LL);
    if ( v13 >= 0 )
    {
      *a2 = RegionSize;
LABEL_9:
      v13 = 0;
    }
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( BYTE3(v23) )
      LODWORD(v20) = BYTE3(v23) - 1;
    else
      LODWORD(v20) = -1;
    HIDWORD(v20) = BYTE1(v23);
    LODWORD(v21) = BYTE2(v23);
    if ( (v23 & 8) != 0 )
      HIDWORD(v21) |= 1u;
    v15 = *a2;
    v22 = *((_QWORD *)&v23 + 1);
    RegionSize = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = (void *)RtlpHpVaMgrCtxAlloc(&unk_180166950, &RegionSize, a3, &v20);
    if ( v16 )
    {
      *a2 = RegionSize;
      *BaseAddress = v16;
      goto LABEL_9;
    }
    v13 = -1073741670;
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v7, *a2, *BaseAddress, (unsigned int)v13);
  return (unsigned int)v13;
}
