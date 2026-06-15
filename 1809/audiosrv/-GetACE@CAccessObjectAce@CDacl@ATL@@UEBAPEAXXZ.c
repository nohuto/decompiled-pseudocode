/*
 * XREFs of ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x1800D2430
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char *__fastcall ATL::CDacl::CAccessObjectAce::GetACE(ATL::CDacl::CAccessObjectAce *this)
{
  char *v1; // rbx
  size_t v3; // rsi
  char *v4; // rax
  char *v5; // rsi
  int v6; // eax
  __int128 *v7; // rax
  int v8; // ecx
  __int128 v9; // xmm0
  __int128 *v10; // rax
  __int128 v11; // xmm0
  DWORD LengthSid; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(*(_QWORD *)this + 16LL))(this);
    v4 = (char *)malloc(v3);
    v1 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v4, 0, v3);
    *((_WORD *)v1 + 1) = v3;
    v1[1] = *((_BYTE *)this + 132);
    *v1 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(*(_QWORD *)this + 24LL))(this);
    v5 = v1 + 44;
    v6 = *((_DWORD *)this + 32);
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 1) = v6;
    v7 = (__int128 *)*((_QWORD *)this + 19);
    if ( v7 )
    {
      v9 = *v7;
      *((_DWORD *)v1 + 2) = 1;
      v8 = 3;
      *(_OWORD *)(v1 + 12) = v9;
    }
    else
    {
      v5 = v1 + 28;
      v8 = 2;
    }
    v10 = (__int128 *)*((_QWORD *)this + 20);
    if ( v10 )
    {
      v11 = *v10;
      if ( *((_QWORD *)this + 19) )
        *(_OWORD *)(v1 + 28) = v11;
      else
        *(_OWORD *)(v1 + 12) = v11;
      *((_DWORD *)v1 + 2) = v8;
    }
    else
    {
      v5 -= 16;
    }
    LengthSid = GetLengthSid((char *)this + 16);
    v14 = LengthSid;
    v15 = v5 - v1;
    if ( LengthSid )
    {
      if ( !v5 )
        goto LABEL_15;
      if ( this == (ATL::CDacl::CAccessObjectAce *)-16LL || v15 < LengthSid )
      {
        memset_0(v5, 0, v5 - v1);
        if ( this != (ATL::CDacl::CAccessObjectAce *)-16LL )
        {
          if ( v15 >= v14 )
            goto LABEL_25;
          *(_DWORD *)_o__errno(v13) = 34;
LABEL_24:
          invalid_parameter_noinfo();
LABEL_25:
          ATL::AtlThrowImpl(-2147024809);
        }
LABEL_15:
        *(_DWORD *)_o__errno(v13) = 22;
        goto LABEL_24;
      }
      memcpy_0(v5, (char *)this + 16, LengthSid);
    }
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
