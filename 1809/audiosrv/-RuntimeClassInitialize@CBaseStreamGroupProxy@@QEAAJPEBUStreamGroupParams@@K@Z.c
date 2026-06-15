/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800E5584
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800E571C (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004FCC8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004FD68 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x1800E1E54 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const unsigned __int16 *v6; // r8
  unsigned __int64 v7; // r9
  void *v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v12; // rbp
  __int64 v13; // rcx
  CResourcePriorityTracker *v14; // rax
  CResourcePriorityTracker *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(const unsigned __int16 **)a2;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  v9 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, v6, v7, v16, (void **)this + 6);
  if ( v9 < 0 )
  {
    v10 = 211LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
  v9 = CTCoAllocPolicy::Alloc(v8, 1, v12 + 18, (void **)this + 5);
  if ( v9 < 0 )
  {
    v10 = 214LL;
    goto LABEL_5;
  }
  memcpy_0(*((void **)this + 5), *((const void **)a2 + 2), v12 + 18);
  v13 = *((_QWORD *)a2 + 7);
  if ( v13 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 8LL))(v13, (char *)this + 64);
    if ( v9 < 0 )
    {
      v10 = 219LL;
      goto LABEL_5;
    }
  }
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 2);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 49);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 50);
  v14 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
    v15 = CResourcePriorityTracker::CResourcePriorityTracker(v14, a3);
  else
    v15 = 0LL;
  *((_QWORD *)this + 9) = v15;
  if ( v15 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    231LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
