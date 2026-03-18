/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0148254
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01481E0 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0278650 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C0150058 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247A84 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r14
  struct DXGDEVICE *v9; // rax
  _QWORD *i; // rdi
  SESSION_ADAPTER *v11; // rcx
  unsigned int v12; // edx
  SESSION_ADAPTER *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r12d
  SESSION_ADAPTER *v18; // rax
  __int64 v19; // r15
  SESSION_ADAPTER *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  struct DXGHWQUEUE *v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r15
  struct DXGDEVICE *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 *v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // [rsp+40h] [rbp-C8h]
  __int64 *v40; // [rsp+48h] [rbp-C0h]
  SESSION_ADAPTER *v41; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v42[16]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-A0h]
  _QWORD v44[2]; // [rsp+70h] [rbp-98h] BYREF
  char v45; // [rsp+80h] [rbp-88h]
  char v46[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  char v48; // [rsp+98h] [rbp-70h]
  char v49[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h]
  char v51; // [rsp+B0h] [rbp-58h]
  char v52[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-48h]
  char v54; // [rsp+C8h] [rbp-40h]
  _QWORD v55[2]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v56[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v57[2]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v58[2]; // [rsp+100h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+8h] BYREF
  char v60; // [rsp+140h] [rbp+38h]
  char v61[8]; // [rsp+148h] [rbp+40h] BYREF
  char v62[64]; // [rsp+150h] [rbp+48h] BYREF
  char v63[88]; // [rsp+190h] [rbp+88h] BYREF
  char v64[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v65[64]; // [rsp+1F0h] [rbp+E8h] BYREF
  char v66[88]; // [rsp+230h] [rbp+128h] BYREF
  char v67[8]; // [rsp+288h] [rbp+180h] BYREF
  char v68[64]; // [rsp+290h] [rbp+188h] BYREF
  char v69[88]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v70[8]; // [rsp+328h] [rbp+220h] BYREF
  char v71[64]; // [rsp+330h] [rbp+228h] BYREF
  char v72[88]; // [rsp+370h] [rbp+268h] BYREF

  v2 = *(_QWORD *)this;
  v60 = 0;
  v41 = 0LL;
  v43 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 18632);
  v7 = 0LL;
  v8 = 0LL;
  v40 = 0LL;
  if ( v6 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 160, 0LL);
    *(_QWORD *)(v6 + 168) = KeGetCurrentThread();
    v9 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v9 && v9 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18624LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v11 = (SESSION_ADAPTER *)*((_QWORD *)this + 9);
      v12 = *((_DWORD *)this + 24);
      v8 = *((unsigned int *)this + 13);
      v40 = (__int64 *)*((_QWORD *)this + 8);
      v43 = v12;
      if ( v11 == (SESSION_ADAPTER *)((char *)this + 80) )
      {
        v13 = (SESSION_ADAPTER *)v42;
        v14 = 0;
        v41 = (SESSION_ADAPTER *)v42;
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = v14++;
            *((_QWORD *)v13 + v15) = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v15);
            if ( v14 >= *((_DWORD *)this + 24) )
              break;
            v13 = v41;
          }
        }
      }
      else
      {
        v41 = v11;
      }
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 9) = 0LL;
      v7 = *((_QWORD *)this + 8);
      v5 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v6 + 168) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 160, 0LL);
    KeLeaveCriticalRegion();
    v16 = v43;
    if ( v43 )
    {
      v17 = 0;
      if ( (_DWORD)v8 )
      {
        v18 = v41;
        v19 = 0LL;
        v39 = 0LL;
        do
        {
          v20 = (SESSION_ADAPTER *)((char *)v18 + v19);
          if ( v17 >= (unsigned int)v16 )
            v20 = v18;
          if ( *(_QWORD *)v20 )
          {
            if ( v17 < (unsigned int)v16 )
              v18 = (SESSION_ADAPTER *)((char *)v18 + v19);
            v24 = *(struct DXGHWQUEUE **)v18;
            v25 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v18 + 72LL));
            if ( v25 < 0 )
            {
              v26 = WdLogNewEntry5_WdAssertion(v16, v20);
              *(_QWORD *)(v26 + 24) = 101LL;
              WdLogEvent5_WdAssertion(v26);
            }
            if ( !v25 )
            {
              v27 = *((_QWORD *)v24 + 2);
              v28 = *(struct DXGDEVICE **)(v27 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v28);
              v29 = *((_QWORD *)v28 + 2);
              v45 = 0;
              v44[1] = *(_QWORD *)(v29 + 16);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v28, 2, v30, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((__int64)v61);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL) + 176LL) != 4 )
                DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v27, v24, (struct COREDEVICEACCESS *)v61);
              COREACCESS::~COREACCESS((COREACCESS *)v63);
              COREACCESS::~COREACCESS((COREACCESS *)v62);
              if ( v45 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
              if ( v55[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                v31 = *(_QWORD *)(v27 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v56,
                  (struct DXGDEVICE *)v31);
                v32 = *(_QWORD *)(v27 + 16);
                v48 = 0;
                v47 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, v31, 2, v33, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((__int64)v64);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 176LL) != 4 )
                  DXGDEVICE::DestroyContext(
                    (DXGDEVICE *)v31,
                    (struct DXGCONTEXT ***)v27,
                    (struct COREDEVICEACCESS *)v64);
                COREACCESS::~COREACCESS((COREACCESS *)v66);
                COREACCESS::~COREACCESS((COREACCESS *)v65);
                if ( v48 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
                if ( v56[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v31 + 16), (struct DXGDEVICE *)v31);
              }
              v19 = v39;
            }
            v18 = v41;
            v16 = v43;
          }
          v19 += 8LL;
          ++v17;
          v39 = v19;
        }
        while ( v17 < (unsigned int)v8 );
      }
    }
    if ( (unsigned int)v8 > 1 )
    {
      v34 = v40;
      do
      {
        v35 = *v34;
        if ( *v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v36 = *(_QWORD *)(v35 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v57,
            (struct DXGDEVICE *)v36);
          v37 = *(_QWORD *)(v35 + 16);
          v51 = 0;
          v50 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, v36, 2, v38, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((__int64)v67);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT ***)v35, (struct COREDEVICEACCESS *)v67);
          COREACCESS::~COREACCESS((COREACCESS *)v69);
          COREACCESS::~COREACCESS((COREACCESS *)v68);
          if ( v51 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
          if ( v57[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
        }
        ++v34;
        --v8;
      }
      while ( v8 );
      operator delete[](v40);
    }
    else if ( v7 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v21 = *(_QWORD *)(v7 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v58,
        (struct DXGDEVICE *)v21);
      v22 = *(_QWORD *)(v7 + 16);
      v54 = 0;
      v53 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v21, 2, v23, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v70);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v21, (struct DXGCONTEXT ***)v7, (struct COREDEVICEACCESS *)v70);
      COREACCESS::~COREACCESS((COREACCESS *)v72);
      COREACCESS::~COREACCESS((COREACCESS *)v71);
      if ( v54 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
      if ( v58[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
    }
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v41);
  if ( v60 )
    KeUnstackDetachProcess(&ApcState);
}
