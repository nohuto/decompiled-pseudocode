/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@IEAAXXZ @ 0x1800B50FC
 * Callers:
 *     ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800AEB00 (-OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800B636C (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ??1?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1800B6A14 (--1-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialI.c)
 * Callees:
 *     ?pop_back@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800B5690 (-pop_back@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@S.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  char *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  char *v6; // r8
  char *v7; // rcx

  while ( a1[4] )
    std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::pop_back(a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(a1[1] + 8 * v2);
    if ( v3 )
      operator delete(v3, (const struct std::nothrow_t *)0x10);
  }
  v4 = (char *)a1[1];
  if ( v4 )
  {
    v5 = (const struct std::nothrow_t *)(8LL * a1[2]);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v6 = (char *)*((_QWORD *)v4 - 1);
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v5);
        JUMPOUT(0x1800B5196LL);
      }
      v4 = v6;
    }
    operator delete(v4, v5);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
