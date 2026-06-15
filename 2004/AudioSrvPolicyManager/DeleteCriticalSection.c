/*
 * XREFs of DeleteCriticalSection @ 0x18000A150
 * Callers:
 *     sub_18003B1EA @ 0x18003B1EA (sub_18003B1EA.c)
 *     sub_18003B22C @ 0x18003B22C (sub_18003B22C.c)
 *     unknown_libname_41 @ 0x18003B88C (unknown_libname_41.c)
 *     sub_18003B8CE @ 0x18003B8CE (sub_18003B8CE.c)
 *     sub_18003B8E7 @ 0x18003B8E7 (sub_18003B8E7.c)
 *     sub_18003B900 @ 0x18003B900 (sub_18003B900.c)
 *     sub_18003B919 @ 0x18003B919 (sub_18003B919.c)
 *     sub_18003B932 @ 0x18003B932 (sub_18003B932.c)
 *     sub_18003B94B @ 0x18003B94B (sub_18003B94B.c)
 *     sub_18003BB6E @ 0x18003BB6E (sub_18003BB6E.c)
 *     sub_18003BC9E @ 0x18003BC9E (sub_18003BC9E.c)
 *     sub_18003BDB1 @ 0x18003BDB1 (sub_18003BDB1.c)
 *     sub_18003BDCA @ 0x18003BDCA (sub_18003BDCA.c)
 *     sub_18003BDE3 @ 0x18003BDE3 (sub_18003BDE3.c)
 *     sub_18003C0DF @ 0x18003C0DF (sub_18003C0DF.c)
 *     sub_18003C544 @ 0x18003C544 (sub_18003C544.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}
