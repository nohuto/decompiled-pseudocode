/*
 * XREFs of ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C013F808
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C013F510 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013F99C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013FE84 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
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
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rdx
  DXGDEVICE *v14; // rcx
  __int64 v15; // r8
  struct _EX_RUNDOWN_REF *v16; // rbx
  struct DXGALLOCATION *i; // rbx
  unsigned int v18; // edi
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGALLOCATION *v27[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v28 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 208));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *(_DWORD *)(v4 + 248) )
  {
    v10 = *(_QWORD *)(v4 + 232);
    v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
    if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0 )
    {
      if ( (v11 & 0x1F) == 4 )
      {
        v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
        goto LABEL_7;
      }
      v23 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60);
      *(_QWORD *)(v23 + 24) = 316LL;
      WdLogEvent5_WdError(v23);
    }
  }
  v12 = 0LL;
LABEL_7:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v27, v12);
  ExReleasePushLockSharedEx(v4 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v28, v27);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v27);
  v16 = v28;
  if ( !v28 )
  {
LABEL_25:
    v26 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v26 + 24) = v8;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_26;
  }
  v13 = *(_QWORD *)(v28[1].Count + 16);
  v14 = *(DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL);
  if ( *(DXGDEVICE **)(v13 + 16) != v14 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v24[3] = this;
    v24[4] = v16;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_26:
    LODWORD(v21) = -1073741811;
    goto LABEL_17;
  }
  for ( i = (struct DXGALLOCATION *)v28[3].Count; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v27[0] = i;
    if ( !i )
    {
      LODWORD(v21) = 0;
      goto LABEL_17;
    }
    v18 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
    if ( (v18 & 0x2000) == 0 )
      goto LABEL_25;
    v19 = (v18 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 435) )
    {
      v25 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      LODWORD(v21) = -1073741790;
      *(_QWORD *)(v25 + 24) = -1073741790LL;
      goto LABEL_24;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, i) )
    {
      v20 = DXGDEVICE::UnpinDirectFlipAllocation(v14, v19, v15, v27, a4);
      v21 = v20;
      if ( v20 < 0 )
        break;
    }
  }
  v25 = WdLogNewEntry5_WdWarning(v14, v13, v15);
  *(_QWORD *)(v25 + 24) = i;
  *(_QWORD *)(v25 + 32) = v21;
LABEL_24:
  WdLogEvent5_WdWarning(v25);
LABEL_17:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v28);
  return (unsigned int)v21;
}
