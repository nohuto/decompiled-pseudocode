/*
 * XREFs of ndisUnprocessAllOpens @ 0x1C00107C4
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllOpens(__int64 a1)
{
  KIRQL v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(22LL, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 1638992;
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 392);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 232));
      v5 = *(_DWORD *)(v3 + 224);
      if ( (v5 & 0x80010) == 0x80010 )
      {
        v6 = *(struct _KEVENT **)(v3 + 912);
        *(_DWORD *)(v3 + 224) = v5 & 0xFFF7FFEF;
        if ( v6 )
        {
          KeSetEvent(v6, 0, 0);
          *(_QWORD *)(v3 + 912) = 0LL;
        }
      }
      else if ( (v5 & 0x80000) != 0 )
      {
        *(_DWORD *)(v3 + 224) &= ~0x80000u;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 232));
      v3 = v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(23LL, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1);
}
