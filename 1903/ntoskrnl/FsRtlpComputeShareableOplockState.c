/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x1400109A0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400B5CA0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6CDC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1400B6F60 (FsRtlpOplockCleanup.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016F550 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140283850 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckUpperOplock @ 0x1406EFFF0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // r10
  _QWORD *v3; // r11
  int v4; // r9d
  __int64 result; // rax
  __int64 *v6; // r10
  int v7; // edx
  char v8; // dl
  char v9; // bl
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 144);
  v2 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(a1 + 40);
  v4 = v1 & 0x1010000;
  if ( v3 != (_QWORD *)(a1 + 40) )
    goto LABEL_14;
  if ( *(_QWORD *)(a1 + 56) != a1 + 56 || *(_QWORD *)(a1 + 72) != a1 + 72 )
  {
    if ( v3 == v2 )
    {
LABEL_4:
      if ( *(_QWORD *)(a1 + 56) != a1 + 56 )
        goto LABEL_5;
      if ( v3 == v2 )
      {
        v6 = *(__int64 **)(a1 + 72);
        v7 = 0;
        v1 = v1 & 0x20 | 0x3000;
        *(_DWORD *)(a1 + 144) = v1;
        if ( v6 == (__int64 *)(a1 + 72) )
          goto LABEL_6;
        while ( !v7 || (v6[6] & 0xF00000) == v7 )
        {
          v7 = v6[6] & 0xF00000;
          v1 = *(_DWORD *)(a1 + 144) | v7;
          *(_DWORD *)(a1 + 144) = v1;
          v6 = (__int64 *)*v6;
          if ( v6 == (__int64 *)(a1 + 72) )
            goto LABEL_6;
        }
LABEL_5:
        v1 = v1 & 0x20 | 0x3000;
LABEL_6:
        result = v4 | (unsigned int)v1;
        *(_DWORD *)(a1 + 144) = result;
        return result;
      }
LABEL_17:
      v8 = 0;
      v9 = 0;
      do
      {
        if ( *(_DWORD *)(v3[2] + 24LL) == 590400 )
        {
          v8 = 1;
          if ( v9 )
            goto LABEL_20;
        }
        else
        {
          v9 = 1;
          if ( v8 )
            goto LABEL_20;
        }
        v3 = (_QWORD *)*v3;
      }
      while ( v3 != v2 );
      if ( v8 && v9 )
      {
LABEL_20:
        v1 = v1 & 0x20 | 0x1010;
        goto LABEL_6;
      }
      v10 = v1 & 0x20;
      if ( v8 )
        v1 = v10 | 0x1000;
      else
        v1 = v10 | 0x10;
      goto LABEL_6;
    }
LABEL_14:
    if ( *(_QWORD *)(a1 + 56) != a1 + 56 || *(_QWORD *)(a1 + 72) != a1 + 72 )
    {
      v1 = v1 & 0x20 | 0xB000;
      goto LABEL_6;
    }
    if ( v3 != v2 )
      goto LABEL_17;
    goto LABEL_4;
  }
  result = v4 | v1 & 0x20 | 1u;
  *(_DWORD *)(a1 + 144) = result;
  return result;
}
