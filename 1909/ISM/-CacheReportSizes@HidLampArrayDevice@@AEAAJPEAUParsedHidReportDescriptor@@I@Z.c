/*
 * XREFs of ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B31AC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3CE8 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::CacheReportSizes(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  size_t v7; // rax
  void *v8; // rax
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  __int64 v11; // rbx
  _DWORD *v13; // r8
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 158) = a3;
  v6 = a3;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (void *)*((_QWORD *)this + 78);
  v11 = 0LL;
  *((_QWORD *)this + 78) = v8;
  if ( v10 )
  {
    operator delete(v10, v9);
    v8 = (void *)*((_QWORD *)this + 78);
  }
  if ( v8 )
  {
    memset_0(v8, 0, 8LL * *((unsigned int *)this + 158));
    if ( a3 )
    {
      v13 = (_DWORD *)((char *)a2 + 8);
      do
      {
        *(_BYTE *)(v11 + *((_QWORD *)this + 78)) = *((_BYTE *)v13 - 4);
        v11 += 8LL;
        v14 = *v13;
        v13 += 6;
        *(_DWORD *)(*((_QWORD *)this + 78) + v11 - 4) = (unsigned int)(*(_DWORD *)(*((_QWORD *)v13 - 2)
                                                                                 + 72LL * (unsigned int)(v14 - 1)
                                                                                 + 4)
                                                                     + *(_DWORD *)(*((_QWORD *)v13 - 2)
                                                                                 + 72LL * (unsigned int)(v14 - 1))
                                                                     + 7) >> 3;
        --v6;
      }
      while ( v6 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x269,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
