/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0212860
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C003BAEC (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0211E00 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C02126F8 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  struct DXGADAPTER **v5; // rbx
  bool result; // al
  struct DXGADAPTER *i; // rcx
  struct DXGADAPTER *v8; // rdx

  if ( this[52] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 6238LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this + 56;
  result = 0;
  for ( i = *v5; ; i = *(struct DXGADAPTER **)i )
  {
    v8 = 0LL;
    if ( i != (struct DXGADAPTER *)v5 )
      v8 = i;
    if ( !v8 )
      break;
    if ( v8 == a2 )
      return *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 24) + 64LL) + 236LL) == 2;
  }
  return result;
}
