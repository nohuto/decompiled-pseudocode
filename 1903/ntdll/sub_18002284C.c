/*
 * XREFs of sub_18002284C @ 0x18002284C
 * Callers:
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_18002284C(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, _QWORD *a4, int a5)
{
  _QWORD **v8; // rsi
  BOOLEAN v10; // r9
  _QWORD *i; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rax

  v8 = (_QWORD **)((char *)&unk_180165040 + 16 * (a5 & 0x1F));
  v10 = 0;
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v12 = i - 14;
    if ( a5 == *((_DWORD *)i + 38) && ((a3 & 8) == 0 || (v12[13] & 1) != 0) )
    {
      if ( a2 )
      {
        v10 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v12 + 9), 1u);
      }
      else
      {
        if ( (v12[13] & 0x10000000) == 0 && RtlEqualUnicodeString(String1, (PUNICODE_STRING)(v12 + 11), 1u) )
        {
          v10 = 1;
LABEL_9:
          v13 = v12[19];
          if ( *(_DWORD *)(v13 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v13 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)v12 + 69);
          *a4 = v12;
          return v10 == 0 ? 0xC0000135 : 0;
        }
        v10 = 0;
      }
      if ( v10 )
        goto LABEL_9;
    }
  }
  return v10 == 0 ? 0xC0000135 : 0;
}
