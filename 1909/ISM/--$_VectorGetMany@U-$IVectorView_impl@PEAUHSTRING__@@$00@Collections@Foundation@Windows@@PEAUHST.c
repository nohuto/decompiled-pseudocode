/*
 * XREFs of ??$_VectorGetMany@U?$IVectorView_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING__@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUHSTRING__@@$00@123@IIPEAPEAUHSTRING__@@PEAI@Z @ 0x180117E2C
 * Callers:
 *     ?GetMany@?$IVectorView_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x18011DB00 (-GetMany@-$IVectorView_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHST.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Cleanup@I@Detail@Collections@Foundation@Windows@@YAXPEAPEAUHSTRING__@@I@Z @ 0x180117B50 (--$_Cleanup@I@Detail@Collections@Foundation@Windows@@YAXPEAPEAUHSTRING__@@I@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<HSTRING__ *,1>,HSTRING__ *>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  unsigned int v9; // esi
  _DWORD *v10; // r12
  int v11; // edi
  unsigned int v12; // ecx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0;
  v9 = 0;
  memset_0(a4, 0, 8LL * a3);
  v10 = a5;
  *a5 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v16);
  if ( v11 < 0 )
    goto LABEL_4;
  v12 = v16;
  if ( a2 > v16 )
  {
    v11 = -2147483637;
LABEL_4:
    Windows::Foundation::Collections::Detail::_Cleanup<unsigned int>((HSTRING *)a4, v9);
    return (unsigned int)v11;
  }
  v14 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v15 = (unsigned int)v14 + a2;
      if ( (unsigned int)v15 >= v12 )
        break;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(
              a1,
              v15,
              (__int64)a4 + 8 * v14);
      if ( v11 < 0 )
        goto LABEL_4;
      ++v9;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= a3 )
        break;
      v12 = v16;
    }
  }
  *v10 = v14;
  return (unsigned int)v11;
}
