/*
 * XREFs of sub_18011A580 @ 0x18011A580
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011A580(__int64 a1, __int64 *a2, _BYTE *a3)
{
  void *v3; // rbx
  volatile signed __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v14; // [rsp+F0h] [rbp-10h]
  int v15; // [rsp+F8h] [rbp-8h]
  int v16; // [rsp+FCh] [rbp-4h]
  int *v17; // [rsp+100h] [rbp+0h]
  __int64 v18; // [rsp+108h] [rbp+8h]
  __int64 v19; // [rsp+110h] [rbp+10h]
  __int64 v20; // [rsp+118h] [rbp+18h]
  __int64 v21; // [rsp+120h] [rbp+20h]
  __int64 v22; // [rsp+128h] [rbp+28h]
  _BYTE *v23; // [rsp+130h] [rbp+30h]
  int v24; // [rsp+138h] [rbp+38h]
  int v25; // [rsp+13Ch] [rbp+3Ch]

  v3 = *(void **)(a1 + 112);
  sub_18011A4DC((__int64)v3);
  sub_18011BA5C(v3);
  if ( (unsigned int)dword_18025DE60 > 5
    && (qword_18025DE70 & 0x400000000000LL) != 0
    && (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
  {
    v7 = *(volatile signed __int64 **)(a1 + 112);
    if ( v7 )
    {
      _InterlockedExchangeAdd64(v7 + 18, 0LL);
      sub_18011BA5C((void *)v7);
    }
    else
    {
      v12[0] = 0;
    }
    v8 = -1LL;
    do
      ++v8;
    while ( v12[v8] );
    v16 = 0;
    v15 = v8 + 1;
    v17 = &v11;
    v19 = *(_QWORD *)(a1 + 8);
    v21 = *a2;
    LODWORD(v8) = 0;
    v14 = v12;
    v11 = 1;
    v18 = 4LL;
    v20 = 16LL;
    v22 = 16LL;
    if ( a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
    }
    v25 = 0;
    if ( !a3 )
      a3 = &unk_18014302A;
    v24 = v8 + 1;
    v23 = a3;
    sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180223DC2, 0LL, 0LL, 7u, &v13);
  }
  result = sub_18011B798((char *)(a1 + 120));
  v10 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v10 )
    return o__aligned_free(v10);
  return result;
}
