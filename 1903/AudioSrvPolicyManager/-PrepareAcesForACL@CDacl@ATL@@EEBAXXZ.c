/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180030C20
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  bool j; // cf
  unsigned __int64 v11; // r15
  _BYTE *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // r14
  void (__fastcall ****v15)(_QWORD, __int64); // rsi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  __int64 *v18; // rsi
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v3 = 1LL;
  v20 = 0LL;
  v5 = 4LL;
  if ( v1 <= 4 )
    goto LABEL_4;
  do
  {
    v3 = v5;
    v5 += 2 * v5 + 1;
  }
  while ( v5 < v1 );
  if ( v3 )
  {
LABEL_4:
    while ( 1 )
    {
      for ( i = v3 - 1; i < v1; ++i )
      {
        if ( i >= *((_QWORD *)this + 4) )
          goto LABEL_51;
        v7 = (__int64 *)(*((_QWORD *)this + 3) + 8 * i);
        v8 = *v7;
        if ( v2 != *v7 )
        {
          if ( v2 )
          {
            (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
            v8 = *v7;
          }
          v2 = v8;
          v20 = v8;
LABEL_12:
          *v7 = 0LL;
          goto LABEL_13;
        }
        if ( &v20 != v7 )
          goto LABEL_12;
LABEL_13:
        v9 = i;
        for ( j = i < v3; !j; j = v11 < v3 )
        {
          v11 = v9 - v3;
          if ( v9 - v3 >= *((_QWORD *)this + 4) )
            goto LABEL_51;
          _mm_lfence();
          v2 = v20;
          v12 = *(_BYTE **)(*((_QWORD *)this + 3) + 8 * v11);
          if ( (v12[132] & 0x10) == 0 || (*(_BYTE *)(v20 + 132) & 0x10) != 0 )
          {
            if ( (v12[132] & 0x10) == 0 && (*(_BYTE *)(v20 + 132) & 0x10) != 0 )
              break;
            if ( v12[144] )
            {
              if ( !*(_BYTE *)(v20 + 144) )
                goto LABEL_26;
            }
            else if ( *(_BYTE *)(v20 + 144) )
            {
              break;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 32LL))(v12)
              || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 32LL))(v12) )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
              break;
            }
          }
LABEL_26:
          if ( v11 >= *((_QWORD *)this + 4) )
            goto LABEL_51;
          v13 = *((_QWORD *)this + 3);
          v14 = (_QWORD *)(v13 + 8 * v11);
          if ( v9 >= *((_QWORD *)this + 4) )
            goto LABEL_51;
          v15 = (void (__fastcall ****)(_QWORD, __int64))(v13 + 8 * v9);
          v16 = *v15;
          if ( *v15 == (void (__fastcall ***)(_QWORD, __int64))*v14 )
          {
            if ( v15 != v14 )
              *v14 = 0LL;
          }
          else
          {
            if ( v16 )
              (**v16)(v16, 1LL);
            *v15 = 0LL;
            v17 = (void (__fastcall ***)(_QWORD, __int64))*v14;
            *v14 = 0LL;
            *v15 = v17;
          }
          v9 = v11;
        }
        if ( v9 >= *((_QWORD *)this + 4) )
LABEL_51:
          ATL::AtlThrowImpl(-2147024809);
        v18 = (__int64 *)(*((_QWORD *)this + 3) + 8 * v9);
        v19 = (void (__fastcall ***)(_QWORD, __int64))*v18;
        if ( *v18 == v2 )
        {
          if ( v18 != &v20 )
            goto LABEL_44;
        }
        else
        {
          if ( v19 )
            (**v19)(v19, 1LL);
          *v18 = v2;
LABEL_44:
          v2 = 0LL;
          v20 = 0LL;
        }
      }
      v3 /= 3uLL;
      if ( !v3 )
      {
        if ( v2 )
          (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
        return;
      }
    }
  }
}
