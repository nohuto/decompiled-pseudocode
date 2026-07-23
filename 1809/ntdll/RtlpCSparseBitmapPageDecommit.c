/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180065F00
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x180065C30 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18005D4B4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x18005D5B4 (RtlpCSparseBitmapLock.c)
 *     RtlpWakeByAddress @ 0x18005E81C (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddress @ 0x18005EBE8 (RtlpWaitOnAddress.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // rcx
  const signed __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  const signed __int64 *v11; // rdx
  const signed __int64 *v12; // r10
  signed __int64 v13; // r9
  const signed __int64 *v14; // rax
  const signed __int64 *v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  const signed __int64 *v18; // r8
  const signed __int64 *v19; // rdx
  signed __int64 v20; // r10
  bool j; // zf
  bool v22; // zf
  signed __int32 v24[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-B8h]
  int v26; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v27; // [rsp+40h] [rbp-A8h]
  const signed __int64 *i; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+50h] [rbp-98h]
  unsigned __int64 v30; // [rsp+58h] [rbp-90h]
  unsigned __int64 v31; // [rsp+60h] [rbp-88h]
  const signed __int64 *v32; // [rsp+68h] [rbp-80h]
  __int64 v33; // [rsp+70h] [rbp-78h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v36[16]; // [rsp+88h] [rbp-60h] BYREF
  __int64 v37; // [rsp+98h] [rbp-50h]
  __int64 v38; // [rsp+A0h] [rbp-48h]
  int v39; // [rsp+100h] [rbp+18h]

  v25 = a1;
  v39 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v27 = v6;
  v7 = *(const signed __int64 **)(a1 + 16);
  v31 = v6;
  v32 = v7;
  v8 = a2 << 15;
  v29 = a2 << 15;
  v9 = 0x8000LL;
  if ( v6 - (a2 << 15) <= 0x8000 )
    v9 = v6 - (a2 << 15);
  v30 = v9;
  v37 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_22;
    v10 = v9 + v8 - 1;
    if ( v10 >= v6 )
    {
LABEL_9:
      LODWORD(v14) = 0;
      goto LABEL_19;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_9;
      LODWORD(v14) = !_bittest64(v7, v8);
    }
    else
    {
      v11 = &v7[v8 >> 6];
      i = v11;
      v12 = &v7[v10 >> 6];
      v13 = *v11;
      if ( v11 == v12 )
      {
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8;
      }
      else
      {
        if ( (v13 & (-1LL << v8)) != 0 )
          goto LABEL_9;
        v15 = v11 + 1;
        for ( i = v15; ; i = v15 )
        {
          v13 = *v15;
          if ( v15 == v12 )
            break;
          if ( v13 )
            goto LABEL_9;
          ++v15;
        }
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v10;
      }
      LODWORD(v14) = (v13 & v16) == 0;
    }
LABEL_19:
    v26 = (int)v14;
    if ( !(_DWORD)v14 )
      goto LABEL_20;
LABEL_22:
    a3 = 0;
    RtlpCSparseBitmapLock((_RTL_SRWLOCK *)a1, 1, (__int64)v36);
    v33 = *(_QWORD *)(a1 + 40);
    if ( v33 == -1 )
      break;
    RtlpCSparseBitmapUnlock((__int64)v36);
    RtlpWaitOnAddress((_QWORD *)(v25 + 40), &v33, 8LL, 0LL, RtlpWaitOnAddressSpinCount);
    v14 = *(const signed __int64 **)(v25 + 8);
    if ( !_bittest64(v14, a2) )
      goto LABEL_20;
    v6 = v27;
  }
  *(_QWORD *)(v25 + 40) = a2;
  RtlpCSparseBitmapUnlock((__int64)v36);
  v39 = 1;
  LOBYTE(v14) = _bittest64(*(const signed __int64 **)(v25 + 8), a2);
  if ( !(_BYTE)v14 )
    goto LABEL_20;
  v17 = v9 + v8 - 1;
  if ( v17 >= v27 )
    goto LABEL_20;
  if ( v9 <= 1 )
  {
    if ( v9 != 1 )
      goto LABEL_20;
    if ( !_bittest64(v7, v8) )
    {
LABEL_34:
      _interlockedbittestandreset64(*(volatile signed __int32 **)(a1 + 8), a2);
      BaseAddress = (PVOID)(*(_QWORD *)(a1 + 16) + (a2 << 12));
      RegionSize = 4096LL;
      LOBYTE(v14) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      goto LABEL_20;
    }
    LOBYTE(v14) = 0;
LABEL_33:
    if ( !(_BYTE)v14 )
      goto LABEL_20;
    goto LABEL_34;
  }
  v18 = &v7[v8 >> 6];
  v19 = &v7[v17 >> 6];
  v20 = *v18;
  if ( v18 == v19 )
  {
    v22 = (v20 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8)) == 0;
LABEL_32:
    LOBYTE(v14) = v22;
    goto LABEL_33;
  }
  v14 = (const signed __int64 *)(-1LL << v8);
  for ( j = (v20 & (-1LL << v8)) == 0; j; j = *v18 == 0 )
  {
    if ( ++v18 == v19 )
    {
      v22 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17) & *v18) == 0;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v39 )
  {
    *(_QWORD *)(a1 + 40) = -1LL;
    _InterlockedOr(v24, 0);
    LOBYTE(v14) = RtlpWakeByAddress(a1 + 40, 1);
  }
  return (char)v14;
}
