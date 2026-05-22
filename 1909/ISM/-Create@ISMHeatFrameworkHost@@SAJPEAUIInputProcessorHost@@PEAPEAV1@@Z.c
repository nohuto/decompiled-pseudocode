/*
 * XREFs of ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x18007ADF4
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180126458 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x18007AAC4 (--0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x18007B1A4 (-PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::Create(struct IInputProcessorHost *a1, struct ISMHeatFrameworkHost **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  ISMHeatFrameworkHost *v7; // rax
  ISMHeatFrameworkHost *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  int v11; // edi
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (ISMHeatFrameworkHost *)RefCountedObject::operator new(0x80uLL);
  if ( v7 )
    v8 = ISMHeatFrameworkHost::ISMHeatFrameworkHost(v7, a1);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 71LL;
    goto LABEL_3;
  }
  v9 = ISMHeatFrameworkHost::PopulateHeatGripServiceHost(v8);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)v8 + 15);
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 56) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          55LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
          v10);
        __debugbreak();
      }
      *(_QWORD *)(v12 + 56) = v8;
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( v11 >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
}
