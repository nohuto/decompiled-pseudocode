/*
 * XREFs of ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004A394
 * Callers:
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180046C64 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180031DF0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180031F20 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180034388 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x180044E8C (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004A6F4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800CB04C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
        __int64 a1,
        void **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  _DWORD *v8; // r15
  unsigned __int8 *i; // r8
  void **v10; // r14
  int v11; // eax
  const char *v12; // rdx
  unsigned __int8 *v14; // [rsp+50h] [rbp-69h] BYREF
  void **v15; // [rsp+58h] [rbp-61h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v17; // [rsp+78h] [rbp-41h]
  void *Src[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v19; // [rsp+90h] [rbp-29h]
  unsigned __int64 v20; // [rsp+98h] [rbp-21h]
  void *v21[2]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v23; // [rsp+B8h] [rbp-1h]

  v17 = -2LL;
  v15 = a2;
  v14 = a3;
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21[0]) = 0;
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(Src[0]) = 0;
  v8 = (_DWORD *)(a1 + 88);
  if ( !*(_BYTE *)(a1 + 92) )
    *v8 = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes'::`2'::_State0;
  std::wstring::append((char *)v21, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  i = v14;
  if ( v14 == a4 )
  {
LABEL_19:
    a2[3] = (void *)7;
    a2[2] = 0LL;
    *(_WORD *)a2 = 0;
    std::wstring::_Assign_rv(a2, Src);
    if ( v20 >= 8 )
      operator delete(Src[0]);
    v20 = 7LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v10 = v21;
    if ( v23 >= 8 )
      v10 = (void **)v21[0];
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, unsigned __int8 *, unsigned __int8 *, unsigned __int8 **, void **, unsigned __int64, void ***))(**(_QWORD **)(a1 + 8) + 48LL))(
            *(_QWORD *)(a1 + 8),
            v8,
            i,
            a4,
            &v14,
            v10,
            (unsigned __int64)v10 + 2 * v22,
            &v15);
    if ( v11 < 0 )
    {
LABEL_29:
      if ( !*(_BYTE *)(a1 + 94) )
      {
        std::range_error::range_error((std::range_error *)pExceptionObject, v12);
        throw (std::range_error *)pExceptionObject;
      }
      goto LABEL_26;
    }
    if ( v11 <= 1 )
      break;
    if ( v11 != 3 )
      goto LABEL_29;
    for ( i = v14; i != a4; i = ++v14 )
      std::wstring::append((char *)Src, 1uLL, *i);
LABEL_18:
    *(_QWORD *)(a1 + 96) = i - a3;
    if ( i == a4 )
      goto LABEL_19;
  }
  if ( v10 < v15 )
  {
    std::wstring::append(Src, v10);
LABEL_17:
    i = v14;
    goto LABEL_18;
  }
  if ( v22 < 0x10 )
  {
    std::wstring::append((char *)v21, 8uLL, 0);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 94) )
  {
    std::range_error::range_error((std::range_error *)pExceptionObject, v12);
    throw (std::range_error *)pExceptionObject;
  }
LABEL_26:
  a2[3] = (void *)7;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign(a2, (void **)(a1 + 56), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v20 >= 8 )
    operator delete(Src[0]);
  v20 = 7LL;
LABEL_22:
  v19 = 0LL;
  LOWORD(Src[0]) = 0;
  if ( v23 >= 8 )
    operator delete(v21[0]);
  return a2;
}
