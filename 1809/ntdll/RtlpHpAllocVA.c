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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpTlLogVAChange @ 0x18010A060 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(void **a1, _QWORD *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned int v7; // edi
  __int128 v8; // xmm0
  __int64 v10; // r8
  int v11; // r9d
  size_t v12; // r8
  int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+50h] [rbp-19h] BYREF
  __int64 v19; // [rsp+58h] [rbp-11h]
  __int64 v20; // [rsp+60h] [rbp-9h]
  __int128 v21; // [rsp+68h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]

  v22 = 0x100000001000LL;
  v7 = a4 & 0xFEFFFFFF;
  v23 = 0x200000;
  v8 = *a6;
  v24 = 0x40000000;
  v21 = v8;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = a4 & 0x2000;
    if ( (v7 & 0x2000) != 0 )
    {
      v17 = *((unsigned int *)&v22 + BYTE1(v21));
      v12 = v17 - ((v10 + v17 - 1) & (unsigned int)(v17 - 1)) + v10 - 1;
    }
    else
    {
      v12 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    v22 = v12;
    if ( (v7 & 0x1000) != 0 && BYTE1(v21) >= 2u )
    {
      *a2 = v12;
      if ( (v7 & 0x40000000) != 0 )
        memset(*a1, 0, v12);
      goto LABEL_9;
    }
    if ( v11 && (v21 & 8) != 0 )
      v7 |= 0x40000u;
    v13 = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&v22, 0, v7, a5);
    if ( v13 >= 0 )
    {
      *a2 = v22;
LABEL_9:
      v13 = 0;
    }
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    if ( BYTE3(v21) )
      LODWORD(v18) = BYTE3(v21) - 1;
    else
      LODWORD(v18) = -1;
    HIDWORD(v18) = BYTE1(v21);
    LODWORD(v19) = BYTE2(v21);
    if ( (v21 & 8) != 0 )
      HIDWORD(v19) |= 1u;
    v15 = *a2;
    v20 = *((_QWORD *)&v21 + 1);
    v22 = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = RtlpHpVaMgrCtxAlloc(&unk_180166950, &v22, a3, &v18);
    if ( v16 )
    {
      *a2 = v22;
      *a1 = (void *)v16;
      goto LABEL_9;
    }
    v13 = -1073741670;
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v7, *a2, *a1, (unsigned int)v13);
  return (unsigned int)v13;
}
