/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1407F59B0
 * Callers:
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, (unsigned int)a2 >> 31, Src, 0, (unsigned int *)(a3 + 44));
}
