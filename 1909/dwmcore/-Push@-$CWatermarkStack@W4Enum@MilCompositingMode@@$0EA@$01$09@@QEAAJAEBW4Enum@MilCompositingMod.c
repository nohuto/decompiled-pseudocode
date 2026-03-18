/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180253468
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802536D4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802538D0 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rsi
  unsigned __int64 v6; // rbp
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  void *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // edx
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v15 = 0LL;
  if ( v2 != a1[1] )
    goto LABEL_8;
  v6 = 2LL * a1[1];
  if ( v6 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    goto LABEL_11;
  }
  if ( (unsigned int)v6 <= 0x40 )
    LODWORD(v6) = 64;
  v7 = HrMalloc(4uLL, (unsigned int)v6, &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x53u, 0LL);
    goto LABEL_14;
  }
  v10 = 4LL * *a1;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0x55u, 0LL);
LABEL_14:
    v3 = v15;
    goto LABEL_11;
  }
  v11 = v15;
  memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v10);
  operator delete(*((void **)a1 + 2));
  v2 = *a1;
  *((_QWORD *)a1 + 2) = v11;
  a1[1] = v6;
LABEL_8:
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v2) = *a2;
  v12 = a1[6];
  v13 = *a1 + 1;
  *a1 = v13;
  if ( v12 <= v13 )
    v12 = v13;
  v9 = 0;
  a1[6] = v12;
LABEL_11:
  operator delete(v3);
  return v9;
}
