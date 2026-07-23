/*
 * XREFs of FsRtlCheckUpperOplock @ 0x1405864A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x140130800 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AC0C (FsRtlpOplockBreakToNone.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1402701BC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405DDC54 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v7; // r14d
  bool v8; // r15
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v12; // r10d
  __int64 *i; // rdi
  __int16 v14; // r10
  char v15; // r14
  int v16; // r10d
  bool v17; // zf
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r14
  unsigned __int8 v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h]
  _BYTE v23[120]; // [rsp+60h] [rbp-78h] BYREF
  char v24; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+F0h] [rbp+18h]

  v25 = a3;
  v7 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v22 = *a1;
  v24 = 0;
  v8 = 0;
  v9 = 0;
  v21 = 0;
  v10 = 0;
  if ( !v22 )
    return v10;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v22 + 152));
  v24 = 1;
  v12 = *(_DWORD *)(v22 + 144);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v10 = -1073739511;
      }
      else
      {
        for ( i = *(__int64 **)(v22 + 40); i != (__int64 *)(v22 + 40); i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u);
          }
        }
        FsRtlpComputeShareableOplockState(v22);
      }
      goto LABEL_37;
    }
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v12, v7) )
    {
      if ( v7 )
      {
        if ( v7 != 4096 )
        {
          if ( v7 != 12288 )
          {
            if ( v7 != 20480 )
            {
              v10 = -1073741597;
              goto LABEL_37;
            }
            v9 = 0x2000;
            v8 = (v14 & 4) != 0;
            goto LABEL_22;
          }
          v8 = 1;
LABEL_21:
          v9 = 0x4000;
LABEL_22:
          v15 = 0;
          goto LABEL_28;
        }
        v8 = 1;
        v16 = v14 & 0x5000;
        if ( v16 == 20480 )
        {
          v21 = 1;
          goto LABEL_21;
        }
        v15 = 0;
        if ( v16 )
          v9 = v16;
      }
      else
      {
        v15 = 1;
        v9 = 28672;
      }
LABEL_28:
      memset(v23, 0, 0x48uLL);
      v23[0] = 3;
      v17 = !v8;
      v18 = v25;
      if ( v17 )
      {
        if ( !v15 )
        {
LABEL_33:
          if ( !v10 && (*(_DWORD *)(v22 + 144) & v9) != 0 )
          {
            v20 = a5;
            v10 = FsRtlpOplockBreakByCacheFlags(v22, (__int64)v23, 0LL, a6 | v21, v9, v18, a4, a5, &v24, 0LL);
            if ( v21 )
              v10 = FsRtlpOplockBreakByCacheFlags(v22, (__int64)v23, 0LL, a6, 0x2000, v18, a4, v20, &v24, 0LL);
          }
          goto LABEL_37;
        }
        v19 = FsRtlpOplockBreakToNone(v22, (__int64)v23, 0LL, a6, v25, a4, a5, &v24, 0LL);
      }
      else
      {
        v19 = FsRtlpOplockBreakToII(v22, (__int64)v23, 0LL, a6, v25, a4, a5, &v24, 0LL);
      }
      v10 = v19;
      goto LABEL_33;
    }
  }
LABEL_37:
  if ( v24 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v22 + 152));
  return v10;
}
