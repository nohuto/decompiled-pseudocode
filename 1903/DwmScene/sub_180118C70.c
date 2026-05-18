/*
 * XREFs of sub_180118C70 @ 0x180118C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180118C70(_QWORD *a1, _BYTE *a2)
{
  void *v2; // rbx
  ULONG result; // eax
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v9[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE *v11; // [rsp+F8h] [rbp-10h]
  int v12; // [rsp+100h] [rbp-8h]
  int v13; // [rsp+104h] [rbp-4h]
  int *v14; // [rsp+108h] [rbp+0h]
  __int64 v15; // [rsp+110h] [rbp+8h]
  __int64 v16; // [rsp+118h] [rbp+10h]
  __int64 v17; // [rsp+120h] [rbp+18h]
  __int64 v18; // [rsp+128h] [rbp+20h]
  __int64 v19; // [rsp+130h] [rbp+28h]
  _BYTE *v20; // [rsp+138h] [rbp+30h]
  int v21; // [rsp+140h] [rbp+38h]
  int v22; // [rsp+144h] [rbp+3Ch]

  v2 = (void *)a1[14];
  sub_18011A4DC(v2);
  result = sub_18011BA5C(v2);
  if ( (unsigned int)dword_18025DE60 > 5 && (qword_18025DE70 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
    {
      v6 = (volatile signed __int64 *)a1[14];
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6 + 18, 0LL);
        sub_18011BA5C((void *)v6);
      }
      else
      {
        v9[0] = 0;
      }
      v7 = -1LL;
      do
        ++v7;
      while ( v9[v7] );
      v13 = 0;
      v12 = v7 + 1;
      v14 = &v8;
      v16 = a1[1];
      v18 = a1[3];
      LODWORD(v7) = 0;
      v11 = v9;
      v8 = 1;
      v15 = 4LL;
      v17 = 16LL;
      v19 = 16LL;
      if ( a2 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( a2[v7] );
      }
      v22 = 0;
      if ( !a2 )
        a2 = &unk_18014302A;
      v21 = v7 + 1;
      v20 = a2;
      return sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180224380, 0LL, 0LL, 7u, &v10);
    }
  }
  return result;
}
