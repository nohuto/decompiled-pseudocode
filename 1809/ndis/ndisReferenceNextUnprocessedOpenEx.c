/*
 * XREFs of ndisReferenceNextUnprocessedOpenEx @ 0x1C0010698
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisReferenceNextUnprocessedOpenEx(__int64 a1)
{
  KIRQL v2; // r14
  __int64 v3; // rbx

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(20LL, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, 1LL);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 1638930;
  while ( v3 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 232));
    if ( (*(_DWORD *)(v3 + 224) & 0x80000) != 0 && (*(_DWORD *)(v3 + 224) & 0x10) == 0 )
    {
      *(_DWORD *)(v3 + 224) |= 0x10u;
    }
    else if ( (*(_DWORD *)(v3 + 224) & 0x18010) == 0 )
    {
      *(_DWORD *)(v3 + 224) |= 0x80010u;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 232));
      break;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 232));
    v3 = *(_QWORD *)(v3 + 392);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(21LL, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, v3);
  return v3;
}
