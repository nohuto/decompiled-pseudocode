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

__int64 __fastcall sub_18002284C(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 **a4, int a5)
{
  char v6; // r12
  _QWORD **v8; // rsi
  char v10; // r9
  _QWORD *i; // rdi
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rax

  v6 = a3;
  v8 = (_QWORD **)((char *)&unk_180165040 + 16 * (a5 & 0x1F));
  v10 = 0;
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v12 = (volatile signed __int32 *)(i - 14);
    if ( a5 == *((_DWORD *)i + 38) && ((v6 & 8) == 0 || (v12[26] & 1) != 0) )
    {
      if ( a2 )
      {
        LOBYTE(a3) = 1;
        v10 = RtlEqualUnicodeString(a2, v12 + 18, a3);
      }
      else
      {
        if ( (v12[26] & 0x10000000) == 0 )
        {
          LOBYTE(a3) = 1;
          if ( (unsigned __int8)RtlEqualUnicodeString(a1, v12 + 22, a3) )
          {
            v10 = 1;
LABEL_9:
            v13 = *((_QWORD *)v12 + 19);
            if ( *(_DWORD *)(v13 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v13 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement(v12 + 69);
            *a4 = v12;
            return v10 == 0 ? 0xC0000135 : 0;
          }
        }
        v10 = 0;
      }
      if ( v10 )
        goto LABEL_9;
    }
  }
  return v10 == 0 ? 0xC0000135 : 0;
}
