/*
 * XREFs of PiLookupInDDBCache @ 0x140680388
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14068029C (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1400067C0 (RtlIsGenericTableEmptyAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
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
  char Buffer[16]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v18; // [rsp+30h] [rbp-58h]
  __int16 v19; // [rsp+32h] [rbp-56h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned int TimeDateStamp; // [rsp+40h] [rbp-48h]

  PiDDBCacheTable.TableContext = 0LL;
  v7 = -1073741823;
  if ( !RtlIsGenericTableEmptyAvl(&PiDDBCacheTable) )
  {
    v8 = RtlImageNtHeader(a2);
    if ( v8 )
    {
      v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
      v10 = v9 ? (__int64)(v9 + 1) : *(_QWORD *)(a1 + 8);
      v20 = v10;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(v10 + 2 * v11) );
      v18 = 2 * v11;
      v19 = 2 * v11;
      TimeDateStamp = v8->FileHeader.TimeDateStamp;
      v12 = (PVOID **)RtlLookupElementGenericTableAvl(&PiDDBCacheTable, Buffer);
      if ( v12 )
      {
        v14 = *v12;
        if ( (*v12)[1] != v12
          || (v15 = v12[1], *v15 != v12)
          || (*v15 = v14, v14[1] = v15, v16 = (PVOID ***)qword_14096FAB0, *(PVOID **)qword_14096FAB0 != &PiDDBCacheList) )
        {
          __fastfail(3u);
        }
        *v12 = &PiDDBCacheList;
        v12[1] = (PVOID *)v16;
        *v16 = v12;
        qword_14096FAB0 = (__int64)v12;
        v7 = *((_DWORD *)v12 + 9);
        if ( a4 )
          *a4 = *(_OWORD *)(v12 + 5);
      }
    }
  }
  return v7;
}
