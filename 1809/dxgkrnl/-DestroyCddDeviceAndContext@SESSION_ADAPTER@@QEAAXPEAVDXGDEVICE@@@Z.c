/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0139320
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01392AC (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C013BA00 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02138C8 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
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
  _QWORD *v24; // r13
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
  _QWORD v58[3]; // [rsp+100h] [rbp-8h] BYREF
  char v59[8]; // [rsp+118h] [rbp+10h] BYREF
  char v60[32]; // [rsp+120h] [rbp+18h] BYREF
  char v61[56]; // [rsp+140h] [rbp+38h] BYREF
  char v62[8]; // [rsp+178h] [rbp+70h] BYREF
  char v63[32]; // [rsp+180h] [rbp+78h] BYREF
  char v64[56]; // [rsp+1A0h] [rbp+98h] BYREF
  char v65[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v66[32]; // [rsp+1E0h] [rbp+D8h] BYREF
  char v67[56]; // [rsp+200h] [rbp+F8h] BYREF
  char v68[8]; // [rsp+238h] [rbp+130h] BYREF
  char v69[32]; // [rsp+240h] [rbp+138h] BYREF
  char v70[56]; // [rsp+260h] [rbp+158h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+298h] [rbp+190h] BYREF
  char v72; // [rsp+2C8h] [rbp+1C0h]

  v2 = *(_QWORD *)this;
  v72 = 0;
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
    ExAcquirePushLockExclusiveEx(v6 + 184, 0LL);
    *(_QWORD *)(v6 + 192) = KeGetCurrentThread();
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
    *(_QWORD *)(v6 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 184, 0LL);
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
            v24 = *(_QWORD **)v18;
            v25 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v18 + 72LL));
            if ( v25 < 0 )
            {
              v26 = WdLogNewEntry5_WdAssertion(v16);
              *(_QWORD *)(v26 + 24) = 96LL;
              WdLogEvent5_WdAssertion(v26);
            }
            if ( !v25 )
            {
              v27 = v24[2];
              v28 = *(struct DXGDEVICE **)(v27 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v28);
              v29 = *((_QWORD *)v28 + 2);
              v45 = 0;
              v44[1] = *(_QWORD *)(v29 + 16);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v28, 2, v30, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v59);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL) + 176LL) != 4 )
                DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v27, v24, (struct COREDEVICEACCESS *)v59);
              COREACCESS::~COREACCESS((COREACCESS *)v61);
              COREACCESS::~COREACCESS((COREACCESS *)v60);
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
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, v31, 2, v33, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v62);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 176LL) != 4 )
                  DXGDEVICE::DestroyContext(
                    (DXGDEVICE *)v31,
                    (struct DXGCONTEXT ***)v27,
                    (struct COREDEVICEACCESS *)v62);
                COREACCESS::~COREACCESS((COREACCESS *)v64);
                COREACCESS::~COREACCESS((COREACCESS *)v63);
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
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, v36, 2, v38, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v65);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT ***)v35, (struct COREDEVICEACCESS *)v65);
          COREACCESS::~COREACCESS((COREACCESS *)v67);
          COREACCESS::~COREACCESS((COREACCESS *)v66);
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
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, v21, 2, v23, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v68);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v21, (struct DXGCONTEXT ***)v7, (struct COREDEVICEACCESS *)v68);
      COREACCESS::~COREACCESS((COREACCESS *)v70);
      COREACCESS::~COREACCESS((COREACCESS *)v69);
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
  if ( v72 )
    KeUnstackDetachProcess(&ApcState);
}
