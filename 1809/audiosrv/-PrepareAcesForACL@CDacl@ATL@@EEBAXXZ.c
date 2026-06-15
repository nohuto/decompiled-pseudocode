/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18000EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x18000F080 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x1800CEB94 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // r13
  ATL::CDacl *v2; // rax
  unsigned __int64 v3; // r15
  const struct ATL::CDacl::CAccessAce *v4; // rbx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r14
  char *v7; // rsi
  const struct ATL::CDacl::CAccessAce *v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r12
  const struct ATL::CDacl::CAccessAce *v11; // rcx
  char *v12; // rsi
  unsigned __int128 v13; // rax
  unsigned __int64 i; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  char v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = this;
  v3 = 1LL;
  v4 = 0LL;
  if ( v1 <= 4 )
  {
LABEL_2:
    while ( 1 )
    {
      v5 = v3 - 1;
      if ( v3 - 1 < v1 )
        break;
LABEL_20:
      v13 = v3 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      v3 /= 3uLL;
      if ( !(*((_QWORD *)&v13 + 1) >> 1) )
      {
        if ( v4 )
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v4)(v4, 1LL);
        return;
      }
      v2 = this;
    }
    v6 = (_QWORD *)((char *)v2 + 24);
    while ( 1 )
    {
      if ( v5 >= v6[1] )
        goto LABEL_35;
      v7 = (char *)(*v6 + 8 * v5);
      v8 = *(const struct ATL::CDacl::CAccessAce **)v7;
      if ( v4 != *(const struct ATL::CDacl::CAccessAce **)v7 )
        break;
      if ( &v18 != v7 )
        goto LABEL_9;
LABEL_10:
      v9 = v5;
      if ( v5 >= v3 )
      {
        while ( 1 )
        {
          v10 = v9 - v3;
          if ( v9 - v3 >= v6[1] )
            break;
          if ( (unsigned int)ATL::CDacl::CAccessAce::Order(*(const struct ATL::CDacl::CAccessAce **)(*v6 + 8 * v10), v4) == -1 )
          {
            v15 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v6, v9 - v3);
            v16 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v6, v9);
            ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v16, v15);
            v9 -= v3;
            if ( v10 >= v3 )
              continue;
          }
          goto LABEL_13;
        }
LABEL_35:
        ATL::AtlThrowImpl(-2147024809);
      }
LABEL_13:
      if ( v9 >= v6[1] )
        goto LABEL_35;
      v11 = *(const struct ATL::CDacl::CAccessAce **)(*v6 + 8 * v9);
      v12 = (char *)(*v6 + 8 * v9);
      if ( v11 == v4 )
      {
        if ( v12 == &v18 )
          goto LABEL_19;
      }
      else
      {
        if ( v11 )
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v11)(v11, 1LL);
        *(_QWORD *)v12 = v4;
      }
      v4 = 0LL;
LABEL_19:
      if ( ++v5 >= v1 )
        goto LABEL_20;
    }
    if ( v4 )
    {
      (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v4)(v4, 1LL);
      v8 = *(const struct ATL::CDacl::CAccessAce **)v7;
    }
    v4 = v8;
LABEL_9:
    *(_QWORD *)v7 = 0LL;
    goto LABEL_10;
  }
  for ( i = 4LL; i < v1; i += 2 * i + 1 )
    v3 = i;
  if ( v3 )
  {
    v2 = this;
    goto LABEL_2;
  }
}
