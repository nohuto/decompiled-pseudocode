/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C015F10C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0011920 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C015F0C0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  if ( v1 )
  {
    v3 = 0;
    v2 = *v1;
    HmgDecrementShareReferenceCountEx(v1, &v3);
    if ( v3 )
      bDeleteDCInternalEx(v2, 0LL);
  }
}
