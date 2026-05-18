/*
 * XREFs of sub_180119CB0 @ 0x180119CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180119CB0(__int64 a1, __int64 *a2, _BYTE *a3, int a4, void *a5)
{
  void *v5; // rbx
  volatile signed __int64 *v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  bool v12; // zf
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]
  int *v21; // [rsp+100h] [rbp+0h]
  __int64 v22; // [rsp+108h] [rbp+8h]
  __int64 v23; // [rsp+110h] [rbp+10h]
  __int64 v24; // [rsp+118h] [rbp+18h]
  __int64 v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  _BYTE *v27; // [rsp+130h] [rbp+30h]
  int v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+13Ch] [rbp+3Ch]
  int *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  void *v32; // [rsp+150h] [rbp+50h]
  int v33; // [rsp+158h] [rbp+58h]
  int v34; // [rsp+15Ch] [rbp+5Ch]
  int v35; // [rsp+1A8h] [rbp+A8h] BYREF

  v35 = a4;
  v5 = *(void **)(a1 + 112);
  sub_18011A4DC(v5);
  sub_18011BA5C(v5);
  if ( (unsigned int)dword_18025DE60 > 5
    && (qword_18025DE70 & 0x400000000000LL) != 0
    && (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
  {
    v9 = *(volatile signed __int64 **)(a1 + 112);
    if ( v9 )
    {
      _InterlockedExchangeAdd64(v9 + 18, 0LL);
      sub_18011BA5C((void *)v9);
    }
    else
    {
      v16[0] = 0;
    }
    v10 = -1LL;
    do
      ++v10;
    while ( v16[v10] );
    v20 = 0;
    v19 = v10 + 1;
    v21 = &v15;
    v23 = *(_QWORD *)(a1 + 16);
    v25 = *a2;
    LODWORD(v10) = 0;
    v18 = v16;
    v15 = 1;
    v22 = 4LL;
    v24 = 16LL;
    v26 = 16LL;
    if ( a3 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a3[v10] );
    }
    v11 = a5;
    v29 = 0;
    v31 = 4LL;
    if ( !a3 )
      a3 = &unk_18014302A;
    v28 = v10 + 1;
    v30 = &v35;
    LODWORD(v10) = 0;
    v27 = a3;
    v12 = a5 == 0LL;
    if ( a5 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_BYTE *)a5 + v10) );
      v12 = a5 == 0LL;
    }
    if ( v12 )
      v11 = &unk_18014302A;
    v34 = 0;
    v32 = v11;
    v33 = v10 + 1;
    sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180224605, 0LL, 0LL, 9u, &v17);
  }
  result = sub_18011B798((char *)(a1 + 120));
  v14 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v14 )
    return o__aligned_free(v14);
  return result;
}
