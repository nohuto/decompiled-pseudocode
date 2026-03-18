/*
 * XREFs of ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C011C914
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1C011CB50 (NtMapVisualRelativePoints.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011C760 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformPoint@@YA?AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C011C814 (-InverseTransformPoint@@YA-AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?TransformPoint@@YA?AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C011CAE0 (-TransformPoint@@YA-AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall KernelMapVisualRelativePoint(
        char *a1,
        char *a2,
        const struct VisualPoint *a3,
        struct VisualPoint *a4)
{
  int v6; // r9d
  __int64 v8; // r8
  int TransformFromInputSink; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  float v13[18]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  *(_QWORD *)a4 = *(_QWORD *)a3;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    memset(v13, 0, 0x40uLL);
    TransformFromInputSink = GetTransformFromInputSink(a1, (struct tagINPUT_TRANSFORM *)v13, v8);
    v6 = TransformFromInputSink;
    if ( TransformFromInputSink < 0 )
      return (unsigned int)v6;
    *(_QWORD *)a4 = TransformPoint(a4, v13, v10, (unsigned int)TransformFromInputSink);
  }
  if ( (unsigned __int64)(a2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    memset(v13, 0, 0x40uLL);
    v6 = GetTransformFromInputSink(a2, (struct tagINPUT_TRANSFORM *)v13, v11);
    if ( v6 >= 0 )
      *(_QWORD *)a4 = InverseTransformPoint((float *)a4, v13);
  }
  return (unsigned int)v6;
}
