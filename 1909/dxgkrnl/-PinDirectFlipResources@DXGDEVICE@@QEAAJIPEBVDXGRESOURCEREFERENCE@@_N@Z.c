/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C0154218
 * Callers:
 *     ?DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z @ 0x1C01537A0 (-DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0154154 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0154424 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01545A8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C01545F8 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
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
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 Width; // r8
  UINT Height; // r9d
  enum _D3DDDIFORMAT Format; // r10d
  unsigned int v20; // r15d
  __int64 v21; // rsi
  struct DXGRESOURCE **v22; // rbp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int i; // r15d
  struct DXGALLOCATION *v30; // rsi
  unsigned int v31; // ebp
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  struct DXGALLOCATION *j; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  D3DDDIFORMAT v42; // [rsp+40h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v43; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  UINT v45; // [rsp+D0h] [rbp+18h]

  v4 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 128LL) - 48LL;
  v9 = (*(_DWORD *)(v8 + 4) >> 6) & 0xF;
  memset(&v43, 0, sizeof(v43));
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v43.hAllocation = *(HANDLE *)(v8 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v10, &v43, v11);
  v16 = v12;
  if ( v12 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v35[3] = v16;
    v35[4] = this;
    v35[5] = *(_QWORD *)(v8 + 16);
    v35[6] = v8;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    Width = v43.Width;
    Height = v43.Height;
    Format = v43.Format;
    Interval.LowPart = v43.Width;
    v45 = v43.Height;
    v42 = v43.Format;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 434) )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v43.Width);
      v36[3] = *(_QWORD *)v4;
LABEL_30:
      v16 = -1073741811LL;
LABEL_32:
      v36[4] = v16;
LABEL_34:
      WdLogEvent5_WdWarning(v36);
      return (unsigned int)v16;
    }
    if ( a4 && !*((_DWORD *)this + 435) )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v43.Width);
      LODWORD(v16) = -1073741790;
      v36[3] = -1073741790LL;
      goto LABEL_34;
    }
    v20 = 0;
    v21 = 0LL;
    if ( a2 )
    {
      v22 = (struct DXGRESOURCE **)v4;
      while ( 1 )
      {
        v23 = DXGDEVICE::ValidateDirectFlipResource(
                this,
                *v22,
                v9,
                Width,
                Height,
                Format,
                *(_DWORD *)(*((_QWORD *)*v22 + 7) + 124LL));
        v16 = v23;
        if ( v23 < 0 )
          break;
        v13 = (const struct DXGALLOCATION *)*((_QWORD *)*v22 + 3);
        while ( v13 )
        {
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v13) )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, Width);
            v36[3] = *((_QWORD *)v4 + v21);
            goto LABEL_30;
          }
          v13 = *(const struct DXGALLOCATION **)(v26 + 64);
          ++v20;
        }
        v21 = (unsigned int)(v21 + 1);
        ++v22;
        if ( (unsigned int)v21 >= a2 )
          goto LABEL_12;
        LODWORD(Width) = Interval.LowPart;
        Height = v45;
        Format = v42;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, Width);
      v36[3] = *((_QWORD *)v4 + v21);
      goto LABEL_32;
    }
LABEL_12:
    v28 = v20 + *((_DWORD *)this + v9 + 336);
    if ( (unsigned int)v28 > 0x300 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v13, Width);
      LODWORD(v16) = -1073741811;
      v36[3] = *((unsigned int *)this + v9 + 336);
      v36[4] = v20;
      v36[5] = 768LL;
      v36[6] = -1073741811LL;
      goto LABEL_34;
    }
    for ( i = 0; i < a2; v4 = (const struct DXGRESOURCEREFERENCE *)((char *)v4 + 8) )
    {
      if ( (int)v16 < 0 )
        break;
      v30 = *(struct DXGALLOCATION **)(*(_QWORD *)v4 + 24LL);
LABEL_16:
      while ( v30 )
      {
        if ( (int)v16 < 0 )
          goto LABEL_39;
        v31 = 0;
        while ( 1 )
        {
          LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                                               + 8LL)
                                                                                   + 224LL))(
                           *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                           *((_QWORD *)v30 + 3),
                           0LL,
                           0LL);
          if ( (int)v16 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v31;
          LODWORD(v16) = -1071775488;
          if ( v31 >= 4 )
            goto LABEL_16;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList(this, v9, v30) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v33, v32);
          *(_QWORD *)(v37 + 24) = 6391LL;
          WdLogEvent5_WdAssertion(v37);
        }
        v30 = (struct DXGALLOCATION *)*((_QWORD *)v30 + 8);
      }
      if ( (int)v16 >= 0 )
        goto LABEL_24;
LABEL_39:
      for ( j = *(struct DXGALLOCATION **)(*(_QWORD *)v4 + 24LL);
            j && j != v30;
            j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      {
        if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, v9, j) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v40, v39);
          *(_QWORD *)(v41 + 24) = 6406LL;
          WdLogEvent5_WdAssertion(v41);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 232LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
          *((_QWORD *)j + 3));
      }
LABEL_24:
      ++i;
    }
  }
  return (unsigned int)v16;
}
