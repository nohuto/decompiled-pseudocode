/*
 * XREFs of sub_180119310 @ 0x180119310
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180119310(__int64 a1, __int64 *a2, __int64 *a3, _BYTE *a4, void *a5)
{
  void *v5; // rbx
  volatile signed __int64 *v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v19; // [rsp+F0h] [rbp-10h]
  int v20; // [rsp+F8h] [rbp-8h]
  int v21; // [rsp+FCh] [rbp-4h]
  int *v22; // [rsp+100h] [rbp+0h]
  __int64 v23; // [rsp+108h] [rbp+8h]
  __int64 v24; // [rsp+110h] [rbp+10h]
  __int64 v25; // [rsp+118h] [rbp+18h]
  __int64 v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  _BYTE *v30; // [rsp+140h] [rbp+40h]
  int v31; // [rsp+148h] [rbp+48h]
  int v32; // [rsp+14Ch] [rbp+4Ch]
  void *v33; // [rsp+150h] [rbp+50h]
  int v34; // [rsp+158h] [rbp+58h]
  int v35; // [rsp+15Ch] [rbp+5Ch]

  v5 = *(void **)(a1 + 112);
  sub_18011A4DC(v5);
  sub_18011BA5C(v5);
  if ( (unsigned int)dword_18025DE60 > 5
    && (qword_18025DE70 & 0x400000000000LL) != 0
    && (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
  {
    v10 = *(volatile signed __int64 **)(a1 + 112);
    if ( v10 )
    {
      _InterlockedExchangeAdd64(v10 + 18, 0LL);
      sub_18011BA5C((void *)v10);
    }
    else
    {
      v17[0] = 0;
    }
    v11 = -1LL;
    do
      ++v11;
    while ( v17[v11] );
    v21 = 0;
    v20 = v11 + 1;
    v22 = &v16;
    v24 = *(_QWORD *)(a1 + 16);
    v26 = *a2;
    v28 = *a3;
    LODWORD(v11) = 0;
    v19 = v17;
    v16 = 1;
    v23 = 4LL;
    v25 = 16LL;
    v27 = 16LL;
    v29 = 16LL;
    if ( a4 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a4[v11] );
    }
    v12 = a5;
    v32 = 0;
    if ( !a4 )
      a4 = &unk_18014302A;
    v31 = v11 + 1;
    LODWORD(v11) = 0;
    v30 = a4;
    v13 = a5 == 0LL;
    if ( a5 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *((_BYTE *)a5 + v11) );
      v13 = a5 == 0LL;
    }
    if ( v13 )
      v12 = &unk_18014302A;
    v35 = 0;
    v33 = v12;
    v34 = v11 + 1;
    sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_1802248F9, 0LL, 0LL, 9u, &v18);
  }
  result = sub_18011B798((char *)(a1 + 120));
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v15 )
    return o__aligned_free(v15);
  return result;
}
