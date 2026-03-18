/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C006BE70 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     HmgFree @ 0x1C00715F0 (HmgFree.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0072AB4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0072AF0 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C0550 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(XDCOBJ *this, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct HPATH__ *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  volatile signed __int32 *v25; // rcx
  volatile signed __int32 *v26; // rcx
  volatile signed __int32 *v27; // rcx
  volatile signed __int32 *v28; // rcx
  _QWORD *v29; // rsi
  unsigned int v30; // ebp
  __int64 v31; // [rsp+20h] [rbp-A8h] BYREF
  int v32; // [rsp+28h] [rbp-A0h]
  _BYTE v33[8]; // [rsp+30h] [rbp-98h] BYREF
  struct OBJECT *v34; // [rsp+38h] [rbp-90h]
  struct PFT *v35; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)this + 2152LL);
  v32 = 0;
  v31 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap(&v31, v4);
  v5 = *(_QWORD *)this;
  v6 = *(volatile signed __int32 **)(*(_QWORD *)this + 1624LL);
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6) )
      RBRUSH::vFreeOrCacheRBrush(v6, 1LL);
    *(_QWORD *)(v5 + 1624) = 0LL;
  }
  v7 = *(_QWORD *)(v5 + 1600);
  if ( v7 )
  {
    v25 = (volatile signed __int32 *)(v7 - 16);
    if ( !_InterlockedDecrement(v25) )
      RBRUSH::vFreeOrCacheRBrush(v25, 0LL);
    *(_QWORD *)(v5 + 1600) = 0LL;
  }
  v8 = *(_QWORD *)this;
  v9 = *(volatile signed __int32 **)(*(_QWORD *)this + 1760LL);
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9) )
      RBRUSH::vFreeOrCacheRBrush(v9, 1LL);
    *(_QWORD *)(v8 + 1760) = 0LL;
  }
  v10 = *(_QWORD *)(v8 + 1736);
  if ( v10 )
  {
    v26 = (volatile signed __int32 *)(v10 - 16);
    if ( !_InterlockedDecrement(v26) )
      RBRUSH::vFreeOrCacheRBrush(v26, 0LL);
    *(_QWORD *)(v8 + 1736) = 0LL;
  }
  v11 = *(_QWORD *)this;
  v12 = *(volatile signed __int32 **)(*(_QWORD *)this + 1896LL);
  if ( v12 )
  {
    if ( !_InterlockedDecrement(v12) )
      RBRUSH::vFreeOrCacheRBrush(v12, 1LL);
    *(_QWORD *)(v11 + 1896) = 0LL;
  }
  v13 = *(_QWORD *)(v11 + 1872);
  if ( v13 )
  {
    v27 = (volatile signed __int32 *)(v13 - 16);
    if ( !_InterlockedDecrement(v27) )
      RBRUSH::vFreeOrCacheRBrush(v27, 0LL);
    *(_QWORD *)(v11 + 1872) = 0LL;
  }
  v14 = *(_QWORD *)this;
  v15 = *(volatile signed __int32 **)(*(_QWORD *)this + 2032LL);
  if ( v15 )
  {
    if ( !_InterlockedDecrement(v15) )
      RBRUSH::vFreeOrCacheRBrush(v15, 1LL);
    *(_QWORD *)(v14 + 2032) = 0LL;
  }
  v16 = *(_QWORD *)(v14 + 2008);
  if ( v16 )
  {
    v28 = (volatile signed __int32 *)(v16 - 16);
    if ( !_InterlockedDecrement(v28) )
      RBRUSH::vFreeOrCacheRBrush(v28, 0LL);
    *(_QWORD *)(v14 + 2008) = 0LL;
  }
  v17 = *(_QWORD *)this;
  v18 = *(struct HPATH__ **)(*(_QWORD *)this + 208LL);
  if ( v18 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v33, v18);
    if ( v34 && (*((_DWORD *)v34 + 21) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v34);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v33);
    *(_QWORD *)(v17 + 208) = 0LL;
  }
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap(this, a2);
  v19 = *(_QWORD **)this;
  v20 = *(_QWORD **)(*(_QWORD *)this + 2464LL);
  if ( v20 )
  {
    do
    {
      v29 = v20;
      v20 = (_QWORD *)v20[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
      v30 = 32;
      v35 = *(struct PFT **)(*v29 + 128LL);
      if ( v35 == gpPFTPrivate )
        v30 = 64;
      --*(_DWORD *)(*v29 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
        PFTOBJ_bUnloadWorkhorseWrap(&v35, *v29, 0LL, v30);
      Win32FreePool((__int64)v29);
    }
    while ( v20 );
    v19 = *(_QWORD **)this;
  }
  v21 = v19[38];
  v22 = v19;
  if ( v21 && (_QWORD *)v21 != v19 + 34 )
  {
    Win32FreePool(v21);
    *(_QWORD *)(*(_QWORD *)this + 304LL) = 0LL;
    v22 = *(_QWORD **)this;
  }
  HmgFree(*v22);
  v23 = v31;
  *(_QWORD *)this = 0LL;
  if ( v23 )
  {
    if ( (*(_DWORD *)(v23 + 696) & 0x81) != 0 && (int)IsRFONTOBJ_dtorHelperSupported() >= 0 )
      RFONTOBJ_dtorHelperWrap(&v31);
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v31);
  }
  return 1LL;
}
