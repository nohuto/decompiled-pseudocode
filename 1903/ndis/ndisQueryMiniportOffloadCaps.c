/*
 * XREFs of ndisQueryMiniportOffloadCaps @ 0x1C006F2E4
 * Callers:
 *     ndisOidPreOffloadCaps @ 0x1C006D660 (ndisOidPreOffloadCaps.c)
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C003C584 (ndisCopyNdisOffload.c)
 */

__int64 __fastcall ndisQueryMiniportOffloadCaps(KSPIN_LOCK *a1, __int64 a2)
{
  KIRQL v4; // r14
  _BYTE *v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ebx

  v4 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  v5 = (_BYTE *)a1[512];
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( v5 && *v5 == 1 )
  {
    v6 = *(_DWORD *)(a2 + 48);
    v7 = 0;
    if ( v6 >= 0x70 )
    {
      ndisCopyNdisOffload(*(_QWORD *)(a2 + 40), (__int64)(v5 + 8), v6, (_DWORD *)(a2 + 52), 0);
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
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v4);
  return v7;
}
