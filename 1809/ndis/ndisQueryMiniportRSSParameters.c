/*
 * XREFs of ndisQueryMiniportRSSParameters @ 0x1C00483C4
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00CB5A0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001F2A4 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCalculateRssParametersSize @ 0x1C001FB34 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisQueryMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v3; // edi
  KIRQL v5; // r14
  size_t v6; // r15
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x9Au, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2305177;
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    if ( !ndisIsRssEnabledForMiniport(a1)
      || (v3 = ndisCalculateRssParametersSize((__int64)a1->CombinedNdisRSSParameters, (unsigned int *)&Size)) != 0 )
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    else
    {
      v6 = (unsigned int)Size;
      v3 = 0;
      if ( *(_DWORD *)(a2 + 48) < (unsigned int)Size )
      {
        *(_DWORD *)(a2 + 56) = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(*(void **)(a2 + 40), a1->CombinedNdisRSSParameters, v6);
        *(_DWORD *)(a2 + 52) = v6;
      }
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v5);
  }
  else
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v5);
    v3 = -1073741637;
    *(_DWORD *)(a2 + 52) = 0;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x9Bu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, (__int64)a1, v3);
  return v3;
}
