/*
 * XREFs of ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x18022361C
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x180223754 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x180223CF4 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddBufferReference(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // edi
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  char *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 3) > 2 )
  {
    *a2 = 0LL;
    v4 = *a1;
    v13 = (char *)a2 - *(_QWORD *)(*a1 + 8LL);
    if ( a3 == 1 )
    {
      v5 = *(_DWORD *)(v4 + 560);
      v6 = v5 + 1;
      if ( v5 + 1 >= v5 )
      {
        v7 = 0;
        if ( v6 <= *(_DWORD *)(v4 + 556) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 536) + 8LL * v5) = v13;
          *(_DWORD *)(v4 + 560) = v6;
          return v7;
        }
        v8 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 536, 8, 1, &v13);
LABEL_14:
        v7 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC3u, 0LL);
        return v7;
      }
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)-2003304320;
      v10 = *(_DWORD *)(v4 + 616);
      v11 = v10 + 1;
      if ( v10 + 1 >= v10 )
      {
        v7 = 0;
        if ( v11 <= *(_DWORD *)(v4 + 612) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 592) + 8LL * *(unsigned int *)(v4 + 616)) = v13;
          *(_DWORD *)(v4 + 616) = v11;
          return v7;
        }
        v8 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 592, 8, 1, &v13);
        goto LABEL_14;
      }
    }
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    return v7;
  }
  *a2 = *(_QWORD *)(a1[1] + 8LL * (unsigned int)(a3 - 3));
  return v3;
}
