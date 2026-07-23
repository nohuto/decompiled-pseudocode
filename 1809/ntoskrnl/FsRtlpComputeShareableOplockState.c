/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x140018750
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14001794C (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14013325C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E20C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14026FD78 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x1405864A0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // r9
  _QWORD *v3; // r10
  int v4; // r8d
  __int64 result; // rax
  int v7; // eax
  __int64 *v8; // r10
  int v9; // r9d
  char v10; // r11
  char v11; // bl
  int v12; // ecx
  int v13; // ecx

  v1 = *(_DWORD *)(a1 + 144);
  v2 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(a1 + 40);
  v4 = v1 & 0x1010000;
  if ( v3 != (_QWORD *)(a1 + 40) )
    goto LABEL_15;
  if ( *(_QWORD *)(a1 + 56) != a1 + 56 || *(_QWORD *)(a1 + 72) != a1 + 72 )
  {
    if ( v3 == v2 )
    {
LABEL_4:
      if ( *(_QWORD *)(a1 + 56) != a1 + 56 )
      {
LABEL_5:
        v1 = v1 & 0x20 | 0x3000;
LABEL_6:
        *(_DWORD *)(a1 + 144) = v1;
LABEL_7:
        result = v4 | (unsigned int)v1;
        *(_DWORD *)(a1 + 144) = result;
        return result;
      }
      if ( v3 == v2 )
      {
        v8 = *(__int64 **)(a1 + 72);
        v9 = 0;
        v1 = v1 & 0x20 | 0x3000;
        *(_DWORD *)(a1 + 144) = v1;
        if ( v8 == (__int64 *)(a1 + 72) )
          goto LABEL_7;
        while ( !v9 || (v8[6] & 0xF00000) == v9 )
        {
          v9 = v8[6] & 0xF00000;
          v1 = *(_DWORD *)(a1 + 144) | v9;
          *(_DWORD *)(a1 + 144) = v1;
          v8 = (__int64 *)*v8;
          if ( v8 == (__int64 *)(a1 + 72) )
            goto LABEL_7;
        }
        goto LABEL_5;
      }
LABEL_18:
      v10 = 0;
      v11 = 0;
      if ( v3 != v2 )
      {
        do
        {
          if ( *(_DWORD *)(v3[2] + 24LL) == 590400 )
          {
            v10 = 1;
            if ( v11 )
              goto LABEL_27;
          }
          else
          {
            v11 = 1;
            if ( v10 )
              goto LABEL_27;
          }
          v3 = (_QWORD *)*v3;
        }
        while ( v3 != v2 );
        if ( v10 && v11 )
        {
LABEL_27:
          v1 = v1 & 0x20 | 0x1010;
          goto LABEL_6;
        }
      }
      v12 = v1 & 0x20;
      v1 = v12 | 0x10;
      v13 = v12 | 0x1000;
      if ( v10 )
        v1 = v13;
      goto LABEL_6;
    }
LABEL_15:
    if ( *(_QWORD *)(a1 + 56) != a1 + 56 || *(_QWORD *)(a1 + 72) != a1 + 72 )
    {
      v1 = v1 & 0x20 | 0xB000;
      goto LABEL_6;
    }
    if ( v3 != v2 )
      goto LABEL_18;
    goto LABEL_4;
  }
  v7 = v1 & 0x20 | 1;
  *(_DWORD *)(a1 + 144) = v7;
  result = v4 | (unsigned int)v7;
  *(_DWORD *)(a1 + 144) = result;
  return result;
}
