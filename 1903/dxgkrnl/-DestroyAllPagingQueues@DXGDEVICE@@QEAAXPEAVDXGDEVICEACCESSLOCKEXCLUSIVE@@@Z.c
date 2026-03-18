/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0122E20
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0122AAC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007044 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120D00 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // r13
  _QWORD **v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *i; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rdx
  volatile signed __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+40h] [rbp-C0h]
  _QWORD v30[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-A0h] BYREF
  char v32[8]; // [rsp+80h] [rbp-80h] BYREF
  char v33[64]; // [rsp+88h] [rbp-78h] BYREF
  char v34[88]; // [rsp+C8h] [rbp-38h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v23 + 24) = 2397LL;
    WdLogEvent5_WdAssertion(v23);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  v5 = (_QWORD **)(this + 49);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v24 + 24) = 2409LL;
    WdLogEvent5_WdAssertion(v24);
  }
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    v9 = 0LL;
    if ( i != v5 )
      v9 = i;
    if ( !v9 )
      break;
    v10 = 0LL;
    if ( i != v5 )
      v10 = i;
    v11 = *((_DWORD *)v10 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v31,
      (struct _KTHREAD **)Current);
    v12 = *((_DWORD *)Current + 56);
    v13 = (v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < v12 )
    {
      v14 = *((_QWORD *)Current + 26);
      v15 = *(unsigned int *)(v14 + 16LL * (unsigned int)v13 + 8);
      if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        if ( (v15 & 0x1F) == 0xA )
        {
          if ( *(_QWORD *)(v14 + 16LL * (unsigned int)v13) )
          {
            v16 = 0LL;
            if ( i != v5 )
              v16 = i;
            if ( (unsigned int)v13 < v12
              && ((v11 >> 25) & 0x60) == (v15 & 0x60)
              && (v15 & 0x2000) == 0
              && (v15 & 0x1F) != 0 )
            {
              *(_DWORD *)(v14 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
            if ( v16 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v19 = _InterlockedDecrement64(v16 + 8);
              if ( v19 < 0 )
              {
                v26 = WdLogNewEntry5_WdAssertion(v18, v17);
                *(_QWORD *)(v26 + 24) = 67LL;
                WdLogEvent5_WdAssertion(v26);
              }
              if ( !v19 )
              {
                v20 = *((_QWORD *)v16 + 2);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v30,
                  (struct DXGDEVICE *)v20);
                v21 = *(_QWORD *)(v20 + 16);
                v29 = 0;
                v28 = *(_QWORD *)(v21 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, v20, 2, v22, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((__int64)v32);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 176LL) != 4 )
                  DXGDEVICE::DestroyPagingQueue(
                    (PERESOURCE *)v20,
                    (struct DXGPAGINGQUEUE *)v16,
                    (struct COREDEVICEACCESS *)v32);
                COREACCESS::~COREACCESS((COREACCESS *)v34);
                COREACCESS::~COREACCESS((COREACCESS *)v33);
                if ( v29 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
                if ( v30[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v25 = WdLogNewEntry5_WdError((v11 >> 25) & 0x60, v15, v13);
          *(_QWORD *)(v25 + 24) = 267LL;
          WdLogEvent5_WdError(v25);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  }
}
