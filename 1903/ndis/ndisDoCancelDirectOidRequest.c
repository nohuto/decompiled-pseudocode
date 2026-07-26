/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C006A510
 * Callers:
 *     NdisCancelDirectOidRequest @ 0x1C0068CB0 (NdisCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C008E280 (ndisFCancelDirectOidRequestInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisFInvokeCancelDirectOidRequest @ 0x1C008E980 (ndisFInvokeCancelDirectOidRequest.c)
 *     ndisMInvokeCancelDirectOidRequest @ 0x1C009AC90 (ndisMInvokeCancelDirectOidRequest.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C00B98E0 (ndisSetBusyAsync.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(KSPIN_LOCK *a1, KSPIN_LOCK *a2, int a3)
{
  bool v3; // bp
  KSPIN_LOCK *v5; // rsi
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // al
  _QWORD *v9; // r13
  KSPIN_LOCK *v10; // r14
  char v11; // bl
  unsigned __int8 v12; // al
  int v13[18]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  int v15; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  if ( a2 )
  {
    v3 = ndisReferenceRefEx(a2 + 39, 4u, &v15);
    if ( v3 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v5[2] + 312) )
        {
          ndisFInvokeCancelDirectOidRequest((char)v5);
          goto LABEL_12;
        }
        v7 = v5 + 18;
        v8 = KeAcquireSpinLockRaiseToDpc(v5 + 18);
        v9 = v5 + 19;
        v10 = (KSPIN_LOCK *)v5[88];
        v5[19] = (KSPIN_LOCK)KeGetCurrentThread();
        NewIrql = v8;
        v11 = *(_BYTE *)v10;
        ndisDereferenceRef(v5 + 39, 4u);
        v3 = 0;
        if ( v11 != 5 )
          break;
        v5 = v10;
        v3 = ndisReferenceRefEx(v10 + 39, 4u, v13);
        if ( !v3 )
          goto LABEL_8;
LABEL_9:
        *v9 = 0LL;
        KeReleaseSpinLock(v7, NewIrql);
        if ( !v5 )
          goto LABEL_12;
      }
      a1 = v10;
LABEL_8:
      v5 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_12:
    if ( a1 )
    {
      v12 = *((_BYTE *)a1 + 32);
      if ( (v12 > 6u || v12 == 6 && *((_BYTE *)a1 + 33))
        && *(_QWORD *)(a1[470] + 256)
        && (!a1[556] || (unsigned __int8)ndisSetBusyAsync((_DWORD)a1, 1, 51, a3, 0)) )
      {
        ndisMInvokeCancelDirectOidRequest((char)a1);
        if ( a1[556] )
          ndisClearBusy(a1, 1LL, 51LL);
      }
    }
  }
  if ( v3 )
    ndisDereferenceRef(v5 + 39, 4u);
}
