/*
 * XREFs of ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x18002C840
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXXZ @ 0x18002C69C (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$uniqu.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

CEndpointVolumeStateManager *__fastcall CEndpointVolumeStateManager::`vector deleting destructor'(
        CEndpointVolumeStateManager *this,
        char a2)
{
  __int64 v4; // rcx
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx

  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (char *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = (char *)*((_QWORD *)v5 - 1);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v6);
        JUMPOUT(0x18002C917LL);
      }
      v5 = v7;
    }
    operator delete(v5, v6);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::clear((__int64)this + 64);
  operator delete(*((void **)this + 8), (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
