/*
 * XREFs of ndisQueryMiniportRSSParameters @ 0x1C006F410
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C003B010 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B48C (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCalculateRssParametersSize @ 0x1C003B634 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisQueryMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  KIRQL v5; // r14
  int v6; // edx
  size_t v7; // r15
  char v9; // [rsp+30h] [rbp-38h]
  size_t Size; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      135,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v9);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    if ( !ndisIsRssEnabledForMiniport(a1)
      || (v3 = ndisCalculateRssParametersSize((__int64)a1->CombinedNdisRSSParameters, (unsigned int *)&Size)) != 0 )
    {
      *(_DWORD *)(v2 + 52) = 0;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v5);
    }
    else
    {
      v7 = (unsigned int)Size;
      v3 = 0;
      if ( *(_DWORD *)(v2 + 48) < (unsigned int)Size )
      {
        *(_DWORD *)(v2 + 56) = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(*(void **)(v2 + 40), a1->CombinedNdisRSSParameters, v7);
        *(_DWORD *)(v2 + 52) = v7;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v5);
    }
  }
  else
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    v3 = -1073741637;
    *(_DWORD *)(v2 + 52) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      11,
      136,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v3);
  }
  return v3;
}
