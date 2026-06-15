/*
 * XREFs of AudioDGGetStreamVpoDescription @ 0x14003A780
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x140015750 (--_U@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140017D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioDGGetStreamVpoDescription(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4,
        unsigned int *a5,
        _QWORD *a6)
{
  int v8; // esi
  size_t v9; // rbx
  void *v10; // rax
  void *v11; // rdi
  __int128 v12; // xmm0
  unsigned int v13; // ecx
  unsigned int v15; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+34h] [rbp-64h] BYREF
  void *Src; // [rsp+38h] [rbp-60h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

  v8 = (*(__int64 (__fastcall **)(__int64, int *, __int128 *, unsigned int *, void **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v16,
         &v18,
         &v15,
         &Src);
  if ( v8 >= 0 )
  {
    v9 = 16LL * v15;
    if ( v9 <= 0xC800 )
    {
      v10 = operator new[](16LL * v15);
      v11 = v10;
      if ( v10 )
      {
        memcpy_0(v10, Src, v9);
        v12 = v18;
        *a3 = v16;
        v13 = v15;
        *a4 = v12;
        *a5 = v13;
        *a6 = v11;
      }
    }
    CoTaskMemFree(Src);
  }
  return (unsigned int)v8;
}
