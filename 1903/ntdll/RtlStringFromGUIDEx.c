/*
 * XREFs of RtlStringFromGUIDEx @ 0x18006A260
 * Callers:
 *     RtlStringFromGUID @ 0x18006A250 (RtlStringFromGUID.c)
 *     sub_1800E1A7C @ 0x1800E1A7C (sub_1800E1A7C.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     swprintf_s @ 0x180097FF0 (swprintf_s.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int16 v6; // dx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    v5 = sub_18006D6B8(78LL, a2);
    *(_QWORD *)(a2 + 8) = v5;
    if ( v5 )
    {
      v6 = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t *const *)(a2 + 8),
        (unsigned __int64)v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 2);
    if ( v6 >= 0x4Eu )
      goto LABEL_4;
    return 3221225507LL;
  }
}
