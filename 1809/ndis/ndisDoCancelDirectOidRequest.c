/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C00447E0
 * Callers:
 *     NdisCancelDirectOidRequest @ 0x1C00435A0 (NdisCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C005B0A0 (ndisFCancelDirectOidRequestInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0075F2C (ndisSetBusyAsync.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // bp
  __int64 v5; // rsi
  __int64 v7; // rbx
  void (__fastcall *v8)(_QWORD, __int64); // rax
  KSPIN_LOCK *v9; // r12
  KIRQL v10; // al
  _QWORD *v11; // r13
  __int64 v12; // r14
  char v13; // bl
  _DWORD *v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rbx
  _DWORD v17[18]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  _DWORD *v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  if ( !a2 )
    goto LABEL_15;
  v3 = ndisReferenceRefEx((PKSPIN_LOCK)(a2 + 320), 4u, &v19);
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(void (__fastcall **)(_QWORD, __int64))(v7 + 312);
      if ( v8 )
      {
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
        {
          WPP_SF_q(0x86u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v5);
          v8 = *(void (__fastcall **)(_QWORD, __int64))(v7 + 312);
        }
        v8(*(_QWORD *)(v5 + 24), a3);
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
          WPP_SF_q(0x87u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v5);
LABEL_15:
        if ( a1 )
        {
          v15 = *(_BYTE *)(a1 + 32);
          if ( (v15 > 6u || v15 == 6 && *(_BYTE *)(a1 + 33))
            && *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 256LL)
            && (!*(_QWORD *)(a1 + 4488) || (unsigned __int8)ndisSetBusyAsync(a1, 1, 51, a3, 0)) )
          {
            v16 = *(_QWORD *)(a1 + 3792);
            if ( (unsigned __int8)byte_1C00A025A >= 4u )
              WPP_SF_q(0x103u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
            (*(void (__fastcall **)(_QWORD, __int64))(v16 + 256))(*(_QWORD *)(a1 + 24), a3);
            if ( (unsigned __int8)byte_1C00A025A >= 4u )
              WPP_SF_q(0x104u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
            if ( *(_QWORD *)(a1 + 4488) )
              ndisClearBusy(a1, 1LL, 51LL);
          }
        }
        goto LABEL_28;
      }
      v9 = (KSPIN_LOCK *)(v5 + 144);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 144));
      v11 = (_QWORD *)(v5 + 152);
      v12 = *(_QWORD *)(v5 + 712);
      *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
      NewIrql = v10;
      *(_DWORD *)(v5 + 160) = 2307484;
      v13 = *(_BYTE *)v12;
      v19 = (_DWORD *)(v5 + 160);
      ndisDereferenceRef((PKSPIN_LOCK)(v5 + 320), 4u);
      v3 = 0;
      if ( v13 != 5 )
        break;
      v5 = v12;
      v3 = ndisReferenceRefEx((PKSPIN_LOCK)(v12 + 320), 4u, v17);
      if ( !v3 )
        goto LABEL_8;
LABEL_9:
      v14 = v19;
      *v11 = 0LL;
      *v14 = 0;
      KeReleaseSpinLock(v9, NewIrql);
      if ( !v5 )
        goto LABEL_15;
    }
    a1 = v12;
LABEL_8:
    v5 = 0LL;
    goto LABEL_9;
  }
LABEL_28:
  if ( v3 )
    ndisDereferenceRef((PKSPIN_LOCK)(v5 + 320), 4u);
}
