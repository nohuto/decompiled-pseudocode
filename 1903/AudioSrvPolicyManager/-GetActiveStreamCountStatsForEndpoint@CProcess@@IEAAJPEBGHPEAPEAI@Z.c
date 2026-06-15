/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180011F8C
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180012E8C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000D39C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001518C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180017B74 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18003508E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::GetActiveStreamCountStatsForEndpoint(
        CProcess *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned int **a4)
{
  unsigned int v5; // edi
  char *v6; // rsi
  unsigned __int16 *v7; // rdx
  signed int v8; // ecx
  char v9; // bp
  unsigned __int16 **v10; // r10
  int v11; // r9d
  int v12; // r8d
  unsigned int *v13; // rbx
  _QWORD *v14; // rdx
  HANDLE ProcessHeap; // rax
  void *v16; // rax
  void *v17; // rbx
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // r8
  _QWORD *v24; // rax
  volatile signed __int32 *v25; // rdx
  void *v27; // [rsp+20h] [rbp-58h]
  _QWORD v28[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v29; // [rsp+40h] [rbp-38h]
  volatile signed __int32 *v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+90h] [rbp+18h]

  v28[1] = -2LL;
  v5 = 0;
  v6 = (char *)this + (a3 != 0 ? 0x18 : 0) + 288;
  v28[2] = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v28);
  v8 = 0;
  v9 = 1;
  if ( *((int *)v6 + 4) <= 0 )
  {
LABEL_9:
    v8 = -1;
  }
  else
  {
    v10 = *(unsigned __int16 ***)v6;
    while ( 1 )
    {
      if ( !v28[0] )
        ATL::AtlThrowImpl(-2147467259);
      v7 = *v10;
      do
      {
        v11 = *(unsigned __int16 *)((char *)v7 + v28[0] - (_QWORD)*v10);
        v12 = *v7 - v11;
        if ( v12 )
          break;
        ++v7;
      }
      while ( v11 );
      if ( !v12 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= *((_DWORD *)v6 + 4) )
        goto LABEL_9;
    }
  }
  if ( v8 == -1 )
  {
    v13 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)v6 + 4) )
    {
      ATL::_AtlRaiseException(v8, (unsigned int)v7);
      JUMPOUT(0x1800121C6LL);
    }
    v13 = *(unsigned int **)(*((_QWORD *)v6 + 1) + 8LL * v8);
  }
  v14 = (_QWORD *)(v28[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 8LL))(*v14);
  if ( v13 )
    goto LABEL_33;
  ProcessHeap = GetProcessHeap();
  v16 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
  v17 = v16;
  v27 = v16;
  if ( v16 )
  {
    memset_0(v16, 0, 0x54uLL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
    v19 = _o__recalloc(*(_QWORD *)v6, *((_DWORD *)v6 + 4) + 1, 8LL);
    if ( v19 )
    {
      *(_QWORD *)v6 = v19;
      v20 = _o__recalloc(*((_QWORD *)v6 + 1), *((_DWORD *)v6 + 4) + 1, 8LL);
      v21 = v20;
      if ( v20 )
      {
        *((_QWORD *)v6 + 1) = v20;
        v31 = *((_DWORD *)v6 + 4);
        v22 = v31;
        v23 = (_QWORD *)(*(_QWORD *)v6 + 8LL * v31);
        v29 = v23;
        if ( v23 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v23,
            (const void **)&v30);
          v21 = *((_QWORD *)v6 + 1);
        }
        v24 = (_QWORD *)(v21 + 8 * v22);
        v29 = v24;
        if ( v24 )
          *v24 = v17;
        ++*((_DWORD *)v6 + 4);
        v9 = 0;
      }
    }
    v25 = v30 - 6;
    if ( _InterlockedExchangeAdd(v30 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
    if ( v9 )
    {
      v5 = -2147024882;
      v18 = v27;
      goto LABEL_20;
    }
    v13 = (unsigned int *)v27;
    operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_33:
    *a4 = v13;
    return v5;
  }
  v5 = -2147024882;
  v18 = 0LL;
LABEL_20:
  operator delete(v18, (const struct std::nothrow_t *)4);
  return v5;
}
