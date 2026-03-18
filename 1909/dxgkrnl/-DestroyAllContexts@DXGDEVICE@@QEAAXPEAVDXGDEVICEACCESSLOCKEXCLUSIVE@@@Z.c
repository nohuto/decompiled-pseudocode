/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0125A44
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C012542C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
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
 */

void __fastcall DXGDEVICE::DestroyAllContexts(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // r13
  _QWORD **v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *i; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned int v13; // r14d
  unsigned int v14; // r11d
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  _BYTE v23[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  char v25; // [rsp+48h] [rbp-B8h]
  _QWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[88]; // [rsp+C8h] [rbp-38h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 2330LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  v5 = (_QWORD **)(this + 45);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 2342LL;
    WdLogEvent5_WdAssertion(v11);
  }
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    v9 = 0LL;
    if ( i != v5 )
      v9 = i;
    if ( !v9 )
      break;
    v12 = 0LL;
    if ( i != v5 )
      v12 = i;
    v13 = *((_DWORD *)v12 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v27,
      (struct _KTHREAD **)Current);
    v14 = *((_DWORD *)Current + 56);
    v15 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < v14 )
    {
      v16 = *((_QWORD *)Current + 26);
      v17 = *(unsigned int *)(v16 + 16LL * (unsigned int)v15 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x60)
        && (v17 & 0x2000) == 0
        && (v17 & 0x1F) != 0 )
      {
        if ( (v17 & 0x1F) == 7 )
        {
          if ( *(_QWORD *)(v16 + 16LL * (unsigned int)v15) )
          {
            v19 = 0LL;
            if ( i != v5 )
              v19 = i;
            if ( (unsigned int)v15 < v14
              && ((v13 >> 25) & 0x60) == (v17 & 0x60)
              && (v17 & 0x2000) == 0
              && (v17 & 0x1F) != 0 )
            {
              *(_DWORD *)(v16 + 16LL * ((v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
            if ( v19 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              if ( _InterlockedExchangeAdd64(v19 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                v20 = v19[2];
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
                  (struct DXGDEVICE *)v20);
                v21 = v19[2];
                v25 = 0;
                v24 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, v20, 2, v22, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((__int64)v28);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 176LL) != 4 )
                  DXGDEVICE::DestroyContext(
                    (DXGDEVICE *)v20,
                    (struct DXGCONTEXT ***)v19,
                    (struct COREDEVICEACCESS *)v28);
                COREACCESS::~COREACCESS((COREACCESS *)v30);
                COREACCESS::~COREACCESS((COREACCESS *)v29);
                if ( v25 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
                if ( v26[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
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
          v18 = WdLogNewEntry5_WdError((v13 >> 25) & 0x60, v17, v15);
          *(_QWORD *)(v18 + 24) = 267LL;
          WdLogEvent5_WdError(v18);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  }
}
