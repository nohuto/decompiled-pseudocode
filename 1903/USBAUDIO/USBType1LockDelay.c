/*
 * XREFs of USBType1LockDelay @ 0x1C002F520
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1C0004DC8 (USBType1ProcessStreamPointer.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1C0004484 (USBType1BuildIsochUrbRequest.c)
 *     memset @ 0x1C0012700 (memset.c)
 */

__int64 __fastcall USBType1LockDelay(struct _KSPIN *a1)
{
  _QWORD *Context; // rax
  unsigned int v2; // r9d
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // r8d
  unsigned int v7; // edi
  struct _KSSTREAM_POINTER *PoolWithTag; // rax
  struct _KSSTREAM_POINTER *v9; // rbx
  int v10; // edi
  __int64 result; // rax

  Context = a1->Context;
  v2 = 0;
  v4 = Context[19];
  v5 = *(_QWORD *)(Context[18] + 160LL);
  if ( *(_BYTE *)(v5 + 4) == 1 )
  {
    v2 = *(unsigned __int16 *)(v5 + 5);
  }
  else if ( *(_BYTE *)(v5 + 4) == 2 )
  {
    v2 = (unsigned int)*(unsigned __int16 *)(v5 + 5) / *(_DWORD *)(v4 + 116);
  }
  v6 = 1;
  if ( v2 )
    v6 = v2;
  v7 = *(_DWORD *)(v4 + 8) * (v6 * *(_DWORD *)(v4 + 116) + v6 * (*(_DWORD *)(v4 + 120) >> 14) / 0x3E8u);
  PoolWithTag = (struct _KSSTREAM_POINTER *)ExAllocatePoolWithTag((POOL_TYPE)512, v7 + 64, 0x41627845u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7 + 64);
    v9->Pin = a1;
    v9->OffsetIn.Data = (PUCHAR)&v9[1];
    v9->OffsetIn.Count = v7;
    v9->OffsetIn.Remaining = v7;
    v10 = USBType1BuildIsochUrbRequest(
            v9,
            (__int64 (__fastcall *)(__int64, __int64, __int64 *))USBType1LockDelayCompleteCallback);
    if ( v10 < 0 )
      ExFreePool(v9);
  }
  else
  {
    v10 = -1073741670;
  }
  result = (unsigned int)v10;
  *(_BYTE *)(v4 + 99) = 0;
  return result;
}
