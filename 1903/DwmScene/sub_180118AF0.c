/*
 * XREFs of sub_180118AF0 @ 0x180118AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180118AF0(__int64 a1, int a2, _BYTE *a3)
{
  void *v3; // rbx
  ULONG result; // eax
  volatile signed __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v12; // [rsp+F0h] [rbp-10h]
  int v13; // [rsp+F8h] [rbp-8h]
  int v14; // [rsp+FCh] [rbp-4h]
  int *v15; // [rsp+100h] [rbp+0h]
  __int64 v16; // [rsp+108h] [rbp+8h]
  __int64 v17; // [rsp+110h] [rbp+10h]
  __int64 v18; // [rsp+118h] [rbp+18h]
  int *v19; // [rsp+120h] [rbp+20h]
  __int64 v20; // [rsp+128h] [rbp+28h]
  _BYTE *v21; // [rsp+130h] [rbp+30h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+13Ch] [rbp+3Ch]
  int v24; // [rsp+178h] [rbp+78h] BYREF

  v24 = a2;
  v3 = *(void **)(a1 + 112);
  sub_18011A4DC(v3);
  result = sub_18011BA5C(v3);
  if ( (unsigned int)dword_18025DE60 > 5 && (qword_18025DE70 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
    {
      v7 = *(volatile signed __int64 **)(a1 + 112);
      if ( v7 )
      {
        _InterlockedExchangeAdd64(v7 + 18, 0LL);
        sub_18011BA5C((void *)v7);
      }
      else
      {
        v10[0] = 0;
      }
      v8 = -1LL;
      do
        ++v8;
      while ( v10[v8] );
      v14 = 0;
      v13 = v8 + 1;
      v15 = &v9;
      v17 = *(_QWORD *)(a1 + 8);
      v19 = &v24;
      LODWORD(v8) = 0;
      v12 = v10;
      v9 = 1;
      v16 = 4LL;
      v18 = 16LL;
      v20 = 4LL;
      if ( a3 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( a3[v8] );
      }
      v23 = 0;
      if ( !a3 )
        a3 = &unk_18014302A;
      v22 = v8 + 1;
      v21 = a3;
      return sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180223C65, 0LL, 0LL, 7u, &v11);
    }
  }
  return result;
}
