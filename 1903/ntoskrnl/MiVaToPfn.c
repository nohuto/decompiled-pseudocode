/*
 * XREFs of MiVaToPfn @ 0x140124120
 * Callers:
 *     MiCheckKernelShadow @ 0x140123F00 (MiCheckKernelShadow.c)
 *     MiGetPhysicalAddress @ 0x140124020 (MiGetPhysicalAddress.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 *     RtlMarkHiberPhase @ 0x14031857C (RtlMarkHiberPhase.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiInitializeShadowPageTable @ 0x14074E35C (MiInitializeShadowPageTable.c)
 *     MxConsumeLargePageSlush @ 0x1409F1AB8 (MxConsumeLargePageSlush.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rax
  unsigned __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  memset(v12, 0, 0x20uLL);
  MiFillPteHierarchy(a1, v12);
  v2 = 4LL;
  do
  {
    v3 = MI_READ_PTE_LOCK_FREE(v12[v2 - 1]);
    v13 = v3;
  }
  while ( v2 && (v3 & 0x80u) == 0LL );
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL;
  if ( v5 )
  {
    v6 = 1LL;
    v7 = a1 >> 12;
    do
    {
      v8 = v7;
      v7 >>= 9;
      v9 = v6 * (v8 & 0x1FF);
      v6 <<= 9;
      v4 += v9;
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
