/*
 * XREFs of ndisRefNextFilterForOidCancellation @ 0x1C006FFB8
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C0069FC4 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

KSPIN_LOCK __fastcall ndisRefNextFilterForOidCancellation(KSPIN_LOCK *a1, KSPIN_LOCK *a2, _BYTE *a3)
{
  KSPIN_LOCK v3; // rdi
  KIRQL v7; // r15
  KSPIN_LOCK v8; // rbx
  KSPIN_LOCK *v9; // rcx
  KSPIN_LOCK *v10; // r14
  KSPIN_LOCK v11; // rbp
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( a2 )
  {
    v10 = a2 + 18;
    v7 = KeAcquireSpinLockRaiseToDpc(a2 + 18);
    v11 = a2[52];
    a2[19] = (KSPIN_LOCK)KeGetCurrentThread();
    if ( *(_BYTE *)v11 == 5 )
    {
      *a3 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)(v11 + 312), 1u, &v14) )
        v3 = v11;
    }
    else
    {
      *a3 = 1;
    }
    a2[19] = 0LL;
    v9 = v10;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
    v8 = a1[325];
    a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
    if ( *(_BYTE *)v8 == 5 )
    {
      *a3 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)(v8 + 312), 1u, &v13) )
        v3 = v8;
    }
    else
    {
      *a3 = 1;
    }
    a1[65] = 0LL;
    v9 = a1 + 12;
  }
  KeReleaseSpinLock(v9, v7);
  return v3;
}
