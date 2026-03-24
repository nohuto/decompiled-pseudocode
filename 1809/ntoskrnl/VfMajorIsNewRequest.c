/*
 * XREFs of VfMajorIsNewRequest @ 0x140935A1C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140926DB0 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x14092EC8C (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r8
  __int64 v5; // rax
  unsigned int (__fastcall *v6)(__int64); // rax
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 > 0x1Bu )
    v5 = (v2 != 0xFF) + 28LL;
  else
    v5 = v2;
  v6 = (unsigned int (__fastcall *)(__int64))*((_QWORD *)&unk_140987BF8 + 12 * v5);
  if ( v6 && v6(a1) )
    return 1LL;
  result = (__int64)qword_140988678;
  if ( qword_140988678 )
    return qword_140988678(a1, a2);
  return result;
}
