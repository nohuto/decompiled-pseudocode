/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D5650
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$4 @ 0x18007249B (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$4.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$4 @ 0x1800D5A34 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA1A0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  struct std::nothrow_t *v5; // rdx
  struct std::nothrow_t *v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *a1;
    }
    v5 = (struct std::nothrow_t *)(((char *)a1[2] - (char *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    v6 = v5;
    v7 = v2;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, (unsigned __int64 *)&v6);
      v5 = v6;
      v2 = (__int64 *)v7;
    }
    operator delete(v2, v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
