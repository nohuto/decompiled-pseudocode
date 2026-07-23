/*
 * XREFs of PopMarshalSettingValues @ 0x14058A7D8
 * Callers:
 *     PopDispatchNotificationsToList @ 0x140589518 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x14058A744 (PopGetSettingValue.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 i; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rax
  __int64 j; // rbx
  _DWORD *v13; // rdx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  void *v16; // rax
  __int64 k; // rbx
  _DWORD *v18; // rcx
  PVOID P; // [rsp+30h] [rbp-38h]
  void *v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+40h] [rbp-28h]

  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v7 = 0;
  v8 = dword_14041918C;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    v10 = (unsigned int)i;
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      *(&P + i) = *(PVOID *)(a1 + 8 * v8 + 64);
    }
    else
    {
      v16 = *(void **)(a1 + 8 * i + 64);
      *(&P + i) = v16;
      v10 = (unsigned int)i;
      if ( (_DWORD)i == 2 )
      {
        v10 = 2LL;
        if ( !v16 )
          *(&P + i) = v22;
      }
    }
    v7 += 8;
    v11 = *(&P + v10);
    if ( v11 )
    {
      ++*v11;
      v7 += v11[1];
    }
  }
  if ( a3 < v7 )
  {
    v15 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v13 = *(&P + j);
      if ( v13 )
      {
        *a2 = v13[2];
        a2[1] = v13[1];
        v14 = v13[1];
        memmove(a2 + 2, v13 + 3, v14);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v14 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v14 + 8);
    }
    *a4 = v7;
    v15 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v18 = *(&P + k);
    if ( v18 )
    {
      if ( (*v18)-- == 1 )
        ExFreePoolWithTag(v18, 0x74655350u);
    }
  }
  return v15;
}
