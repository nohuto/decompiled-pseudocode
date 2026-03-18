/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x14010ECFC
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x14010EA30 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 *     RtlpHpEnvFreeVA @ 0x14010E478 (RtlpHpEnvFreeVA.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14010FA58 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14010FA9C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x14010FE44 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14010FEBC (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14031C41C (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r10
  const signed __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  int v9; // r9d
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  const signed __int64 *v12; // r8
  const signed __int64 *v13; // r10
  BOOL v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // r10
  const signed __int64 *v18; // r8
  const signed __int64 *v19; // r9
  bool i; // zf
  unsigned __int64 v21; // rdx
  bool v22; // al
  __int64 v23; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-E8h] BYREF
  BOOL v25; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+28h] [rbp-C0h]
  const signed __int64 *v27; // [rsp+30h] [rbp-B8h]
  _QWORD v28[5]; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-68h] BYREF
  __int128 v33; // [rsp+90h] [rbp-58h]
  __int64 v34; // [rsp+A0h] [rbp-48h] BYREF
  int v35; // [rsp+108h] [rbp+20h]

  v28[0] = 0LL;
  v28[1] = 0LL;
  v35 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v26 = v5;
  v6 = *(const signed __int64 **)(a1 + 8);
  v28[4] = v5;
  *(_QWORD *)&v29 = v6;
  v7 = a2 << 15;
  v28[2] = a2 << 15;
  v8 = 0x8000LL;
  if ( v5 - (a2 << 15) <= 0x8000 )
    v8 = v5 - (a2 << 15);
  v28[3] = v8;
  v33 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(&v34, a1, a3, (unsigned int)a3);
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_22;
    v11 = v8 + v7 - 1;
    if ( v11 >= v10 )
    {
LABEL_13:
      v14 = 0;
      goto LABEL_19;
    }
    if ( v8 <= 1 )
    {
      v14 = 0;
      if ( v8 == 1 )
        LOBYTE(v14) = !_bittest64(v6, v7);
    }
    else
    {
      v12 = &v6[v7 >> 6];
      v27 = v12;
      v13 = &v6[v11 >> 6];
      if ( v12 == v13 )
      {
        v15 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
      }
      else
      {
        if ( ((-1LL << v7) & *v12) != 0 )
          goto LABEL_13;
        v27 = ++v12;
        while ( v12 != v13 )
        {
          if ( *v12 )
            goto LABEL_13;
          v27 = ++v12;
        }
        v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11;
      }
      v14 = (v15 & *v12) == 0;
    }
LABEL_19:
    v25 = v14;
    if ( !v14 )
      goto LABEL_20;
LABEL_22:
    RtlpCSparseBitmapLock(a1, 1LL, v28);
    v30 = *(_QWORD *)(a1 + 32);
    if ( v30 == -1 )
      break;
    RtlpCSparseBitmapUnlock(v28);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v30, v23, a1, v25);
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_20;
    v9 = 0;
    v10 = v26;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlpCSparseBitmapUnlock(v28);
  v35 = 1;
  if ( !_bittest64(*(const signed __int64 **)a1, a2) )
    goto LABEL_20;
  v17 = v8 + v7 - 1;
  if ( v17 >= v26 )
    goto LABEL_20;
  if ( v8 <= 1 )
  {
    if ( v8 != 1 )
      goto LABEL_20;
    if ( !_bittest64(v6, v7) )
    {
LABEL_34:
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
      v32 = *(_QWORD *)(a1 + 8) + (a2 << 12);
      v31 = 4096LL;
      RtlpHpEnvFreeVA(&v32, &v31, 1073758208LL);
      goto LABEL_20;
    }
    v22 = 0;
LABEL_33:
    if ( !v22 )
      goto LABEL_20;
    goto LABEL_34;
  }
  v18 = &v6[v7 >> 6];
  v19 = &v6[v17 >> 6];
  if ( v18 == v19 )
  {
    v21 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
LABEL_32:
    v22 = (*v18 & v21) == 0;
    goto LABEL_33;
  }
  for ( i = ((-1LL << v7) & *v18) == 0; i; i = *v18 == 0 )
  {
    if ( ++v18 == v19 )
    {
      v21 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v35 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    if ( *(_BYTE *)(a1 + 48) )
    {
      _InterlockedOr(v24, 0);
    }
    else
    {
      _InterlockedOr(v24, 0);
      if ( *(_QWORD *)(a1 + 40) )
        ExpUnblockPushLock((volatile __int64 *)(a1 + 40), 0LL, 0);
    }
  }
  v29 = v33;
  return RtlCSparseBitmapLeaveLockingRegion(&v29);
}
