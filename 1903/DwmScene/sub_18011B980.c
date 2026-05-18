/*
 * XREFs of sub_18011B980 @ 0x18011B980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095264 @ 0x180095264 (sub_180095264.c)
 *     sub_180118428 @ 0x180118428 (sub_180118428.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

__int64 __fastcall sub_18011B980(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  volatile signed __int64 *v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_QWORD *)a2 || (result = *(_QWORD *)(a2 + 8)) != 0 )
  {
    v5 = o__aligned_malloc(160LL, 8LL);
    v6 = (volatile signed __int64 *)v5;
    if ( !v5 )
    {
      sub_180095264(pExceptionObject);
      throw (std::bad_alloc *)pExceptionObject;
    }
    v7 = *(_OWORD *)a2;
    *(_QWORD *)(v5 + 152) = 127LL;
    v9 = v7;
    sub_180118428(v5, &v9);
    v8 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v6;
    if ( v8 )
    {
      o__aligned_free(v8);
      v6 = *(volatile signed __int64 **)(a1 + 112);
    }
    _InterlockedExchangeAdd64(v6 + 18, 0LL);
    return sub_18011BA5C((void *)v6);
  }
  return result;
}
