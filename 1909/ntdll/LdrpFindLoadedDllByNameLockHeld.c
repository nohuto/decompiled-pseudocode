/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x18002284C
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindExistingModule @ 0x18002E6A0 (LdrpFindExistingModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 **a4,
        int a5)
{
  char v6; // r12
  _QWORD **v8; // rsi
  char v10; // r9
  _QWORD *i; // rdi
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rax

  v6 = a3;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
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
