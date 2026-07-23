/*
 * XREFs of KseDsCallbackHookIrpPnpFunction @ 0x1402A0430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KsepDsEventPnpIrp @ 0x1402A10DC (KsepDsEventPnpIrp.c)
 */

__int64 __fastcall KseDsCallbackHookIrpPnpFunction(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  int v5; // ebp
  unsigned __int8 v6; // bl
  __int64 (__fastcall *v7)(); // r8
  __int64 v8; // rax
  unsigned int v9; // ebx

  v2 = *(unsigned __int8 **)(a2 + 184);
  v5 = v2[1];
  v6 = *v2;
  if ( !v2[1] )
  {
    v7 = KseDsCompletionHookForStartDevice;
LABEL_5:
    (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_1404017F8 + 8))(a1, a2, v7, 0LL);
    goto LABEL_6;
  }
  if ( v5 == 4 )
  {
    v7 = KseDsCompletionHookForStopDevice;
    goto LABEL_5;
  }
LABEL_6:
  v8 = (*(__int64 (__fastcall **)(_QWORD))qword_1404017F8)(*(_QWORD *)(a1 + 8));
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 8LL * v6 + 32))(a1, a2);
  KsepDsEventPnpIrp(*(_QWORD *)(a1 + 8), a1, a2, v5, v9);
  return v9;
}
