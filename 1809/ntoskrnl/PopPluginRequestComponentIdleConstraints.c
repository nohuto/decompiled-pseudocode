/*
 * XREFs of PopPluginRequestComponentIdleConstraints @ 0x1402DAC28
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402DD5E0 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1402E0774 (PopDiagTraceFxComponentIdleConstraints.c)
 */

char __fastcall PopPluginRequestComponentIdleConstraints(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  char v5; // bl
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  unsigned int v15; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( v4 == PopFxProcessorPlugin )
  {
    if ( v4 )
    {
      v10 = *(_QWORD *)(a1 + 72);
      v13 = a2;
      v12 = v10;
      v14 = a3;
      v15 = a4;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v4 + 96))(27LL, &v12);
      if ( v5 )
        PopDiagTraceFxComponentIdleConstraints(a1, a2, a3, a4);
    }
  }
  return v5;
}
