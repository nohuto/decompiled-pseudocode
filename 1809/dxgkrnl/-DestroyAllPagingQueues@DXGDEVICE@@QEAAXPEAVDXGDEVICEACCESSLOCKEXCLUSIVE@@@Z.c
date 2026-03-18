/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00EFA28
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B8B0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFF40 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  _QWORD **v6; // r15
  __int64 v7; // rcx
  _QWORD *i; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  __int64 v14; // r10
  int v15; // edx
  volatile signed __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v27; // [rsp+40h] [rbp-61h]
  char v28; // [rsp+48h] [rbp-59h]
  _QWORD v29[2]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v30[24]; // [rsp+60h] [rbp-41h] BYREF
  char v31[8]; // [rsp+78h] [rbp-29h] BYREF
  char v32[32]; // [rsp+80h] [rbp-21h] BYREF
  char v33[56]; // [rsp+A0h] [rbp-1h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v22 + 24) = 2351LL;
    WdLogEvent5_WdAssertion(v22);
  }
  Current = DXGPROCESS::GetCurrent();
  v6 = (_QWORD **)((char *)this + 392);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v23 + 24) = 2363LL;
    WdLogEvent5_WdAssertion(v23);
  }
  for ( i = *v6; ; i = (_QWORD *)*i )
  {
    v9 = 0LL;
    if ( i != v6 )
      v9 = i;
    if ( !v9 )
      break;
    v10 = 0LL;
    if ( i != v6 )
      v10 = i;
    v11 = *((_DWORD *)v10 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v30,
      (struct _KTHREAD **)Current);
    v12 = *((_DWORD *)Current + 62);
    v13 = (v11 >> 6) & 0xFFFFFF;
    if ( v13 < v12 )
    {
      v14 = *((_QWORD *)Current + 29);
      v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
      if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      {
        if ( (v15 & 0x1F) == 0xA )
        {
          if ( *(_QWORD *)(v14 + 16LL * v13) )
          {
            v16 = 0LL;
            if ( i != v6 )
              v16 = i;
            if ( v13 < v12 && ((v11 >> 25) & 0x60) == (v15 & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
              *(_DWORD *)(v14 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
            if ( v16 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v18 = _InterlockedDecrement64(v16 + 8);
              if ( v18 < 0 )
              {
                v25 = WdLogNewEntry5_WdAssertion(v17);
                *(_QWORD *)(v25 + 24) = 67LL;
                WdLogEvent5_WdAssertion(v25);
              }
              if ( !v18 )
              {
                v19 = *((_QWORD *)v16 + 2);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v29,
                  (struct DXGDEVICE *)v19);
                v20 = *(_QWORD *)(v19 + 16);
                v28 = 0;
                v27 = *(_QWORD *)(v20 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v19, 2, v21, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v31);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 176LL) != 4 )
                  DXGDEVICE::DestroyPagingQueue(
                    (DXGDEVICE *)v19,
                    (struct DXGPAGINGQUEUE *)v16,
                    (struct COREDEVICEACCESS *)v31);
                COREACCESS::~COREACCESS((COREACCESS *)v33);
                COREACCESS::~COREACCESS((COREACCESS *)v32);
                if ( v28 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
                if ( v29[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v24 = WdLogNewEntry5_WdError((v11 >> 25) & 0x60);
          *(_QWORD *)(v24 + 24) = 316LL;
          WdLogEvent5_WdError(v24);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  }
}
