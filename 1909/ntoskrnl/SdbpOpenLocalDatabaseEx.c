/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1409243C4
 * Callers:
 *     SdbTagRefToTagID @ 0x14074BF60 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbOpenDatabaseEx @ 0x1409213F4 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140924334 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x140924660 (SdbResolveDatabaseEx.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, PVOID ***a4, _DWORD *a5)
{
  unsigned int v5; // esi
  __int64 v8; // rdx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  PVOID **v14; // r8
  __int64 v15; // rdx
  __int128 v16; // xmm0
  int v18; // [rsp+30h] [rbp-268h] BYREF
  int v19; // [rsp+34h] [rbp-264h] BYREF
  __int64 v20; // [rsp+38h] [rbp-260h]
  __int64 v21; // [rsp+40h] [rbp-258h]
  WCHAR v22[264]; // [rsp+50h] [rbp-248h] BYREF

  v19 = 0;
  v5 = 0;
  v18 = 0;
  v20 = 0LL;
  v8 = (unsigned int)*a5;
  v21 = 0LL;
  v10 = (unsigned int)v8 >> 28;
  if ( (v8 & 0xF0000000) == 0 )
    v10 = v8;
  if ( v10 >= 0x10
    || (SdbpCloseLocalDatabaseEx(a1, v8, v10),
        (unsigned int)SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v19, (unsigned int)&v18, (__int64)v22) - 1 > 0x102) )
  {
    v13 = 1LL;
    goto LABEL_18;
  }
  if ( *(_WORD *)(a1 + 576) != 0x7FFF && (*(_DWORD *)(a1 + 544) & v18) == 0 )
  {
    v13 = 3LL;
LABEL_18:
    AslLogCallPrintf(v13);
    return v5;
  }
  v14 = SdbOpenDatabaseEx(v22, v11, v12);
  if ( v14 )
  {
    v15 = 32LL * v10;
    *(_QWORD *)(v15 + a1 + 48) = v14;
    *(_DWORD *)(v15 + a1 + 56) = 2;
    *(_DWORD *)(a1 + 28) |= 1 << v10;
    if ( a2 )
    {
      v16 = *a2;
      *(_DWORD *)(v15 + a1 + 56) |= 1u;
      *(_OWORD *)(v15 + a1 + 32) = v16;
    }
    else
    {
      *(_QWORD *)(v15 + a1 + 32) = 0LL;
      *(_QWORD *)(v15 + a1 + 40) = 0LL;
    }
    v5 = 1;
    if ( v10 == 1 )
      *(_QWORD *)(a1 + 16) = v14;
    *a5 = v10 << 28;
    if ( a4 )
      *a4 = v14;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}
