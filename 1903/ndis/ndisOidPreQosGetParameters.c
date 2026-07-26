/*
 * XREFs of ndisOidPreQosGetParameters @ 0x1C006DD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

char __fastcall ndisOidPreQosGetParameters(__int64 a1)
{
  __int64 v1; // rbp
  KSPIN_LOCK *v3; // rsi
  char v4; // bl
  KIRQL v5; // r12
  unsigned __int16 *v6; // r14
  unsigned int v7; // eax
  char v9[4]; // [rsp+38h] [rbp-70h]
  _DWORD v10[14]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(KSPIN_LOCK **)a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      115,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v3,
      v1);
  memset(v10, 0, 0x34uLL);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x34u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v3 )
      goto LABEL_19;
    if ( !v3[613] )
    {
LABEL_6:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(v3 + 12);
      v3[65] = (KSPIN_LOCK)KeGetCurrentThread();
      if ( *(_DWORD *)(v1 + 32) == -66781180 )
        v6 = (unsigned __int16 *)v3[615];
      else
        v6 = (unsigned __int16 *)v3[617];
      if ( !v6 )
      {
        v10[0] = 3408310;
        v6 = (unsigned __int16 *)v10;
      }
      *(_DWORD *)(a1 + 40) = 0;
      v7 = v6[1];
      if ( *(_DWORD *)(v1 + 48) >= v7 )
      {
        memmove(*(void **)(v1 + 40), v6, v6[1]);
        *(_DWORD *)(v1 + 52) = v6[1];
      }
      else
      {
        *(_DWORD *)(v1 + 56) = v7;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      v3[65] = 0LL;
      KeReleaseSpinLock(v3 + 12, v5);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 52;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  v4 = 1;
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *(_DWORD *)(a1 + 40);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x74u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)v9);
  }
  return v4;
}
