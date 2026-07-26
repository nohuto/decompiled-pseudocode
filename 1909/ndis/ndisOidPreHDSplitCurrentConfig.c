/*
 * XREFs of ndisOidPreHDSplitCurrentConfig @ 0x1C006CF00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

unsigned __int8 __fastcall ndisOidPreHDSplitCurrentConfig(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // r14
  unsigned __int8 v4; // di
  unsigned __int8 v5; // al
  KIRQL v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx

  v1 = *a1;
  v3 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      196,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v4 = 1;
  }
  else if ( *a1 )
  {
    v5 = *(_BYTE *)(v1 + 32);
    v4 = 1;
    if ( (v5 > 6u || v5 == 6 && *(_BYTE *)(v1 + 33)) && *(_QWORD *)(v1 + 4264) )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v3 + 48) >= 0x1Cu )
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v7 = *(_QWORD *)(v1 + 4264);
        v8 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v8 = *(_OWORD *)v7;
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 16);
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(v7 + 24);
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
        *(_DWORD *)(v3 + 56) = 28;
        *(_DWORD *)(v3 + 52) = 28;
        *((_DWORD *)a1 + 10) = 0;
      }
      else
      {
        *(_DWORD *)(v3 + 56) = 28;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC5u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      v4);
  return v4;
}
