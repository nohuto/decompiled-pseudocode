/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x1800502F8
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x18004FFA8 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x180006FCC (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddress @ 0x180007424 (RtlpWaitOnAddress.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004E77C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x18004E87C (RtlpCSparseBitmapLock.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(_RTL_SRWLOCK *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 Value; // rcx
  const signed __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  const signed __int64 *v11; // r8
  const signed __int64 *v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  const signed __int64 *v16; // r8
  const signed __int64 *v17; // rdx
  bool i; // zf
  unsigned __int64 v19; // rdx
  signed __int32 v21[14]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-A0h]
  const signed __int64 *v23; // [rsp+40h] [rbp-98h]
  unsigned __int64 v24; // [rsp+48h] [rbp-90h]
  unsigned __int64 v25; // [rsp+50h] [rbp-88h]
  unsigned __int64 v26; // [rsp+58h] [rbp-80h]
  const signed __int64 *v27; // [rsp+60h] [rbp-78h]
  unsigned __int64 v28; // [rsp+68h] [rbp-70h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp-48h]
  __int64 v33; // [rsp+98h] [rbp-40h]
  int v34; // [rsp+F0h] [rbp+18h]

  v34 = 0;
  Value = a1[2].Value;
  v22 = Value;
  v7 = (const signed __int64 *)a1[1].Value;
  v26 = Value;
  v27 = v7;
  v8 = a2 << 15;
  v24 = a2 << 15;
  v9 = 0x8000LL;
  if ( Value - (a2 << 15) <= 0x8000 )
    v9 = Value - (a2 << 15);
  v25 = v9;
  v32 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_22;
    v10 = v9 + v8 - 1;
    if ( v10 >= Value )
    {
LABEL_13:
      LODWORD(v13) = 0;
      goto LABEL_19;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_13;
      LODWORD(v13) = !_bittest64(v7, v8);
    }
    else
    {
      v11 = &v7[v8 >> 6];
      v23 = v11;
      v12 = &v7[v10 >> 6];
      if ( v11 == v12 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8;
      }
      else
      {
        if ( ((-1LL << v8) & *v11) != 0 )
          goto LABEL_13;
        v23 = ++v11;
        while ( v11 != v12 )
        {
          if ( *v11 )
            goto LABEL_13;
          v23 = ++v11;
        }
        v14 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v10;
      }
      LODWORD(v13) = (v14 & *v11) == 0;
    }
LABEL_19:
    v21[12] = v13;
    if ( !(_DWORD)v13 )
      goto LABEL_20;
LABEL_22:
    a3 = 0;
    RtlpCSparseBitmapLock(a1, 1, (__int64)v31);
    v28 = a1[4].Value;
    if ( v28 == -1LL )
      break;
    RtlpCSparseBitmapUnlock((__int64)v31);
    RtlpWaitOnAddress(&a1[4].Value, &v28, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount);
    v13 = a1->Value;
    if ( !_bittest64((const signed __int64 *)a1->Value, a2) )
      goto LABEL_20;
    Value = v22;
  }
  a1[4].Value = a2;
  RtlpCSparseBitmapUnlock((__int64)v31);
  v34 = 1;
  LOBYTE(v13) = _bittest64((const signed __int64 *)a1->Value, a2);
  if ( !(_BYTE)v13 )
    goto LABEL_20;
  v15 = v9 + v8 - 1;
  if ( v15 >= v22 )
    goto LABEL_20;
  if ( v9 <= 1 )
  {
    if ( v9 != 1 )
      goto LABEL_20;
    if ( !_bittest64(v7, v8) )
    {
LABEL_34:
      _interlockedbittestandreset64((volatile signed __int32 *)a1->Value, a2);
      BaseAddress = (PVOID)(a1[1].Value + (a2 << 12));
      RegionSize = 4096LL;
      LOBYTE(v13) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      goto LABEL_20;
    }
    LOBYTE(v13) = 0;
LABEL_33:
    if ( !(_BYTE)v13 )
      goto LABEL_20;
    goto LABEL_34;
  }
  v16 = &v7[v8 >> 6];
  v17 = &v7[v15 >> 6];
  if ( v16 == v17 )
  {
    v19 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8;
LABEL_32:
    LOBYTE(v13) = (v19 & *v16) == 0;
    goto LABEL_33;
  }
  v13 = -1LL << v8;
  for ( i = ((-1LL << v8) & *v16) == 0; i; i = *v16 == 0 )
  {
    if ( ++v16 == v17 )
    {
      v19 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v15;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v34 )
  {
    a1[4].Value = -1LL;
    _InterlockedOr(v21, 0);
    LOBYTE(v13) = RtlpWakeByAddress((unsigned __int64)&a1[4], 1);
  }
  return v13;
}
