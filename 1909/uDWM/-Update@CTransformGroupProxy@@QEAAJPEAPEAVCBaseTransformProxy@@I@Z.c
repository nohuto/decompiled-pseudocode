/*
 * XREFs of ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x18003B280
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18003ADD0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformGroupProxy::Update(
        CTransformGroupProxy *this,
        struct CBaseTransformProxy **a2,
        unsigned int a3)
{
  __int64 *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v8 = 0LL;
  v9 = 0;
  if ( a3 > 3 )
    return 2147942487LL;
  if ( a3 )
  {
    v4 = &v8;
    v5 = a3;
    do
    {
      v6 = (__int64)*a2++;
      *(_DWORD *)v4 = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
      v4 = (__int64 *)((char *)v4 + 4);
      --v5;
    }
    while ( v5 );
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                      + 1040LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           &v8,
           a3);
}
