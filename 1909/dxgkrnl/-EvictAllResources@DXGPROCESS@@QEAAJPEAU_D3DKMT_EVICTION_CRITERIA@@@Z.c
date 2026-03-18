/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C025E458
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F414 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0006B3C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v3; // r14
  _QWORD *v5; // rsi
  struct DXGDEVICE *Current; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r9
  __int64 i; // rbx
  __int64 v11; // rdx
  __int64 j; // rbx
  __int64 k; // rdi
  __int64 v14; // rdx
  unsigned int v15; // ebx
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[88]; // [rsp+B8h] [rbp-48h] BYREF

  v3 = (char *)this + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  v18[0] = (char *)this + 248;
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
    if ( (int)COREDEVICEACCESS::AcquireShared((__int64)v20, 0xFFFFFFFF, 0LL) < 0 )
      break;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, (struct _KTHREAD **)this);
    for ( i = *(_QWORD *)(v7 + 48); i; i = *(_QWORD *)(i + 64) )
    {
      v11 = *(_QWORD *)(i + 24);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, struct _D3DKMT_EVICTION_CRITERIA *))(*(_QWORD *)(*(_QWORD *)(v8 + 544) + 8LL)
                                                                                            + 720LL))(
          *(_QWORD *)(v8 + 552),
          v11,
          0LL,
          a2);
    }
    for ( j = *(_QWORD *)(v7 + 56); j; j = *(_QWORD *)(j + 40) )
    {
      for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 64) )
      {
        v14 = *(_QWORD *)(k + 24);
        if ( v14 )
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, struct _D3DKMT_EVICTION_CRITERIA *))(*(_QWORD *)(*(_QWORD *)(v8 + 544) + 8LL)
                                                                                              + 720LL))(
            *(_QWORD *)(v8 + 552),
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
