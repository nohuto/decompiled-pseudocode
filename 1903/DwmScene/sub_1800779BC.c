/*
 * XREFs of sub_1800779BC @ 0x1800779BC
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_1800793E0 @ 0x1800793E0 (sub_1800793E0.c)
 *     sub_1800796C4 @ 0x1800796C4 (sub_1800796C4.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_18007A4A0 @ 0x18007A4A0 (sub_18007A4A0.c)
 *     sub_18007AEFC @ 0x18007AEFC (sub_18007AEFC.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_18007CA18 @ 0x18007CA18 (sub_18007CA18.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 *     sub_1800C2660 @ 0x1800C2660 (sub_1800C2660.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800779BC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 976);
  }
  *a2 = *(_QWORD *)(a1 + 968);
  result = a2;
  a2[1] = v2;
  return result;
}
