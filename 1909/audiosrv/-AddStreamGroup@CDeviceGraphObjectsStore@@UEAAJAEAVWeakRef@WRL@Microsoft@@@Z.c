/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180033090
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180033940 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800D5B70 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  __int64 v4; // rdx
  __int64 **v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  bool v10; // r14
  __int64 *i; // r14
  __int64 *v12; // r14
  __int64 *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // r14d
  char *v16; // rbx
  __int64 *v17; // rsi
  __int64 *v18; // rdi
  __int64 *v19; // rsi
  __int64 *v20; // rsi
  __int64 *v21; // rdi
  struct Microsoft::WRL::WeakRef *v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // r14d
  __int64 v26; // rcx
  int v27; // eax
  bool v28; // r15
  __int64 *v29; // r15
  __int64 *v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // r15
  __int64 *v36; // r13
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // [rsp+70h] [rbp+8h] BYREF
  struct Microsoft::WRL::WeakRef *v41; // [rsp+78h] [rbp+10h]
  __int64 **v42; // [rsp+80h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+88h] [rbp+20h]

  v41 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v43 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  EnterCriticalSection(v3);
  v5 = (__int64 **)((char *)this + 64);
  v42 = (__int64 **)((char *)this + 64);
  v6 = (__int64 *)*((_QWORD *)this + 9);
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( v7 != v6 )
  {
    do
    {
      v8 = 0LL;
      v40 = 0LL;
      v10 = 1;
      if ( *v7 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v7 + 24LL))(
               *v7,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v40);
        v8 = v40;
        if ( v9 >= 0 )
        {
          if ( v40 )
            v10 = 0;
        }
      }
      if ( v8 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v10 )
        break;
      ++v7;
    }
    while ( v7 != v6 );
    if ( v7 != v6 )
    {
      for ( i = v7 + 1; i != v6; ++i )
      {
        if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v8, i) )
        {
          v32 = 0LL;
          if ( &v40 != i )
          {
            v32 = *i;
            *i = 0LL;
          }
          v8 = *v7;
          *v7 = v32;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          ++v7;
        }
      }
    }
  }
  v12 = (__int64 *)*((_QWORD *)this + 9);
  if ( v7 != v12 )
  {
    v13 = v7;
    do
    {
      v14 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      ++v13;
    }
    while ( v13 != v12 );
    *((_QWORD *)this + 9) = v7;
  }
  v15 = 0;
  v16 = (char *)this + 88;
  do
  {
    v17 = (__int64 *)*((_QWORD *)v16 + 1);
    v18 = *(__int64 **)v16;
    if ( *(__int64 **)v16 != v17 )
    {
      do
      {
        v26 = 0LL;
        v40 = 0LL;
        v28 = 1;
        if ( *v18 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v18 + 24LL))(
                  *v18,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v40);
          v26 = v40;
          if ( v27 >= 0 )
          {
            if ( v40 )
              v28 = 0;
          }
        }
        if ( v26 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v28 )
          break;
        ++v18;
      }
      while ( v18 != v17 );
      v5 = v42;
      if ( v18 != v17 )
      {
        v29 = v18 + 1;
        if ( v18 + 1 != v17 )
        {
          do
          {
            if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v26, v29) )
            {
              v33 = 0LL;
              if ( &v40 != v29 )
              {
                v33 = *v29;
                *v29 = 0LL;
              }
              v26 = *v18;
              *v18 = v33;
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              ++v18;
            }
            ++v29;
          }
          while ( v29 != v17 );
          v5 = v42;
        }
      }
    }
    v19 = (__int64 *)*((_QWORD *)v16 + 1);
    if ( v18 != v19 )
    {
      v30 = v18;
      do
      {
        v31 = *v30;
        if ( *v30 )
        {
          *v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        ++v30;
      }
      while ( v30 != v19 );
      *((_QWORD *)v16 + 1) = v18;
      v5 = v42;
    }
    ++v15;
    v16 += 24;
  }
  while ( v15 < 4 );
  if ( v3 )
    LeaveCriticalSection(v3);
  try
  {
    v20 = *v5;
    v21 = v5[1];
    v22 = v41;
    if ( v5[2] == v21 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v5, *v5, v41);
LABEL_28:
      v24 = 0;
      goto LABEL_83;
    }
    if ( v20 == v21 )
    {
      v23 = *(_QWORD *)v41;
      *v21 = *(_QWORD *)v41;
      if ( v23 )
        (*(void (__fastcall **)(__int64, __int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v23 + 8LL))(
          v23,
          v4,
          v22);
      ++v5[1];
      goto LABEL_28;
    }
    v34 = *(_QWORD *)v41;
    if ( *(_QWORD *)v41 )
      (*(void (__fastcall **)(_QWORD, __int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v34 + 8LL))(
        *(_QWORD *)v41,
        v4,
        v41);
    v35 = v21 - 1;
    v24 = 0;
    *v21 = 0LL;
    *v21 = *(v21 - 1);
    *(v21 - 1) = 0LL;
    ++v5[1];
    if ( v21 - 1 != v20 )
    {
      v36 = v21 - 2;
      do
      {
        --v21;
        v37 = 0LL;
        if ( &v40 != v36 )
        {
          v37 = *v36;
          *v36 = 0LL;
        }
        v38 = *v21;
        *v21 = v37;
        if ( v38 )
          (*(void (__fastcall **)(__int64, __int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v38 + 16LL))(
            v38,
            v4,
            v22);
        --v35;
        --v36;
      }
      while ( v35 != v20 );
    }
    v39 = *v20;
    *v20 = v34;
    if ( v39 )
      (*(void (__fastcall **)(__int64, __int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v39 + 16LL))(v39, v4, v22);
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v40) = -2147024882;
    v24 = -2147024882;
    v3 = v43;
  }
LABEL_83:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v24;
}
