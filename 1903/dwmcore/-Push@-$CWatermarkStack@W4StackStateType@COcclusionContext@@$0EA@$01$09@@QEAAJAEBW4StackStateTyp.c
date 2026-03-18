/*
 * XREFs of ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C8290
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180086B58 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800C9AC8 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180254E44 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180255040 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  void *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned __int64 v10; // rbp
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  void *v14; // rbx
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v15 = 0LL;
  v5 = *a1;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v10 = 2LL * a1[1];
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)v10 <= 0x40 )
    LODWORD(v10) = 64;
  v11 = HrMalloc(4uLL, (unsigned int)v10, &v15);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x53u, 0LL);
    goto LABEL_14;
  }
  v13 = 4LL * *a1;
  if ( v13 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x80070216, 0x55u, 0LL);
LABEL_14:
    v2 = v15;
    goto LABEL_5;
  }
  v14 = v15;
  memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v13);
  operator delete(*((void **)a1 + 2));
  v5 = *a1;
  *((_QWORD *)a1 + 2) = v14;
  a1[1] = v10;
LABEL_2:
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v5) = *a2;
  v6 = a1[6];
  v7 = *a1 + 1;
  *a1 = v7;
  if ( v6 <= v7 )
    v6 = v7;
  v8 = 0;
  a1[6] = v6;
LABEL_5:
  operator delete(v2);
  return v8;
}
