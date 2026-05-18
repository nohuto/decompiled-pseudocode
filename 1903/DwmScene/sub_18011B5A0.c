/*
 * XREFs of sub_18011B5A0 @ 0x18011B5A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_180119B30 @ 0x180119B30 (sub_180119B30.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18011B5A0(__int64 a1, __int64 *a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rsi
  volatile signed __int64 *v10; // rax
  __int64 v11; // rcx
  ULONG result; // eax
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v16[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE *v18; // [rsp+F8h] [rbp-10h]
  int v19; // [rsp+100h] [rbp-8h]
  int v20; // [rsp+104h] [rbp-4h]
  int *v21; // [rsp+108h] [rbp+0h]
  int v22; // [rsp+110h] [rbp+8h]
  int v23; // [rsp+114h] [rbp+Ch]
  __int64 v24; // [rsp+118h] [rbp+10h]
  int v25; // [rsp+120h] [rbp+18h]
  int v26; // [rsp+124h] [rbp+1Ch]
  __int64 v27; // [rsp+128h] [rbp+20h]
  int v28; // [rsp+130h] [rbp+28h]
  int v29; // [rsp+134h] [rbp+2Ch]
  _BYTE *v30; // [rsp+138h] [rbp+30h]
  int v31; // [rsp+140h] [rbp+38h]
  int v32; // [rsp+144h] [rbp+3Ch]

  v3 = a1 + 120;
  v7 = sub_18011B798((char *)(a1 + 120));
  v8 = *(_QWORD *)(a1 + 112);
  v9 = (void *)v7;
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
  {
    o__aligned_free(v8);
    v9 = *(void **)(a1 + 112);
  }
  sub_18011A4DC((__int64)v9);
  sub_18011BA5C(v9);
  v10 = (volatile signed __int64 *)sub_180119B30(v3, 0LL);
  v11 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v10;
  if ( v11 )
  {
    o__aligned_free(v11);
    v10 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v10 + 18, 0LL);
  result = sub_18011BA5C((void *)v10);
  if ( (unsigned int)dword_18025DE60 > 5 && (qword_18025DE70 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
    {
      v13 = *(volatile signed __int64 **)(a1 + 112);
      if ( v13 )
      {
        _InterlockedExchangeAdd64(v13 + 18, 0LL);
        sub_18011BA5C((void *)v13);
      }
      else
      {
        v16[0] = 0;
      }
      v14 = -1LL;
      do
        ++v14;
      while ( v16[v14] );
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v19 = v14 + 1;
      v21 = &v15;
      v24 = *(_QWORD *)(a1 + 8);
      v27 = *a2;
      LODWORD(v14) = 0;
      v18 = v16;
      v15 = 1;
      v22 = 4;
      v25 = 16;
      v28 = 16;
      if ( a3 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a3[v14] );
      }
      if ( !a3 )
        a3 = &unk_18014302A;
      v32 = 0;
      v31 = v14 + 1;
      v30 = a3;
      return sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180223F93, 0LL, 0LL, 7u, &v17);
    }
  }
  return result;
}
