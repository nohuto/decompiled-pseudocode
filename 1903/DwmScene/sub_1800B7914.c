/*
 * XREFs of sub_1800B7914 @ 0x1800B7914
 * Callers:
 *     sub_180104BBC @ 0x180104BBC (sub_180104BBC.c)
 *     sub_18010511C @ 0x18010511C (sub_18010511C.c)
 *     sub_1801056E0 @ 0x1801056E0 (sub_1801056E0.c)
 * Callees:
 *     sub_1800B77C4 @ 0x1800B77C4 (sub_1800B77C4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B7914(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  char v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  _QWORD *v14; // rax
  int i; // edx
  __int64 v16; // rcx
  char v18; // [rsp+20h] [rbp-58h]
  unsigned int v19; // [rsp+24h] [rbp-54h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v19 = 0;
  v7 = 0;
  v18 = 0;
  v8 = a1;
  v9 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  LOBYTE(a2) = 1;
  if ( !(unsigned __int8)std::istream::_Ipfx(v5, a2) )
    goto LABEL_20;
  v4[2] = 0LL;
  v10 = v4;
  if ( v4[3] >= 0x10uLL )
    v10 = (_BYTE *)*v4;
  try
  {
    *v10 = 0;
    for ( i = std::streambuf::sgetc(*(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72));
          ;
          i = std::streambuf::snextc(*(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72)) )
    {
      if ( i == -1 )
      {
        v6 = 1;
        goto LABEL_12;
      }
      if ( i == a3 )
      {
        v7 = 1;
        v18 = 1;
        std::streambuf::sbumpc(*(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72));
        goto LABEL_27;
      }
      v12 = v4[2];
      if ( v12 >= 0x7FFFFFFFFFFFFFFFLL )
        break;
      v13 = v4[3];
      if ( v12 >= v13 )
      {
        sub_1800B77C4(v4, 1uLL, 0LL, i);
      }
      else
      {
        v4[2] = v12 + 1;
        v14 = v4;
        if ( v13 >= 0x10 )
          v14 = (_QWORD *)*v4;
        *((_BYTE *)v14 + v12) = i;
        *((_BYTE *)v14 + v12 + 1) = 0;
      }
      v7 = 1;
      v18 = 1;
    }
    v6 = 2;
LABEL_12:
    v19 = v6;
  }
  catch ( ... )
  {
    LOBYTE(v11) = 1;
    std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v11);
    v6 = v19;
    v7 = v18;
    v8 = a1;
    v5 = a1;
  }
LABEL_27:
  if ( !v7 )
LABEL_20:
    v6 |= 2u;
  std::ios::setstate(v5 + *(int *)(*(_QWORD *)v5 + 4LL), v6, 0LL);
  v16 = *(_QWORD *)(*(int *)(*(_QWORD *)v8 + 4LL) + v8 + 72);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v5;
}
