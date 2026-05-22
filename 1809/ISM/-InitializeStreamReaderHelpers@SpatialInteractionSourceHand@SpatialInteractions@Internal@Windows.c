/*
 * XREFs of ?InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800BDB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::InitializeStreamReaderHelpers(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  void *v12; // rax
  const struct std::nothrow_t *v13; // rdx
  void *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 16);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, void *))(MEMORY[0] + 56LL))(0LL, &SPATIALFIELD_StateStream_TimeStamps);
    if ( !v3 )
    {
      v4 = -2147023728;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)v4);
      return v4;
    }
    if ( *(_DWORD *)(v3 + 20) != 16 )
    {
      v4 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
        (const char *)0x8007000DLL);
      goto LABEL_6;
    }
    *((_QWORD *)this + 20) = v3;
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *))(MEMORY[0] + 56LL))(0LL, &SPATIALFIELD_Hand_Pressed);
    if ( !v7 )
    {
      v8 = -2147023728;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)v8);
      return v8;
    }
    if ( *(_DWORD *)(v7 + 20) != 1 )
    {
      v8 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
        (const char *)0x8007000DLL);
      goto LABEL_11;
    }
    *((_QWORD *)this + 21) = v7;
    v9 = (*(__int64 (__fastcall **)(_QWORD, void *))(MEMORY[0] + 56LL))(0LL, &SPATIALFIELD_Hand_Bloom);
    if ( !v9 )
    {
      v10 = -2147023728;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)v10);
      return v10;
    }
    if ( *(_DWORD *)(v9 + 20) != 1 )
    {
      v10 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
        (const char *)0x8007000DLL);
      goto LABEL_16;
    }
    *((_QWORD *)this + 22) = v9;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(MEMORY[0] + 32LL))(0LL);
    *((_QWORD *)this + 23) = v11;
    v12 = operator new[](v11);
    v14 = (void *)*((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v12;
    if ( v14 )
      operator delete(v14, v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x93,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           v5);
  }
  return result;
}
