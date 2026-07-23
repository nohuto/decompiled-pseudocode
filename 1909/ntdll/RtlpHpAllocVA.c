/*
 * XREFs of RtlpHpAllocVA @ 0x1800479C8
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x18004CA78 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrReserve @ 0x18004E96C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapExtendContext @ 0x1800505C0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180047BA0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004DE8C (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpHpTlLogVAChange @ 0x180107504 (RtlpHpTlLogVAChange.c)
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
  _DWORD v20[3]; // [rsp+60h] [rbp-9h] BYREF
  int v21; // [rsp+6Ch] [rbp+3h]
  __int64 v22; // [rsp+70h] [rbp+7h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+Fh] BYREF
  int v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+84h] [rbp+1Bh]

  RegionSize = 0x100000001000LL;
  v7 = a4 & 0xFEFFFFFF;
  v24 = 0x200000;
  v8 = *a6;
  v25 = 0x40000000;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = a4 & 0x2000;
    if ( (v7 & 0x2000) != 0 )
    {
      v17 = *((unsigned int *)&RegionSize + BYTE1(v8));
      v12 = v17 - ((v10 + v17 - 1) & (unsigned int)(v17 - 1)) + v10 - 1;
    }
    else
    {
      v12 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    RegionSize = v12;
    if ( (v7 & 0x1000) != 0 && BYTE1(v8) >= 2u )
    {
      *a2 = v12;
      if ( (v7 & 0x40000000) != 0 )
        memset(*BaseAddress, 0, v12);
      goto LABEL_9;
    }
    if ( v11 && (v8 & 8) != 0 )
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
    v21 = 0;
    if ( BYTE3(v8) )
      v20[0] = BYTE3(v8) - 1;
    else
      v20[0] = -1;
    v20[1] = BYTE1(v8);
    v20[2] = BYTE2(v8);
    if ( (v8 & 8) != 0 )
      v21 = 1;
    v15 = *a2;
    v22 = *((_QWORD *)&v8 + 1);
    RegionSize = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = (void *)RtlpHpVaMgrCtxAlloc(&unk_180166AB8, &RegionSize, a3, v20);
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
