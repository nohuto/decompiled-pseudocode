/*
 * XREFs of ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180075E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180074774 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18007615C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x1800932B8 (-IsPointerDevice@@YAHPEBUDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Create(const struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  ControllerProcessor *v7; // rax
  ControllerProcessor *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)IsPointerDevice(*a1) )
  {
    v4 = -2147024809;
    v5 = 412LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (ControllerProcessor *)RefCountedObject::operator new(0x2C60uLL);
  if ( v7 )
    v8 = ControllerProcessor::ControllerProcessor(v7, *a1, a1[1]);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 419LL;
    goto LABEL_3;
  }
  v9 = ControllerProcessor::Initialize(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
