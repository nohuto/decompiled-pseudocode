/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x1406D0B28
 * Callers:
 *     CmpCopySaclToVirtualKey @ 0x1407F4B50 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140580AB8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        void *Src,
        char a5,
        unsigned int *a6)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, (unsigned int)a2 >> 31, Src, a5, a6);
}
