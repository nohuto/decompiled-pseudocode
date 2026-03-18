/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0246598
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C00421EC (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0245BFC (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0246354 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
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

  if ( this[53] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 7067LL;
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
      return *((_DWORD *)a2 + 44) == 1;
  }
  return result;
}
