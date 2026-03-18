/*
 * XREFs of PiLookupInDDBCache @ 0x14070D520
 * Callers:
 *     PpCheckInDriverDatabase @ 0x140709DAC (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140001C90 (RtlIsGenericTableEmptyAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     wcsrchr @ 0x1401A2110 (wcsrchr.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PiLookupInDDBCache(__int64 a1, void *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  PIMAGE_NT_HEADERS v8; // rsi
  wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  PVOID **v12; // rax
  PVOID *v14; // rcx
  PVOID *v15; // rdx
  PVOID ***v16; // rcx
  _QWORD Buffer[7]; // [rsp+20h] [rbp-68h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  PiDDBCacheTable.TableContext = 0LL;
  v7 = -1073741823;
  if ( !RtlIsGenericTableEmptyAvl(&PiDDBCacheTable) )
  {
    v8 = RtlImageNtHeader(a2);
    if ( v8 )
    {
      v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
      v10 = v9 ? (__int64)(v9 + 1) : *(_QWORD *)(a1 + 8);
      Buffer[3] = v10;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(v10 + 2 * v11) );
      LOWORD(Buffer[2]) = 2 * v11;
      WORD1(Buffer[2]) = 2 * v11;
      LODWORD(Buffer[4]) = v8->FileHeader.TimeDateStamp;
      v12 = (PVOID **)RtlLookupElementGenericTableAvl(&PiDDBCacheTable, Buffer);
      if ( v12 )
      {
        v14 = *v12;
        if ( (*v12)[1] != v12
          || (v15 = v12[1], *v15 != v12)
          || (*v15 = v14, v14[1] = v15, v16 = (PVOID ***)qword_1409AEB90, *(PVOID **)qword_1409AEB90 != &PiDDBCacheList) )
        {
          __fastfail(3u);
        }
        *v12 = &PiDDBCacheList;
        v12[1] = (PVOID *)v16;
        *v16 = v12;
        qword_1409AEB90 = (__int64)v12;
        v7 = *((_DWORD *)v12 + 9);
        if ( a4 )
          *a4 = *(_OWORD *)(v12 + 5);
      }
    }
  }
  return v7;
}
