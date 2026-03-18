/*
 * XREFs of VfMajorVerifyFinalIrpStack @ 0x140975260
 * Callers:
 *     IovpCompleteRequest2 @ 0x14096DEA0 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall VfMajorVerifyFinalIrpStack(__int64 a1, unsigned __int8 *a2))(_QWORD, _QWORD)
{
  unsigned __int8 v2; // r8
  __int64 v5; // rax
  void (__fastcall *v6)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v2 = *a2;
  if ( *a2 > 0x1Bu )
    v5 = (v2 != 0xFF) + 28LL;
  else
    v5 = v2;
  v6 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_1409C9F48 + 12 * v5);
  if ( v6 )
    v6(a1);
  result = qword_1409CA9C8;
  if ( qword_1409CA9C8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1409CA9C8(a1, a2);
  return result;
}
