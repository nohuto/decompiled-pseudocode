/*
 * XREFs of ndisOidPreTimestampCapability @ 0x1C00214F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

char __fastcall ndisOidPreTimestampCapability(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  __int64 v3; // rdi
  char v4; // bl
  int v6; // ebx
  KIRQL v7; // r12
  _WORD *v8; // r14
  int v9; // r9d
  unsigned __int16 v10; // ax
  size_t v11; // r8
  unsigned __int16 v12; // ax

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      238,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      v3);
  if ( *(_DWORD *)(v3 + 4) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return 1;
  }
  if ( *(_QWORD *)a1 )
  {
    v6 = 54;
    if ( *(_DWORD *)(v3 + 48) < 0x36u )
    {
      *(_DWORD *)(v3 + 56) = 54;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v1 + 12);
      v1[65] = (KSPIN_LOCK)KeGetCurrentThread();
      if ( *(_DWORD *)(v3 + 32) == 10485761 )
      {
        v8 = (_WORD *)v1[721];
        if ( !v8 )
        {
          *(_DWORD *)(a1 + 40) = -1073741637;
          v1[65] = 0LL;
          v4 = 1;
          KeReleaseSpinLock(v1 + 12, v7);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v4;
          v9 = 239;
          goto LABEL_11;
        }
      }
      else
      {
        v8 = (_WORD *)v1[722];
        if ( !v8 )
        {
          *(_DWORD *)(a1 + 40) = -1073741637;
          v1[65] = 0LL;
          v4 = 1;
          KeReleaseSpinLock(v1 + 12, v7);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v4;
          v9 = 240;
LABEL_11:
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            11,
            v9,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            (char)v1,
            v3);
          return v4;
        }
      }
      v10 = v8[1];
      v11 = v10;
      if ( v10 >= 0x36u )
        v11 = 54LL;
      memmove(*(void **)(v3 + 40), v8, v11);
      v12 = v8[1];
      if ( v12 < 0x36u )
        v6 = v12;
      *(_DWORD *)(v3 + 52) = v6;
      v1[65] = 0LL;
      KeReleaseSpinLock(v1 + 12, v7);
      *(_DWORD *)(a1 + 40) = 0;
    }
    return 1;
  }
  return v4;
}
