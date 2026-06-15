/*
 * XREFs of AudioServerCreateStreamConnection @ 0x1800E6EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall AudioServerCreateStreamConnection(__int64 a1, _WORD *a2, _WORD *a3, unsigned int a4, _QWORD *a5)
{
  int v7; // edi
  std::_Ref_count_base *v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // r15
  std::_Ref_count_base *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rcx
  struct std::nothrow_t *v15; // rdx
  void *v16; // rcx
  struct std::nothrow_t *v17; // rdx
  struct std::nothrow_t *v20; // [rsp+38h] [rbp-49h] BYREF
  void *v21; // [rsp+40h] [rbp-41h] BYREF
  struct std::nothrow_t *v22; // [rsp+48h] [rbp-39h] BYREF
  void *v23; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-29h] BYREF
  __m128i si128; // [rsp+68h] [rbp-19h]
  _QWORD v26[3]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+Fh]

  v7 = -2147467261;
  if ( a5 )
  {
    *a5 = 0LL;
    v8 = qword_1801B8C10;
    if ( qword_1801B8C10 )
    {
      while ( 1 )
      {
        v9 = *((_DWORD *)v8 + 2);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)v8 + 2, v9 + 1, v9) )
        {
          v10 = g_weakStreamMonitorManager;
          v11 = qword_1801B8C10;
          if ( g_weakStreamMonitorManager )
          {
            v12 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
            v13 = v12;
            if ( v12 )
            {
              *v12 = 0LL;
              v12[1] = 0LL;
            }
            else
            {
              v13 = 0LL;
            }
            if ( v13 )
            {
              std::wstring::wstring(v26, a3);
              std::wstring::wstring(v24, a2);
              v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD, _QWORD *))(*(_QWORD *)v10 + 24LL))(
                     v10,
                     v24,
                     v26,
                     a4,
                     v13);
              if ( si128.m128i_i64[1] >= 8uLL )
              {
                v14 = (void *)v24[0];
                v15 = (struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2);
                v20 = v15;
                v21 = (void *)v24[0];
                if ( (unsigned __int64)v15 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(&v21, (unsigned __int64 *)&v20);
                  v15 = v20;
                  v14 = v21;
                }
                operator delete(v14, v15);
              }
              LOWORD(v24[0]) = 0;
              si128 = _mm_load_si128((const __m128i *)&_xmm);
              if ( v27 >= 8 )
              {
                v16 = (void *)v26[0];
                v17 = (struct std::nothrow_t *)(2 * v27 + 2);
                v22 = v17;
                v23 = (void *)v26[0];
                if ( (unsigned __int64)v17 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(&v23, (unsigned __int64 *)&v22);
                  v17 = v22;
                  v16 = v23;
                }
                operator delete(v16, v17);
              }
              if ( v7 >= 0 )
                *a5 = v13;
            }
            else
            {
              v7 = -2147024882;
            }
          }
          if ( v11 )
            std::_Ref_count_base::_Decref(v11);
          return (unsigned int)v7;
        }
      }
    }
  }
  return (unsigned int)v7;
}
