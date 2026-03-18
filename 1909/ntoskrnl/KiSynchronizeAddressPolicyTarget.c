/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x14012F800
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x14012F6AC (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x140043BF0 (KiSetAddressPolicy.c)
 */

int KiSynchronizeAddressPolicyTarget()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process->AddressPolicy == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy();
  }
  return (int)CurrentThread;
}
