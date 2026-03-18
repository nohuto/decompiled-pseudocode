/*
 * XREFs of VfMajorIsNewRequest @ 0x140975048
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409652E0 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x14096D504 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
  v6 = (unsigned int (__fastcall *)(__int64))*((_QWORD *)&unk_1409C9F38 + 12 * v5);
  if ( v6 && v6(a1) )
    return 1LL;
  result = (__int64)qword_1409CA9B8;
  if ( qword_1409CA9B8 )
    return qword_1409CA9B8(a1, a2);
  return result;
}
