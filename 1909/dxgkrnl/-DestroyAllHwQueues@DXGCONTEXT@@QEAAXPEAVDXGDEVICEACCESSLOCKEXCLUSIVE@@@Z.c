/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C02474F4
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0124EB0 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007110 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247A84 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  volatile signed __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  struct DXGPROCESS *Current; // r13
  _QWORD **v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *i; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r11d
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  char v33[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h]
  char v35; // [rsp+48h] [rbp-B8h]
  char v36[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char v38; // [rsp+60h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v41[24]; // [rsp+88h] [rbp-78h] BYREF
  char v42[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v43[64]; // [rsp+A8h] [rbp-58h] BYREF
  char v44[88]; // [rsp+E8h] [rbp-18h] BYREF
  char v45[8]; // [rsp+140h] [rbp+40h] BYREF
  char v46[64]; // [rsp+148h] [rbp+48h] BYREF
  char v47[88]; // [rsp+188h] [rbp+88h] BYREF

  v3 = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v6 + 24) = 456LL;
    WdLogEvent5_WdAssertion(v6);
  }
  Current = DXGPROCESS::GetCurrent(v4, (__int64)a2);
  v8 = (_QWORD **)((char *)this + 416);
LABEL_5:
  v9 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v9 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v9 + 104)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 468LL;
    WdLogEvent5_WdAssertion(v12);
  }
  for ( i = *v8; ; i = (_QWORD *)*i )
  {
    v14 = 0LL;
    if ( i != v8 )
      v14 = i;
    if ( !v14 )
      break;
    v15 = 0LL;
    if ( i != v8 )
      v15 = i;
    v16 = *((_DWORD *)v15 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v41,
      (struct _KTHREAD **)Current);
    v17 = *((_DWORD *)Current + 56);
    v18 = (v16 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < v17 )
    {
      v19 = *((_QWORD *)Current + 26);
      v20 = *(unsigned int *)(v19 + 16LL * (unsigned int)v18 + 8);
      if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * (unsigned int)v18 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        if ( (v20 & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v19 + 16LL * (unsigned int)v18) )
          {
            if ( i != v8 )
              v3 = i;
            if ( (unsigned int)v18 < v17
              && ((v16 >> 25) & 0x60) == (v20 & 0x60)
              && (v20 & 0x2000) == 0
              && (v20 & 0x1F) != 0 )
            {
              *(_DWORD *)(v19 + 16LL * ((v16 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
            if ( v3 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v24 = _InterlockedDecrement64(v3 + 9);
              if ( v24 < 0 )
              {
                v25 = WdLogNewEntry5_WdAssertion(v23, v22);
                *(_QWORD *)(v25 + 24) = 101LL;
                WdLogEvent5_WdAssertion(v25);
              }
              if ( v24 )
              {
                v3 = 0LL;
              }
              else
              {
                v26 = *((_QWORD *)v3 + 2);
                v27 = *(struct DXGDEVICE **)(v26 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39, v27);
                v28 = *((_QWORD *)v27 + 2);
                v35 = 0;
                v34 = *(_QWORD *)(v28 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v27, 2, v29, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((__int64)v42);
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 176LL) != 4 )
                  DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v26, (struct DXGHWQUEUE *)v3, (struct COREDEVICEACCESS *)v42);
                COREACCESS::~COREACCESS((COREACCESS *)v44);
                COREACCESS::~COREACCESS((COREACCESS *)v43);
                v3 = 0LL;
                if ( v35 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
                if ( v39[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v30 = *(_QWORD *)(v26 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
                    (struct DXGDEVICE *)v30);
                  v31 = *(_QWORD *)(v26 + 16);
                  v38 = 0;
                  v37 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v30, 2, v32, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((__int64)v45);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 176LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v30,
                      (struct DXGCONTEXT ***)v26,
                      (struct COREDEVICEACCESS *)v45);
                  COREACCESS::~COREACCESS((COREACCESS *)v47);
                  COREACCESS::~COREACCESS((COREACCESS *)v46);
                  if ( v38 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
                  if ( v40[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v30 + 16), (struct DXGDEVICE *)v30);
                }
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v21 = WdLogNewEntry5_WdError((v16 >> 25) & 0x60, v20, v18);
          *(_QWORD *)(v21 + 24) = 267LL;
          WdLogEvent5_WdError(v21);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  }
}
