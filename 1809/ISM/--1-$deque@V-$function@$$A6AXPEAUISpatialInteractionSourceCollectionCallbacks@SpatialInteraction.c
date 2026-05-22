/*
 * XREFs of ??1?$deque@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@V?$allocator@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@2@@std@@QEAA@XZ @ 0x1800B67A0
 * Callers:
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800B636C (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>>::~deque<std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rdi
  void *v8; // rcx
  char *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  char *v11; // r8
  char *v12; // rcx

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(a1 + 32) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + i)));
    v5 = *(_QWORD *)(v4 + 56);
    if ( v5 )
    {
      LOBYTE(a2) = v5 != v4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 16);
  while ( v7 )
  {
    --v7;
    v8 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v7);
    if ( v8 )
      operator delete(v8, (const struct std::nothrow_t *)0x40);
  }
  v9 = *(char **)(a1 + 8);
  if ( v9 )
  {
    v10 = (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16));
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      v11 = (char *)*((_QWORD *)v9 - 1);
      v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
      v12 = (char *)(v9 - v11);
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x1800B688DLL);
      }
      v9 = v11;
    }
    operator delete(v9, v10);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  operator delete(*(void **)a1, (const struct std::nothrow_t *)0x10);
  *(_QWORD *)a1 = 0LL;
}
