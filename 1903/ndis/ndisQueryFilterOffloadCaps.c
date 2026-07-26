/*
 * XREFs of ndisQueryFilterOffloadCaps @ 0x1C006F1A4
 * Callers:
 *     ndisOidPreOffloadCaps @ 0x1C006D660 (ndisOidPreOffloadCaps.c)
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C003C584 (ndisCopyNdisOffload.c)
 */

__int64 __fastcall ndisQueryFilterOffloadCaps(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // r14
  KSPIN_LOCK v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ebx

  v2 = *(KSPIN_LOCK **)(a1 + 32);
  v4 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
  v5 = v2[512];
  v2[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( v5 && *(_BYTE *)(v5 + 1) )
  {
    v6 = *(_DWORD *)(a2 + 48);
    v7 = 0;
    if ( v6 >= 0x70 )
    {
      ndisCopyNdisOffload(*(_QWORD *)(a2 + 40), v5 + 224, v6, (_DWORD *)(a2 + 52), 0);
    }
    else
    {
      *(_DWORD *)(a2 + 56) = 112;
      v7 = -1073676268;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  v2[65] = 0LL;
  KeReleaseSpinLock(v2 + 12, v4);
  return v7;
}
