/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800F0AE4
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800F0CC4 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003190C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x1800ED508 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const unsigned __int16 *v6; // r12
  void **v7; // r15
  unsigned __int64 v8; // rsi
  void *v9; // rcx
  unsigned __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  CResourcePriorityTracker *v15; // rax
  CResourcePriorityTracker *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = *(const unsigned __int16 **)a2;
  v7 = (void **)((char *)this + 48);
  v8 = -1LL;
  v9 = 0LL;
  do
    ++v8;
  while ( v6[v8] );
  *v7 = 0LL;
  v10 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v11 = -2147024362;
    goto LABEL_21;
  }
  if ( is_mul_ok(v10, 2uLL) )
  {
    v11 = CTCoAllocPolicy::Alloc(0LL, 0, 2 * v10, v7);
    if ( v11 < 0 )
    {
LABEL_21:
      v13 = 213LL;
      goto LABEL_22;
    }
    StringCchCopyNExW((char *)*v7, v8 + 1, v6, v8);
  }
  else
  {
    v11 = -2147024362;
  }
  if ( v11 < 0 )
    goto LABEL_21;
  v12 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
  v11 = CTCoAllocPolicy::Alloc(v9, 1, v12 + 18, (void **)this + 5);
  if ( v11 >= 0 )
  {
    memcpy_0(*((void **)this + 5), *((const void **)a2 + 2), v12 + 18);
    v14 = *((_QWORD *)a2 + 7);
    if ( v14
      && (v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 8LL))(v14, (char *)this + 64), v11 < 0) )
    {
      v13 = 221LL;
    }
    else
    {
      *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 2);
      *((_QWORD *)this + 2) = *((_QWORD *)a2 + 3);
      *((_DWORD *)this + 15) = *((_DWORD *)a2 + 2);
      *((_QWORD *)this + 17) = 0LL;
      *((_DWORD *)this + 36) = 0;
      *((_BYTE *)this + 56) = *((_BYTE *)a2 + 49);
      *((_BYTE *)this + 57) = *((_BYTE *)a2 + 50);
      v15 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v15 )
        v16 = CResourcePriorityTracker::CResourcePriorityTracker(v15, a3);
      else
        v16 = 0LL;
      *((_QWORD *)this + 9) = v16;
      if ( v16 )
        return 0LL;
      v11 = -2147024882;
      v13 = 233LL;
    }
  }
  else
  {
    v13 = 216LL;
  }
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
