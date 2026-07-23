/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1408E94D8
 * Callers:
 *     SdbTagRefToTagID @ 0x1407239EC (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1408E9448 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, PVOID ***a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  PVOID **v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm0
  int v17; // [rsp+30h] [rbp-258h] BYREF
  int v18; // [rsp+34h] [rbp-254h] BYREF
  WCHAR v19[264]; // [rsp+40h] [rbp-248h] BYREF

  v18 = 0;
  v5 = 0;
  v17 = 0;
  v9 = *a5 >> 28;
  if ( (*a5 & 0xF0000000) == 0 )
    v9 = *a5;
  if ( v9 >= 0x10
    || (SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9),
        (unsigned int)SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v18, (unsigned int)&v17, (__int64)v19) - 1 > 0x102) )
  {
    v12 = 1LL;
    goto LABEL_18;
  }
  if ( *(_WORD *)(a1 + 576) != 0x7FFF && (*(_DWORD *)(a1 + 544) & v17) == 0 )
  {
    v12 = 3LL;
LABEL_18:
    AslLogCallPrintf(v12);
    return v5;
  }
  v13 = SdbOpenDatabaseEx(v19, v10, v11);
  if ( v13 )
  {
    v14 = 32LL * v9;
    *(_QWORD *)(v14 + a1 + 48) = v13;
    *(_DWORD *)(v14 + a1 + 56) = 2;
    *(_DWORD *)(a1 + 28) |= 1 << v9;
    if ( a2 )
    {
      v15 = *a2;
      *(_DWORD *)(v14 + a1 + 56) |= 1u;
      *(_OWORD *)(v14 + a1 + 32) = v15;
    }
    else
    {
      *(_QWORD *)(v14 + a1 + 32) = 0LL;
      *(_QWORD *)(v14 + a1 + 40) = 0LL;
    }
    v5 = 1;
    if ( v9 == 1 )
      *(_QWORD *)(a1 + 16) = v13;
    *a5 = v9 << 28;
    if ( a4 )
      *a4 = v13;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}
