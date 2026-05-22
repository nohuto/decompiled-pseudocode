/*
 * XREFs of ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800CDA00
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800CD630 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CDB70 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CDD5C (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800CDE30 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnGestureUpdate(__int64 a1, __int16 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
    return 0LL;
  if ( (a2 & 0x10) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 152);
    v13[0] = 24;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 88LL))(v3, 5LL, v13);
    v6 = v4;
    if ( v4 >= 0 )
    {
      LOBYTE(v5) = 1;
      *(_DWORD *)(a1 + 32) = EdgyProcessorTarget::OnSwipe(a1, v5, (unsigned int)v13[3]);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v4);
    }
    if ( v6 < 0 )
    {
      v7 = 629LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  else if ( (a2 & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    v13[0] = 24;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v9 + 88LL))(v9, 5LL, v13);
    v6 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = EdgyProcessorTarget::OnSwipe(a1, 0LL, (unsigned int)v13[4]);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v6 < 0 )
    {
      v7 = 633LL;
      goto LABEL_8;
    }
  }
  else if ( (a2 & 0x100) != 0 )
  {
    v6 = EdgyProcessorTarget::OnFlick((EdgyProcessorTarget *)a1);
    if ( v6 < 0 )
    {
      v7 = 637LL;
      goto LABEL_8;
    }
  }
  if ( *(_DWORD *)(a1 + 32) != 2 )
    return 0LL;
  v11 = EdgyProcessorTarget::OnEdgeGestureDetected((EdgyProcessorTarget *)a1);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x286,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
