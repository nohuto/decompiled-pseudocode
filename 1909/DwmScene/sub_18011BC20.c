/*
 * XREFs of sub_18011BC20 @ 0x18011BC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A5EC @ 0x18011A5EC (sub_18011A5EC.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char __fastcall sub_18011BC20(__int64 a1, int a2, _BYTE *a3, _BYTE *a4)
{
  _QWORD *v4; // rbx
  unsigned __int64 v8; // rax
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  bool v12; // zf
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v14[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE *v16; // [rsp+F8h] [rbp-10h]
  int v17; // [rsp+100h] [rbp-8h]
  int v18; // [rsp+104h] [rbp-4h]
  int *v19; // [rsp+108h] [rbp+0h]
  __int64 v20; // [rsp+110h] [rbp+8h]
  __int64 v21; // [rsp+118h] [rbp+10h]
  __int64 v22; // [rsp+120h] [rbp+18h]
  int *v23; // [rsp+128h] [rbp+20h]
  __int64 v24; // [rsp+130h] [rbp+28h]
  _BYTE *v25; // [rsp+138h] [rbp+30h]
  int v26; // [rsp+140h] [rbp+38h]
  int v27; // [rsp+144h] [rbp+3Ch]
  _BYTE *v28; // [rsp+148h] [rbp+40h]
  int v29; // [rsp+150h] [rbp+48h]
  int v30; // [rsp+154h] [rbp+4Ch]
  int v31; // [rsp+190h] [rbp+88h] BYREF

  v31 = a2;
  v4 = *(_QWORD **)(a1 + 112);
  v8 = sub_18011A5EC((__int64)v4);
  result = sub_18011BB6C(v4, v8, (_BYTE *)(a1 + 120));
  if ( (unsigned int)dword_18025EE60 > 5 && (qword_18025EE70 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18025EE78 & 0x400000000000LL) == qword_18025EE78 )
    {
      v10 = *(_QWORD *)(a1 + 112);
      if ( v10 )
        sub_18011BB6C((_QWORD *)v10, _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 144), 0LL), v14);
      else
        v14[0] = 0;
      v11 = -1LL;
      do
        ++v11;
      while ( v14[v11] );
      v18 = 0;
      v17 = v11 + 1;
      v19 = &v13;
      v21 = *(_QWORD *)(a1 + 16);
      v23 = &v31;
      LODWORD(v11) = 0;
      v16 = v14;
      v13 = 1;
      v20 = 4LL;
      v22 = 16LL;
      v24 = 4LL;
      if ( a3 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a3[v11] );
      }
      v27 = 0;
      if ( !a3 )
        a3 = &unk_18014402A;
      v26 = v11 + 1;
      LODWORD(v11) = 0;
      v25 = a3;
      v12 = a4 == 0LL;
      if ( a4 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a4[v11] );
        v12 = a4 == 0LL;
      }
      if ( v12 )
        a4 = &unk_18014402A;
      v30 = 0;
      v28 = a4;
      v29 = v11 + 1;
      return sub_180001128((__int64)&dword_18025EE60, (unsigned __int8 *)dword_1802254A8, 0LL, 0LL, 8u, &v15);
    }
  }
  return result;
}
