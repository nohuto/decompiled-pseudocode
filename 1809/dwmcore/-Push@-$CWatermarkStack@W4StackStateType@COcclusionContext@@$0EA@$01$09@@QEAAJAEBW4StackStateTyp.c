/*
 * XREFs of ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x18006B740
 * Callers:
 *     ?HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z @ 0x18002C7B4 (-HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18006CB88 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224CF4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224EC4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rsi
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  SIZE_T v12; // r8
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 == a1[1] )
  {
    v10 = 2LL * a1[1];
    v11 = -1;
    if ( v10 <= 0xFFFFFFFF )
      v11 = 2 * a1[1];
    v3 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v10 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x4Cu);
      goto LABEL_5;
    }
    if ( v11 <= 0x40 )
      v11 = 64;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 <= 4 )
    {
      v3 = -2147024809;
    }
    else
    {
      v12 = 4LL * v11;
      if ( !v12 )
        v12 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v12);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x54u);
      goto LABEL_5;
    }
    v13 = -1;
    v14 = 4LL * *a1;
    if ( v14 <= 0xFFFFFFFF )
      v13 = 4 * *a1;
    v3 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v14 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x56u);
      goto LABEL_5;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v13);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v11;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v2) = *a2;
  v7 = a1[6];
  v8 = *a1 + 1;
  *a1 = v8;
  if ( v7 <= v8 )
    v7 = v8;
  a1[6] = v7;
LABEL_5:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
