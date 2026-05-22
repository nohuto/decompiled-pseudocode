/*
 * XREFs of ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800ECBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EC974 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall HeatProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char *)malloc(0x50uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x50uLL);
  if ( v5 )
  {
    v6 = *(_QWORD *)a1;
    v7 = *((_QWORD *)a1 + 1);
    *((_QWORD *)v5 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 6) = 1;
    *((_QWORD *)v5 + 5) = v6;
    *((_QWORD *)v5 + 4) = v7;
    *(_QWORD *)v5 = &HeatProcessor::`vftable';
    *((_QWORD *)v5 + 1) = &HeatProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v5 + 2) = &HeatProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    v9 = HeatProcessor::Initialize(
           (HeatProcessor *)v5,
           *(struct DeviceInfo **)a1,
           *((struct IInputProcessorHost **)a1 + 1));
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a2 = (struct IInputProcessor *)(v5 + 8);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
