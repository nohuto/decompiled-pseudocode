/*
 * XREFs of ndisOidPreCrossTimestamp @ 0x1C00470A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreCrossTimestamp(__int64 *a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rbp
  char v3; // di
  KIRQL v5; // dl
  KSPIN_LOCK *v6; // rcx
  unsigned __int16 v7; // cx
  __int64 v8; // rax

  v1 = *a1;
  v2 = (_DWORD *)a1[4];
  v3 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x107u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v2);
  if ( v2[1] )
  {
    v3 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    return v3;
  }
  if ( !*a1 )
    return v3;
  if ( v2[12] < 0x20u )
  {
    v2[14] = 32;
    v3 = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    return v3;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v6 = (KSPIN_LOCK *)(v1 + 96);
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1864) = 2314136;
  if ( !*(_QWORD *)(v1 + 5832) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v3 = 1;
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1864) = 0;
    KeReleaseSpinLock(v6, v5);
    if ( (unsigned __int8)byte_1C00A025A < 4u )
      return v3;
    v7 = 264;
LABEL_11:
    WPP_SF_qq(v7, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v2);
    return v3;
  }
  v8 = *(_QWORD *)(v1 + 5840);
  if ( !v8 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v3 = 1;
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1864) = 0;
    KeReleaseSpinLock(v6, v5);
    if ( (unsigned __int8)byte_1C00A025A < 4u )
      return v3;
    v7 = 265;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v8 + 16) )
  {
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1864) = 0;
    KeReleaseSpinLock(v6, v5);
    return v3;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
  v3 = 1;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1864) = 0;
  KeReleaseSpinLock(v6, v5);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v7 = 266;
    goto LABEL_11;
  }
  return v3;
}
