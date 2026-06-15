/*
 * XREFs of ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800F0658
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18000E380 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x1800F0640 (-Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004FCC8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAecAttributes::CreateInstance(const unsigned __int16 *a1, int a2, __int64 a3, LPVOID **a4)
{
  LPVOID *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  LPVOID *v10; // rdi
  LPVOID *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = (LPVOID *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *v7 = &CAecAttributes::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 19LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
      (const char *)v13);
    goto LABEL_13;
  }
  if ( a1 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a1[v15] );
    v16 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a1, v15, v18, v10 + 2);
    v12 = v16;
    if ( v16 < 0 )
    {
      v13 = (unsigned int)v16;
      v14 = 23LL;
      goto LABEL_11;
    }
  }
  *((_DWORD *)v10 + 6) = a2;
  v11 = 0LL;
  *a4 = v10;
  v12 = 0;
LABEL_13:
  if ( v11 )
  {
    CoTaskMemFree(v11[2]);
    v11[2] = 0LL;
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
  return v12;
}
