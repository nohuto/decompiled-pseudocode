/*
 * XREFs of IopCheckDeviceFlags @ 0x14059C4EC
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x14059BEEC (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140139CDC (IoGetLowerDeviceObjectWithTag.c)
 */

char __fastcall IopCheckDeviceFlags(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  char v4; // si
  _DWORD *LowerDeviceObjectWithTag; // rbx

  v2 = *(_DWORD **)(a1 + 48);
  v4 = 0;
  ObfReferenceObjectWithTag(v2, 0x70506F50u);
  if ( v2 )
  {
    while ( (a2 & v2[12]) == 0 )
    {
      LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v2, 0x70506F50u);
      ObfDereferenceObjectWithTag(v2, 0x70506F50u);
      v2 = LowerDeviceObjectWithTag;
      if ( !LowerDeviceObjectWithTag )
        return v4;
    }
    v4 = 1;
    ObfDereferenceObjectWithTag(v2, 0x70506F50u);
  }
  return v4;
}
