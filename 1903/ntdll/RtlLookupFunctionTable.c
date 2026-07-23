/*
 * XREFs of RtlLookupFunctionTable @ 0x18009BCC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 */

__int64 __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, char *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *((_QWORD *)&xmmword_18017A4E0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    result = sub_18001E620(a1, (signed __int64)&v6, a3, *((char **)&xmmword_18017A4E0 + 1));
  }
  else
  {
    result = xmmword_18017A4E0;
    v6 = xmmword_18017A4E0;
    v7 = qword_18017A4F0;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *(_DWORD *)a3 = HIDWORD(v7);
  }
  return result;
}
