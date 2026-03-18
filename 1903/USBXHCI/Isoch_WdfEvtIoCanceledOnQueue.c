/*
 * XREFs of Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0032760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C00294FC (TR_QueueDpcForTransferCompletion.c)
 */

__int64 __fastcall Isoch_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _DWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD v11[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056388);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a2,
                   off_1C0056090);
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v11);
  v6 = (_DWORD *)v11[1];
  v7 = 0LL;
  *(_DWORD *)(v11[1] + 4LL) = -1073676288;
  v6[9] = 0;
  for ( v6[34] = 0; (unsigned int)v7 < v6[33]; v6[v8 + 37] = -1 )
  {
    v8 = 3 * v7;
    v7 = (unsigned int)(v7 + 1);
  }
  memset(v5, 0, 0x300uLL);
  v5[1] = v5;
  *v5 = v5;
  *((_DWORD *)v5 + 16) = 3;
  v5[3] = a2;
  *((_DWORD *)v5 + 17) = -1073741536;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v9 = *(_QWORD **)(v4 + 424);
  if ( *v9 != v4 + 416 )
    __fastfail(3u);
  *v5 = v4 + 416;
  v5[1] = v9;
  *v9 = v5;
  *(_QWORD *)(v4 + 424) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  return TR_QueueDpcForTransferCompletion(v4);
}
