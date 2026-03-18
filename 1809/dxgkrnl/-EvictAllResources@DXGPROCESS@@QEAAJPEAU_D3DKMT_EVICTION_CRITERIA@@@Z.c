/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C02292BC
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C170 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0010DF8 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0038E4C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v3; // r14
  _QWORD *v5; // rsi
  struct DXGDEVICE *Current; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 i; // rbx
  struct _VIDMM_MULTI_ALLOC *v11; // r8
  __int64 j; // rbx
  __int64 k; // rdi
  struct _VIDMM_MULTI_ALLOC *v14; // r8
  unsigned int v15; // ebx
  _QWORD v17[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v20[8]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v21[32]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v22[56]; // [rsp+A0h] [rbp-1h] BYREF

  v3 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 34);
  v18[0] = (char *)this + 272;
  while ( 1 )
  {
    v18[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
    v7 = (__int64)Current;
    if ( !Current )
    {
      v15 = 0;
      goto LABEL_24;
    }
    v8 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, v7, 2, v9, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20) < 0 )
      break;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, (struct _KTHREAD **)this);
    for ( i = *(_QWORD *)(v7 + 48); i; i = *(_QWORD *)(i + 64) )
    {
      v11 = *(struct _VIDMM_MULTI_ALLOC **)(i + 24);
      if ( v11 )
        VIDMM_EXPORT::VidMmEvictAllocation(
          *(VIDMM_EXPORT **)(v8 + 544),
          *(struct VIDMM_GLOBAL **)(v8 + 552),
          v11,
          0LL,
          a2);
    }
    for ( j = *(_QWORD *)(v7 + 56); j; j = *(_QWORD *)(j + 40) )
    {
      for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 64) )
      {
        v14 = *(struct _VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v14 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v8 + 544),
            *(struct VIDMM_GLOBAL **)(v8 + 552),
            v14,
            0LL,
            a2);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v22);
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    v5 = (_QWORD *)*v5;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  if ( v17[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
  v15 = -1073741130;
LABEL_24:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v15;
}
