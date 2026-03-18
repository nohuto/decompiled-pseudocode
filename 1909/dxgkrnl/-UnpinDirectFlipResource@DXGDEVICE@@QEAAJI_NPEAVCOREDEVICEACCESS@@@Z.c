/*
 * XREFs of ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0153F58
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C0153C30 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01540A0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01545A8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipResource(
        DXGDEVICE *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  DXGDEVICE *v13; // rcx
  __int64 v14; // r8
  struct _EX_RUNDOWN_REF *v15; // rbx
  struct DXGALLOCATION *i; // rbx
  unsigned int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v22; // r9
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGALLOCATION *v29[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v30 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 184));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *(_DWORD *)(v4 + 224) )
    goto LABEL_2;
  v22 = *(_QWORD *)(v4 + 208);
  v23 = *(_DWORD *)(v22 + 16 * v9 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16 * v9 + 8) & 0x60)
    || (v23 & 0x2000) != 0
    || (v23 & 0x1F) == 0 )
  {
    goto LABEL_2;
  }
  v24 = v23 & 0x1F;
  if ( (_BYTE)v24 != 4 )
  {
    v25 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v24, 2LL * (unsigned int)v9);
    *(_QWORD *)(v25 + 24) = 267LL;
    WdLogEvent5_WdError(v25);
LABEL_2:
    v10 = 0LL;
    goto LABEL_3;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v9);
LABEL_3:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v29, v10);
  ExReleasePushLockSharedEx(v4 + 184, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v30, (struct _EX_RUNDOWN_REF **)v29);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v29, v11);
  v15 = v30;
  if ( !v30 )
  {
LABEL_25:
    v28 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v28 + 24) = v8;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_26;
  }
  v12 = *(_QWORD *)(v30[1].Count + 16);
  v13 = *(DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL);
  if ( *(DXGDEVICE **)(v12 + 16) != v13 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v26[3] = this;
    v26[4] = v15;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_26:
    LODWORD(v20) = -1073741811;
    goto LABEL_13;
  }
  for ( i = (struct DXGALLOCATION *)v30[3].Count; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v29[0] = i;
    if ( !i )
    {
      LODWORD(v20) = 0;
      goto LABEL_13;
    }
    v17 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
    if ( (v17 & 0x2000) == 0 )
      goto LABEL_25;
    v18 = (v17 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 435) )
    {
      v27 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      LODWORD(v20) = -1073741790;
      *(_QWORD *)(v27 + 24) = -1073741790LL;
      goto LABEL_24;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, i) )
    {
      v19 = DXGDEVICE::UnpinDirectFlipAllocation(v13, v18, v14, v29, a4);
      v20 = v19;
      if ( v19 < 0 )
        break;
    }
  }
  v27 = WdLogNewEntry5_WdWarning(v13, v12, v14);
  *(_QWORD *)(v27 + 24) = i;
  *(_QWORD *)(v27 + 32) = v20;
LABEL_24:
  WdLogEvent5_WdWarning(v27);
LABEL_13:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30, v12);
  return (unsigned int)v20;
}
