/*
 * XREFs of MiGetAweNode @ 0x1402B0F08
 * Callers:
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14085119C (MiReferenceIncomingPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x140851710 (MmSetGraphicsPtes.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetAweNode(unsigned __int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // r9

  v1 = *(_QWORD **)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 352LL);
  if ( !v1 )
    return 0LL;
  v2 = a1 >> 12;
  do
  {
    v3 = v1[3];
    if ( v2 > (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( v2 >= (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) )
        break;
      v1 = (_QWORD *)*v1;
    }
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
