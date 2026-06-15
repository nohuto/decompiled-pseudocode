/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18003F970
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180030AB0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
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
  unsigned __int64 *v9; // r14
  __int64 *v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rbx
  __int64 *v15; // rsi
  char *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  char v20; // [rsp+28h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+78h] [rbp+10h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  try
  {
    v8 = 0;
    v9 = (unsigned __int64 *)((char *)this + 24 * *((int *)a2 + 2));
    v10 = (__int64 *)v9[11];
    v11 = (__int64 *)v9[12];
    if ( (__int64 *)v9[13] == v11 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
        v9 + 11,
        (_QWORD *)v9[11],
        a3);
    }
    else if ( v10 == v11 )
    {
      v12 = *(_QWORD *)a3;
      *v11 = *(_QWORD *)a3;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v9[12] += 8LL;
    }
    else
    {
      v14 = *(_QWORD *)a3;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = v11 - 1;
      *v11 = 0LL;
      *v11 = *(v11 - 1);
      *(v11 - 1) = 0LL;
      v9[12] += 8LL;
      if ( v11 - 1 != v10 )
      {
        v16 = (char *)(v11 - 2);
        do
        {
          --v11;
          v17 = 0LL;
          if ( &v20 != v16 )
          {
            v17 = *(_QWORD *)v16;
            *(_QWORD *)v16 = 0LL;
          }
          v18 = *v11;
          *v11 = v17;
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          --v15;
          v16 -= 8;
        }
        while ( v15 != v10 );
      }
      v19 = *v10;
      *v10 = v14;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v8 = 0;
    }
  }
  catch ( std::bad_alloc )
  {
    v8 = -2147024882;
    v7 = v21;
    v6 = v21;
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
