/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180070B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800712E4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        LampArrayRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rcx
  struct LampArrayEndpoint *v10; // rbp
  _DWORD *v11; // rax
  struct LampArrayDevice **v12; // rsi
  struct LampArrayDevice **v13; // rbx
  LampArrayRawInputProvider *v14; // r14
  int active; // eax
  unsigned int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int32 v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0;
  if ( a3 )
  {
    v19 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v19);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 269LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v4);
      v7 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      return v5;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int32 *))(*(_QWORD *)v19 + 32LL))(v19, &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 271LL;
      goto LABEL_6;
    }
    v9 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  _InterlockedExchange((volatile __int32 *)this + 8, v18);
  v10 = 0LL;
  v11 = (_DWORD *)*((_QWORD *)this + 8);
  if ( v11 != (_DWORD *)((char *)this + 64) )
  {
    while ( v11[6] != v18 )
    {
      v11 = *(_DWORD **)v11;
      if ( v11 == (_DWORD *)((char *)this + 64) )
        goto LABEL_16;
    }
    v10 = (struct LampArrayEndpoint *)(v11 + 4);
  }
LABEL_16:
  v12 = (struct LampArrayDevice **)((char *)this + 40);
  v13 = (struct LampArrayDevice **)*((_QWORD *)this + 5);
  if ( v13 == (struct LampArrayDevice **)((char *)this + 40) )
    return 0LL;
  v14 = (LampArrayRawInputProvider *)((char *)this - 8);
  while ( 1 )
  {
    active = LampArrayRawInputProvider::SetActiveViewClient(v14, v13[2], v10);
    v16 = active;
    if ( active < 0 )
      break;
    v13 = (struct LampArrayDevice **)*v13;
    if ( v13 == v12 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x120,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)active);
  return v16;
}
