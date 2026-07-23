/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x140008938
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x14000866C (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14000A75C (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14000A7A0 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x14000AB40 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14000ABB8 (RtlCSparseBitmapEnterLockingRegion.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1402FE420 (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r10
  const signed __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  int v10; // r9d
  unsigned __int64 v11; // r10
  __int128 v12; // xmm6
  unsigned __int64 v13; // r8
  const signed __int64 *v14; // rdx
  const signed __int64 *v15; // r10
  signed __int64 v16; // r9
  BOOL v17; // eax
  const signed __int64 *v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v21; // r9
  const signed __int64 *v22; // r8
  const signed __int64 *v23; // rdx
  signed __int64 v24; // r10
  bool j; // zf
  bool v26; // zf
  bool v27; // al
  char v28; // al
  __int64 v29; // r8
  signed __int32 v30[8]; // [rsp+0h] [rbp-F8h] BYREF
  BOOL v31; // [rsp+20h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+30h] [rbp-C8h]
  const signed __int64 *i; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+50h] [rbp-A8h]
  const signed __int64 *v38; // [rsp+58h] [rbp-A0h]
  __int64 v39; // [rsp+60h] [rbp-98h] BYREF
  __int64 v40; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-88h] BYREF
  __int128 v42; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v43[16]; // [rsp+90h] [rbp-68h] BYREF
  char v44[16]; // [rsp+A0h] [rbp-58h] BYREF
  int v45; // [rsp+118h] [rbp+20h]

  v5 = a1;
  v32 = a1;
  v45 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v33 = v6;
  v7 = *(const signed __int64 **)(a1 + 16);
  v37 = v6;
  v38 = v7;
  v8 = a2 << 15;
  v35 = a2 << 15;
  v9 = 0x8000LL;
  if ( v6 - (a2 << 15) <= 0x8000 )
    v9 = v6 - (a2 << 15);
  v36 = v9;
  v12 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v44, a1, a3, (unsigned int)a3);
  v42 = v12;
  while ( 1 )
  {
    if ( v10 )
      goto LABEL_22;
    v13 = v9 + v8 - 1;
    if ( v13 >= v11 )
    {
LABEL_9:
      v17 = 0;
      goto LABEL_19;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_9;
      v17 = !_bittest64(v7, v8);
    }
    else
    {
      v14 = &v7[v8 >> 6];
      i = v14;
      v15 = &v7[v13 >> 6];
      v16 = *v14;
      if ( v14 == v15 )
      {
        v19 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8;
      }
      else
      {
        if ( (v16 & (-1LL << v8)) != 0 )
          goto LABEL_9;
        v18 = v14 + 1;
        for ( i = v18; ; i = v18 )
        {
          v16 = *v18;
          if ( v18 == v15 )
            break;
          if ( v16 )
            goto LABEL_9;
          ++v18;
        }
        v19 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13;
      }
      v17 = (v16 & v19) == 0;
    }
LABEL_19:
    v31 = v17;
    if ( !v17 )
      goto LABEL_20;
LABEL_22:
    RtlpCSparseBitmapLock(a1, 1LL, v43);
    v39 = *(_QWORD *)(a1 + 40);
    if ( v39 == -1 )
      break;
    RtlpCSparseBitmapUnlock(v43);
    RtlpCSparseBitmapWaitOnAddress(v5 + 40, &v39, v29, a1, v31);
    v5 = v32;
    if ( !_bittest64(*(const signed __int64 **)(v32 + 8), a2) )
      goto LABEL_20;
    v10 = 0;
    v11 = v33;
  }
  *(_QWORD *)(v5 + 40) = a2;
  RtlpCSparseBitmapUnlock(v43);
  v45 = 1;
  if ( !_bittest64(*(const signed __int64 **)(v32 + 8), a2) )
    goto LABEL_20;
  v21 = v9 + v8 - 1;
  if ( v21 >= v33 )
    goto LABEL_20;
  if ( v9 <= 1 )
  {
    if ( v9 != 1 )
      goto LABEL_20;
    if ( !_bittest64(v7, v8) )
      goto LABEL_34;
    v27 = 0;
LABEL_33:
    if ( !v27 )
      goto LABEL_20;
LABEL_34:
    _interlockedbittestandreset64(*(volatile signed __int32 **)(a1 + 8), a2);
    v41 = *(_QWORD *)(a1 + 16) + (a2 << 12);
    v40 = 4096LL;
    MmFreePoolMemory(&v41, &v40, 1073758208LL);
    goto LABEL_20;
  }
  v22 = &v7[v8 >> 6];
  v23 = &v7[v21 >> 6];
  v24 = *v22;
  if ( v22 == v23 )
  {
    v26 = (v24 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8)) == 0;
LABEL_32:
    v27 = v26;
    goto LABEL_33;
  }
  for ( j = (v24 & (-1LL << v8)) == 0; j; j = *v22 == 0 )
  {
    if ( ++v22 == v23 )
    {
      v26 = (*v22 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v21)) == 0;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v45 )
  {
    *(_QWORD *)(a1 + 40) = -1LL;
    v28 = *(_BYTE *)(a1 + 56);
    _InterlockedOr(v30, 0);
    if ( !v28 )
    {
      if ( *(_QWORD *)(a1 + 48) )
        ExpUnblockPushLock(a1 + 48, 0LL, 0LL);
    }
  }
  v42 = v12;
  return RtlCSparseBitmapLeaveLockingRegion(&v42);
}
