/*
 * XREFs of ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800FBF78
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18003F6C0 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x1800FBF60 (-Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800347E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAecAttributes::CreateInstance(const unsigned __int16 *a1, int a2, __int64 a3, _QWORD *a4)
{
  _DWORD *v6; // rax
  void *v7; // rcx
  _DWORD *v8; // rdi
  LPVOID *v9; // rbx
  int v10; // esi
  __int64 v11; // rdx
  char **v12; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r14
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &CAecAttributes::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (LPVOID *)v8;
  if ( v8 )
  {
    if ( !a1 )
    {
LABEL_15:
      v8[6] = a2;
      v9 = 0LL;
      *a4 = v8;
      v10 = 0;
      goto LABEL_16;
    }
    v12 = (char **)(v8 + 4);
    v13 = -1LL;
    do
      ++v13;
    while ( a1[v13] );
    *v12 = 0LL;
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v10 = -2147024362;
      goto LABEL_20;
    }
    if ( is_mul_ok(v14, 2uLL) )
    {
      v10 = CTCoAllocPolicy::Alloc(v7, 0, 2 * v14, (void **)v8 + 2);
      if ( v10 < 0 )
        goto LABEL_20;
      StringCchCopyNExW(*v12, v13 + 1, a1, v13);
    }
    else
    {
      v10 = -2147024362;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
LABEL_20:
    v11 = 23LL;
    goto LABEL_21;
  }
  v10 = -2147024882;
  v11 = 19LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  if ( v9 )
  {
    CoTaskMemFree(v9[2]);
    v9[2] = 0LL;
    operator delete(v9, (const struct std::nothrow_t *)0x20);
  }
  return (unsigned int)v10;
}
