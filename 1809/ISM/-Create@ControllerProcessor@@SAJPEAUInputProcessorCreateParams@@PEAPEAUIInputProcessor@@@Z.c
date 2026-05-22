/*
 * XREFs of ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800329D4 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  ControllerProcessor *v7; // rax
  ControllerProcessor *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *a1 && (*((_BYTE *)*a1 + 4) & 0x3B) != 0 )
  {
    v4 = -2147024809;
    v5 = 396LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (ControllerProcessor *)malloc(0x1B40uLL);
  v8 = v7;
  if ( v7 )
    memset_0(v7, 0, 0x1B40uLL);
  if ( v8 )
    v8 = ControllerProcessor::ControllerProcessor(v8, *a1, a1[1]);
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 403LL;
    goto LABEL_4;
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
      (void *)0x196,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
