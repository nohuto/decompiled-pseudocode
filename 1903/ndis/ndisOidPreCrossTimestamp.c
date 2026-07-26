/*
 * XREFs of ndisOidPreCrossTimestamp @ 0x1C006C7F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall ndisOidPreCrossTimestamp(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  _DWORD *v3; // rbp
  char v4; // bl
  KIRQL v5; // dl
  KSPIN_LOCK *v6; // rcx
  bool v7; // zf
  int v8; // r9d
  KSPIN_LOCK v9; // rax

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_DWORD **)(a1 + 32);
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      241,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      (char)v3);
  if ( v3[1] )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v4;
  }
  if ( !*(_QWORD *)a1 )
    return v4;
  if ( v3[12] < 0x20u )
  {
    v3[14] = 32;
    v4 = 1;
    *(_DWORD *)(a1 + 40) = -1073676268;
    return v4;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(v1 + 12);
  v6 = v1 + 12;
  v7 = v1[721] == 0;
  v1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( v7 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
    v1[65] = 0LL;
    KeReleaseSpinLock(v6, v5);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v8 = 242;
LABEL_11:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      v8,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      (char)v3);
    return v4;
  }
  v9 = v1[722];
  if ( !v9 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
    v1[65] = 0LL;
    KeReleaseSpinLock(v6, v5);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v8 = 243;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v9 + 16) )
  {
    v1[65] = 0LL;
    KeReleaseSpinLock(v6, v5);
    return v4;
  }
  *(_DWORD *)(a1 + 40) = -1073741637;
  v4 = 1;
  v1[65] = 0LL;
  KeReleaseSpinLock(v6, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 244;
    goto LABEL_11;
  }
  return v4;
}
