/*
 * XREFs of ndisOidPrePDQueryConfig @ 0x1C00C22E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0041380 (memmove.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00C0F30 (WPP_RECORDER_SF_qdd_ea_1C00C0F30.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C00C1C2C (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C00C1E98 (WPP_RECORDER_SF_qqqqq.c)
 */

unsigned __int8 __fastcall ndisOidPrePDQueryConfig(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  __int64 v5; // rsi
  unsigned __int8 v6; // bl
  KSPIN_LOCK *v7; // rax
  KSPIN_LOCK v8; // r14
  KIRQL v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-68h]

  v3 = *(KSPIN_LOCK **)a1;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  v7 = *(KSPIN_LOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x43u, v14);
    v7 = *(KSPIN_LOCK **)a1;
  }
  if ( v7 )
  {
    v8 = v3[684];
    if ( !*(_DWORD *)(v5 + 4) )
    {
      if ( (*(_DWORD *)(v5 + 88) & 0x4000) == 0 && (*(_BYTE *)(v5 + 1) < 2u || *(_WORD *)(v5 + 2) < 0xF8u)
        || (*(_DWORD *)(v5 + 244) & 1) == 0
        || *(_DWORD *)(v5 + 236)
        || *(_DWORD *)(v5 + 240) != -1 )
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_21;
      }
      if ( v8 )
      {
        v9 = KeAcquireSpinLockRaiseToDpc(v3 + 12);
        v3[65] = (KSPIN_LOCK)KeGetCurrentThread();
        v10 = *(_DWORD *)(v8 + 32);
        if ( v10 )
        {
          if ( *(_DWORD *)(v5 + 48) >= v10 )
          {
            memmove(*(void **)(v5 + 40), *(const void **)(v8 + 24), *(unsigned int *)(v8 + 32));
            *(_DWORD *)(v5 + 52) = *(_DWORD *)(v8 + 32);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v12, 0x44u, v14);
            v3[65] = 0LL;
            KeReleaseSpinLock(v3 + 12, v9);
            *(_DWORD *)(a1 + 40) = 0;
          }
          else
          {
            v3[65] = 0LL;
            KeReleaseSpinLock(v3 + 12, v9);
            *(_DWORD *)(v5 + 56) = *(_DWORD *)(v8 + 32);
            *(_DWORD *)(a1 + 40) = -1073676266;
          }
          goto LABEL_21;
        }
        v3[65] = 0LL;
        KeReleaseSpinLock(v3 + 12, v9);
      }
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_21:
    v6 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, a3, 0x45u, v14);
  return v6;
}
