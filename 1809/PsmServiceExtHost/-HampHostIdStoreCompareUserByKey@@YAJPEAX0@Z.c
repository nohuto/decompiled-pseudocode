/*
 * XREFs of ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x18006D290
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 */

int __fastcall HampHostIdStoreCompareUserByKey(void *Buf1, char *a2)
{
  size_t v4; // rdi
  ULONG v5; // eax

  v4 = RtlLengthSid(Buf1);
  v5 = RtlLengthSid(a2 + 88);
  if ( (unsigned int)v4 < v5 )
    return -1;
  if ( (unsigned int)v4 <= v5 )
    return memcmp_0(Buf1, a2 + 88, v4);
  return 1;
}
