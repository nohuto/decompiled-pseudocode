/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180011E50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180040450 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r13
  struct _RTL_CRITICAL_SECTION *v7; // r12
  unsigned int v8; // esi
  _QWORD *v9; // r14
  __int64 *v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 *v14; // rsi
  char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // [rsp+28h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+10h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  try
  {
    v8 = 0;
    v9 = (_QWORD *)((char *)this + 24 * *((int *)a2 + 2));
    v10 = (__int64 *)v9[11];
    v11 = (__int64 *)v9[12];
    if ( (__int64 *)v9[13] == v11 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v9 + 11, v9[11], a3);
    }
    else
    {
      v12 = *(_QWORD *)a3;
      if ( v10 == v11 )
      {
        *v11 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v9[12] += 8LL;
      }
      else
      {
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v14 = v11 - 1;
        *v11 = 0LL;
        *v11 = *(v11 - 1);
        *(v11 - 1) = 0LL;
        v9[12] += 8LL;
        if ( v11 - 1 != v10 )
        {
          v15 = (char *)(v11 - 2);
          do
          {
            --v11;
            v16 = 0LL;
            if ( &v19 != v15 )
            {
              v16 = *(_QWORD *)v15;
              *(_QWORD *)v15 = 0LL;
            }
            v17 = *v11;
            *v11 = v16;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            --v14;
            v15 -= 8;
          }
          while ( v14 != v10 );
        }
        v18 = *v10;
        *v10 = v12;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v8 = 0;
      }
    }
  }
  catch ( std::bad_alloc )
  {
    v8 = -2147024882;
    v7 = v20;
    v6 = v20;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_7c1e90e9a9dc33e1c6e4e37efc6dae83_Traceguids, v8);
  }
  if ( v6 )
    LeaveCriticalSection(v7);
  return v8;
}
