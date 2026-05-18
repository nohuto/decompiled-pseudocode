/*
 * XREFs of sub_18008CBD8 @ 0x18008CBD8
 * Callers:
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_180088F4C @ 0x180088F4C (sub_180088F4C.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     sub_18008BE00 @ 0x18008BE00 (sub_18008BE00.c)
 *     sub_18008CB6C @ 0x18008CB6C (sub_18008CB6C.c)
 *     sub_18008CF58 @ 0x18008CF58 (sub_18008CF58.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18008CBD8(__int64 a1, __int64 a2)
{
  _QWORD **v4; // r14
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  volatile signed __int32 *v7; // rax
  __int64 *v8; // r8
  volatile signed __int32 *v9; // rsi
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *k; // rax
  __int64 *v16; // r8
  volatile signed __int32 *v17; // rbx
  __int64 result; // rax
  _QWORD **v19; // rdi
  _QWORD *v20; // rbx
  __int64 *v21; // rax
  char *v22; // rdx
  __int64 v23; // rcx
  signed __int64 v24; // rdx
  unsigned __int16 v25; // r9
  int v26; // eax
  volatile signed __int32 *v27; // rax
  __int64 *v28; // r8
  volatile signed __int32 *v29; // r14
  __int64 *v30; // rcx
  signed __int32 v31; // eax
  bool v32; // zf
  __int64 v33; // [rsp+28h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  volatile signed __int32 *v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v38; // [rsp+60h] [rbp-20h]
  __int64 v39; // [rsp+68h] [rbp-18h] BYREF
  volatile signed __int32 *v40; // [rsp+70h] [rbp-10h]
  volatile signed __int32 *v41; // [rsp+C0h] [rbp+40h]
  volatile signed __int32 *v42; // [rsp+D8h] [rbp+58h]

  sub_1800635BC(a1 + 16, a2);
  v4 = (_QWORD **)(a1 + 88);
  v5 = *(_QWORD **)(a1 + 88);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (volatile signed __int32 *)(v6[8] + 76LL);
    v41 = v7;
    while ( _interlockedbittestandset(v7, 0) )
      v7 = v41;
    v8 = sub_18008B530(v6[8], &v34);
    sub_18008CB6C(a1, a2, v8);
    v9 = v35;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    *v41 = 0;
    v10 = (__int64 **)v6[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  sub_18008CF58(a1);
  sub_180088F4C((__int64 ***)(a1 + 88), (__int64)&v36, (__int64)&qword_180259808);
  v13 = v36;
  v14 = *(volatile signed __int32 **)(v36 + 72);
  if ( v14 )
  {
    _InterlockedAdd(v14 + 2, 1u);
    v14 = *(volatile signed __int32 **)(v13 + 72);
  }
  v33 = *(_QWORD *)(v13 + 64);
  for ( k = (volatile signed __int32 *)(v33 + 76);
        _interlockedbittestandset(k, 0);
        k = (volatile signed __int32 *)(v33 + 76) )
  {
    ;
  }
  v16 = sub_18008B530(v33, &v37);
  sub_18008BE00(a1, a2, v16);
  v17 = v38;
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  result = v33 + 76;
  *(_DWORD *)(v33 + 76) = 0;
  v19 = (_QWORD **)*v4;
  v20 = (_QWORD *)**v4;
  while ( v20 != v19 )
  {
    v21 = &qword_180259808;
    if ( (unsigned __int64)qword_180259820 >= 8 )
      v21 = (__int64 *)qword_180259808;
    v22 = (char *)(v20 + 4);
    if ( v20[7] >= 8uLL )
      v22 = (char *)v20[4];
    v23 = v20[6];
    if ( v23 != qword_180259818 )
      goto LABEL_39;
    if ( v23 )
    {
      v24 = v22 - (char *)v21;
      while ( 1 )
      {
        v25 = *(_WORD *)((char *)v21 + v24);
        if ( v25 != *(_WORD *)v21 )
          break;
        v21 = (__int64 *)((char *)v21 + 2);
        if ( !--v23 )
          goto LABEL_37;
      }
      v26 = v25 < *(_WORD *)v21 ? -1 : 1;
    }
    else
    {
LABEL_37:
      v26 = 0;
    }
    if ( v26 )
    {
LABEL_39:
      v27 = (volatile signed __int32 *)(v20[8] + 76LL);
      v42 = v27;
      while ( _interlockedbittestandset(v27, 0) )
        v27 = v42;
      v28 = sub_18008B530(v20[8], &v39);
      sub_18008BE00(a1, a2, v28);
      v29 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        }
      }
      *v42 = 0;
    }
    result = v20[2];
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = v20[1]; !*(_BYTE *)(result + 25) && v20 == *(_QWORD **)(result + 16); result = *(_QWORD *)(result + 8) )
        v20 = (_QWORD *)result;
      v20 = (_QWORD *)result;
    }
    else
    {
      v20 = (_QWORD *)v20[2];
      v30 = *(__int64 **)result;
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          v20 = v30;
          result = *v30;
          v30 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), 1u);
  if ( v14 )
  {
    v31 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    v32 = v31 == 1;
    result = (unsigned int)(v31 - 1);
    if ( v32 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
