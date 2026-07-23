/*
 * XREFs of VfMajorVerifyIrpStackDownward @ 0x140936CA8
 * Callers:
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall VfMajorVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned __int8 v6; // r10
  __int64 v11; // rax
  void (__fastcall *v12)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v6 = *a4;
  if ( *a4 > 0x1Bu )
    v11 = (v6 != 0xFF) + 28LL;
  else
    v11 = v6;
  v12 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140988BD0 + 12 * v11);
  if ( v12 )
    v12(a1);
  result = qword_140989650;
  if ( qword_140989650 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_140989650(
                                                                                             a1,
                                                                                             a2,
                                                                                             a3,
                                                                                             a4,
                                                                                             *(_QWORD *)(a5 + 8),
                                                                                             a5,
                                                                                             a6);
  return result;
}
