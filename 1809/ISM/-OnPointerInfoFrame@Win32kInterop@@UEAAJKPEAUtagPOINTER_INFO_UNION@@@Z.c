/*
 * XREFs of ?OnPointerInfoFrame@Win32kInterop@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180084530
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::OnPointerInfoFrame(
        Win32kInterop *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rdx
  __int64 v9; // r8
  _OWORD *v10; // rcx
  __int128 v11; // xmm0
  const struct std::nothrow_t *v12; // rdx

  v6 = 224 * (a2 - 1) + 248;
  v7 = operator new[](v6);
  memset_0(v7, 0, (unsigned int)v6);
  *v7 = 0;
  v7[5] = a2;
  *((_QWORD *)v7 + 1) = *((_QWORD *)this + 241);
  if ( a2 )
  {
    v8 = v7 + 54;
    v9 = a2;
    do
    {
      v10 = v8 - 48;
      *v10 = *(_OWORD *)a3;
      v10[1] = *((_OWORD *)a3 + 1);
      v10[2] = *((_OWORD *)a3 + 2);
      v10[3] = *((_OWORD *)a3 + 3);
      v10[4] = *((_OWORD *)a3 + 4);
      v10[5] = *((_OWORD *)a3 + 5);
      v10[6] = *((_OWORD *)a3 + 6);
      v10[7] = *((_OWORD *)a3 + 7);
      v11 = *((_OWORD *)a3 + 8);
      a3 = (struct tagPOINTER_INFO_UNION *)((char *)a3 + 144);
      v10[8] = v11;
      *v8 = *((_DWORD *)this + 481);
      v8 += 56;
      --v9;
    }
    while ( v9 );
  }
  ((void (__fastcall *)(_DWORD *, _QWORD))Win32kInterop::s_pfnMTCallback)(v7, 0LL);
  operator delete(v7, v12);
  return 0LL;
}
