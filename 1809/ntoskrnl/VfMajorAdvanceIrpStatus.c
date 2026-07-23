/*
 * XREFs of VfMajorAdvanceIrpStatus @ 0x1409368D4
 * Callers:
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorAdvanceIrpStatus(unsigned __int8 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 v6; // r9
  __int64 v7; // rax
  unsigned int (__fastcall *v8)(unsigned __int8 *); // rax

  if ( VfVerifyMode <= 2 || (MmVerifierData & 0x1000) == 0 )
    return 0LL;
  v6 = *a1;
  if ( *a1 > 0x1Bu )
    v7 = (v6 != 0xFF) + 28LL;
  else
    v7 = v6;
  v8 = (unsigned int (__fastcall *)(unsigned __int8 *))*((_QWORD *)&unk_140988BE8 + 12 * v7);
  if ( v8 && v8(a1) )
    return 1LL;
  if ( qword_140989668 )
    return qword_140989668(a1, a2, a3);
  else
    return 0LL;
}
