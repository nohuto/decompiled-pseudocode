/*
 * XREFs of FsFilterPerformCallbacks @ 0x14001C6E0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DDE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DFB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x1408160BC (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterGetCallbacks @ 0x14001C840 (FsFilterGetCallbacks.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(__int64, _QWORD *); // r8
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall *v18)(__int64, _QWORD *); // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 2;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + 4);
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    *(_QWORD *)(a1 + 8) = v4;
    FsFilterGetCallbacks(v9, v4, &v18, &v17);
    v11 = v18;
    v12 = v17;
    if ( !v18 )
      break;
    if ( v17 )
      goto LABEL_4;
    v14 = 0LL;
LABEL_7:
    if ( !v11 )
      goto LABEL_12;
    if ( v14 )
      v15 = v14 + 2;
    else
      v15 = 0LL;
    result = v11(a1, v15);
    if ( (int)result >= 0 )
    {
      if ( !(_DWORD)result )
        goto LABEL_12;
      if ( !v14 )
        return result;
LABEL_39:
      --*(_WORD *)(a1 + 74);
      return result;
    }
    if ( a2 || !v10 )
    {
      if ( a3 )
      {
        if ( !v10 )
          *a4 |= 1u;
      }
      else if ( !v10 )
      {
        KeBugCheckEx(0x22u, (int)result, 0LL, 0x38CuLL, 0LL);
      }
      if ( !v14 )
        return result;
      goto LABEL_39;
    }
LABEL_12:
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v10 )
      {
        if ( v14 )
          --*(_WORD *)(a1 + 74);
      }
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    }
    else
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = *(_QWORD *)(a1 + 8);
    }
LABEL_15:
    if ( !v4 )
      return 0LL;
  }
  if ( !v17 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    if ( !v10 )
      *a4 &= ~2u;
    goto LABEL_15;
  }
LABEL_4:
  v13 = *(_WORD *)(a1 + 74);
  if ( v13 < *(_WORD *)(a1 + 72) )
  {
    v14 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * v13);
    *(_WORD *)(a1 + 74) = v13 + 1;
    if ( v14 )
    {
      *v14 = v4;
      v14[1] = *(_QWORD *)(a1 + 16);
      v14[2] = 0LL;
      v14[3] = v12;
      goto LABEL_7;
    }
  }
  if ( !a2 )
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  return 3221225626LL;
}
