/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x180014B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014CD4 @ 0x180014CD4 (sub_180014CD4.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 */

char __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  char v3; // r10
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (unsigned int)a2 < 0x14 || *(_BYTE *)a1 != 1 || *(__int16 *)(a1 + 2) >= 0 )
    return 0;
  v6 = *(unsigned int *)(a1 + 4);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)sub_180014CD4(v6, a2, 12LL, &v20) )
      return 0;
    v9 = a1 + v8;
    if ( *(_BYTE *)(a1 + v8) != 1
      || *(_BYTE *)(v9 + 1) > 0xFu
      || v20 < 4 * (unsigned int)*(unsigned __int8 *)(v9 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v10 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v10 )
  {
    if ( !(unsigned __int8)sub_180014CD4(v10, v4, v7, &v20) )
      return 0;
    v12 = a1 + v11;
    if ( *(_BYTE *)(a1 + v11) != 1
      || *(_BYTE *)(v12 + 1) > 0xFu
      || v20 < 4 * (unsigned int)*(unsigned __int8 *)(v12 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (v13 = *(unsigned int *)(a1 + 16), !(_DWORD)v13)
    || (unsigned __int8)sub_180014CD4(v13, v4, 8LL, &v20)
    && (v15 = a1 + v14, v20 >= *(unsigned __int16 *)(v15 + 2))
    && (unsigned __int8)RtlValidAcl(v15) )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      return 1;
    v16 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v16 )
      return 1;
    if ( (unsigned __int8)sub_180014CD4(v16, v4, 8LL, &v20) )
    {
      v18 = a1 + v17;
      if ( v20 >= *(unsigned __int16 *)(v18 + 2) )
      {
        if ( (unsigned __int8)RtlValidAcl(v18) )
          return 1;
      }
    }
  }
  return 0;
}
