/*
 * XREFs of VidSchSetVidPnSourceAddress @ 0x1C00CC230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0024288 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddress(_QWORD *a1, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(_QWORD); // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 322];
  if ( *(_DWORD *)(v4 + 33280) != -1 )
  {
    v5 = (void (__fastcall *)(_QWORD))a1[304];
    if ( v5 )
      v5(a1[312]);
  }
  v6 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*(ADAPTER_DISPLAY **)(a1[2] + 2552LL), a2);
  if ( *(_DWORD *)(v4 + 33280) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[306];
    if ( v7 )
      v7(a1[312]);
  }
  return v6;
}
