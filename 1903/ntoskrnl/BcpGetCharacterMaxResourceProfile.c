/*
 * XREFs of BcpGetCharacterMaxResourceProfile @ 0x1401900F4
 * Callers:
 *     BcpGetMaxResourceProfile @ 0x140190030 (BcpGetMaxResourceProfile.c)
 * Callees:
 *     RaspGetXExtent @ 0x14018331C (RaspGetXExtent.c)
 */

__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // xmm1_8
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  int XExtent; // r8d
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  bool v13; // cf
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-28h]
  __int128 v18; // [rsp+48h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-10h]
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v5 = *((_QWORD *)a3 + 2);
  v18 = *a3;
  v7 = 0LL;
  v19 = v5;
  v8 = (_DWORD *)((char *)&unk_140429EC0 + 4 * a2);
  do
  {
    LODWORD(v19) = *v8;
    v16[0] = 0LL;
    v16[1] = 0LL;
    v17 = 0LL;
    XExtent = RaspGetXExtent(a1, (__int64)&v18, &v20, a4, v15, v16);
    if ( XExtent < 0 )
      break;
    v10 = v20;
    v11 = v17;
    if ( *(_DWORD *)(a4 + 8) >= v20 )
      v10 = *(_DWORD *)(a4 + 8);
    v12 = *(_QWORD *)a4;
    v13 = *(_QWORD *)a4 < v17;
    *(_DWORD *)(a4 + 8) = v10;
    if ( !v13 )
      v11 = v12;
    ++v7;
    v8 += 18;
    *(_QWORD *)a4 = v11;
  }
  while ( v7 < 5 );
  return (unsigned int)XExtent;
}
