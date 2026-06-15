/*
 * XREFs of ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005D2BC
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BEFC (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C268 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?ValidateDescriptor@SpatialBlock@@QEAAJXZ @ 0x14005D3AC (-ValidateDescriptor@SpatialBlock@@QEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(SpatialBlock **this)
{
  unsigned int v2; // ebx
  void (__fastcall **v3)(char *, __int64, int *); // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = SpatialBlock::ValidateDescriptor(this[113]);
  if ( v2 == -2005139387 )
  {
    v3 = (void (__fastcall **)(char *, __int64, int *))this[94];
    v5 = 1;
    (*v3)((char *)this + 752, 1LL, &v5);
  }
  return v2;
}
