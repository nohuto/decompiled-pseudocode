/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013FB08
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C013F0D0 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0013B08 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013FA44 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013FD00 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013FE84 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C013FED4 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  const struct DXGRESOURCEREFERENCE *v4; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  ADAPTER_RENDER *v10; // rcx
  const GUID *v11; // r8
  int v12; // eax
  const struct DXGALLOCATION *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 Width; // r8
  UINT Height; // r9d
  enum _D3DDDIFORMAT Format; // r10d
  unsigned int v19; // r15d
  __int64 v20; // rsi
  struct DXGRESOURCE **v21; // rbp
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int i; // r15d
  __int64 v29; // rbp
  unsigned int v30; // esi
  __int64 v31; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 j; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  D3DDDIFORMAT v39; // [rsp+40h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v40; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  UINT v42; // [rsp+D0h] [rbp+18h]

  v4 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 128LL) - 48LL;
  v9 = (*(_DWORD *)(v8 + 4) >> 6) & 0xF;
  memset(&v40, 0, sizeof(v40));
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v40.hAllocation = *(HANDLE *)(v8 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v10, &v40, v11);
  v15 = v12;
  if ( v12 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v33[3] = v15;
    v33[4] = this;
    v33[5] = *(_QWORD *)(v8 + 16);
    v33[6] = v8;
    WdLogEvent5_WdError(v33);
  }
  else
  {
    Width = v40.Width;
    Height = v40.Height;
    Format = v40.Format;
    Interval.LowPart = v40.Width;
    v42 = v40.Height;
    v39 = v40.Format;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 434) )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v40.Width);
      v34[3] = *(_QWORD *)v4;
LABEL_30:
      v15 = -1073741811LL;
LABEL_32:
      v34[4] = v15;
LABEL_34:
      WdLogEvent5_WdWarning(v34);
      return (unsigned int)v15;
    }
    if ( a4 && !*((_DWORD *)this + 435) )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v40.Width);
      LODWORD(v15) = -1073741790;
      v34[3] = -1073741790LL;
      goto LABEL_34;
    }
    v19 = 0;
    v20 = 0LL;
    if ( a2 )
    {
      v21 = (struct DXGRESOURCE **)v4;
      while ( 1 )
      {
        v22 = DXGDEVICE::ValidateDirectFlipResource(
                this,
                *v21,
                v9,
                Width,
                Height,
                Format,
                *(_DWORD *)(*((_QWORD *)*v21 + 7) + 124LL));
        v15 = v22;
        if ( v22 < 0 )
          break;
        v13 = (const struct DXGALLOCATION *)*((_QWORD *)*v21 + 3);
        while ( v13 )
        {
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v13) )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, Width);
            v34[3] = *((_QWORD *)v4 + v20);
            goto LABEL_30;
          }
          v13 = *(const struct DXGALLOCATION **)(v25 + 64);
          ++v19;
        }
        v20 = (unsigned int)(v20 + 1);
        ++v21;
        if ( (unsigned int)v20 >= a2 )
          goto LABEL_12;
        LODWORD(Width) = Interval.LowPart;
        Height = v42;
        Format = v39;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, Width);
      v34[3] = *((_QWORD *)v4 + v20);
      goto LABEL_32;
    }
LABEL_12:
    v27 = v19 + *((_DWORD *)this + v9 + 336);
    if ( (unsigned int)v27 > 0x300 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v13, Width);
      LODWORD(v15) = -1073741811;
      v34[3] = *((unsigned int *)this + v9 + 336);
      v34[4] = v19;
      v34[5] = 768LL;
      v34[6] = -1073741811LL;
      goto LABEL_34;
    }
    for ( i = 0; i < a2; v4 = (const struct DXGRESOURCEREFERENCE *)((char *)v4 + 8) )
    {
      if ( (int)v15 < 0 )
        break;
      v29 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
LABEL_16:
      while ( v29 )
      {
        if ( (int)v15 < 0 )
          goto LABEL_39;
        v30 = 0;
        while ( 1 )
        {
          LODWORD(v15) = VIDMM_EXPORT::VidMmPinAllocation(
                           *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                           *(struct _VIDMM_MULTI_ALLOC **)(v29 + 24),
                           0LL,
                           0LL);
          if ( (int)v15 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v30;
          LODWORD(v15) = -1071775488;
          if ( v30 >= 4 )
            goto LABEL_16;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList(this, v9, (struct DXGALLOCATION *)v29) )
        {
          v35 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v35 + 24) = 6331LL;
          WdLogEvent5_WdAssertion(v35);
        }
        v29 = *(_QWORD *)(v29 + 64);
      }
      if ( (int)v15 >= 0 )
        goto LABEL_24;
LABEL_39:
      for ( j = *(_QWORD *)(*(_QWORD *)v4 + 24LL); j && j != v29; j = *(_QWORD *)(j + 64) )
      {
        if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, v9, (struct DXGALLOCATION *)j) )
        {
          v38 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v38 + 24) = 6346LL;
          WdLogEvent5_WdAssertion(v38);
        }
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
          *(struct _VIDMM_MULTI_ALLOC **)(j + 24));
      }
LABEL_24:
      ++i;
    }
  }
  return (unsigned int)v15;
}
