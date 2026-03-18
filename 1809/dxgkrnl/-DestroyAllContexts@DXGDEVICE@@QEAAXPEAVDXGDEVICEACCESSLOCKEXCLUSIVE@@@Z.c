/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00EFC9C
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
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  _QWORD **v6; // r15
  __int64 v7; // rcx
  _QWORD *i; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned int v13; // r14d
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  __int64 v16; // r10
  int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  _BYTE v23[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h]
  char v25; // [rsp+48h] [rbp-59h]
  _QWORD v26[2]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v27[24]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v30[56]; // [rsp+A0h] [rbp-1h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 2284LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Current = DXGPROCESS::GetCurrent();
  v6 = (_QWORD **)((char *)this + 360);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v11 + 24) = 2296LL;
    WdLogEvent5_WdAssertion(v11);
  }
  for ( i = *v6; ; i = (_QWORD *)*i )
  {
    v9 = 0LL;
    if ( i != v6 )
      v9 = i;
    if ( !v9 )
      break;
    v12 = 0LL;
    if ( i != v6 )
      v12 = i;
    v13 = *((_DWORD *)v12 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v27,
      (struct _KTHREAD **)Current);
    v14 = *((_DWORD *)Current + 62);
    v15 = (v13 >> 6) & 0xFFFFFF;
    if ( v15 < v14 )
    {
      v16 = *((_QWORD *)Current + 29);
      v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      {
        if ( (v17 & 0x1F) == 7 )
        {
          if ( *(_QWORD *)(v16 + 16LL * v15) )
          {
            v19 = 0LL;
            if ( i != v6 )
              v19 = i;
            if ( v15 < v14 && ((v13 >> 25) & 0x60) == (v17 & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
              *(_DWORD *)(v16 + 16LL * ((v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
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
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v28);
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
          v18 = WdLogNewEntry5_WdError((v13 >> 25) & 0x60);
          *(_QWORD *)(v18 + 24) = 316LL;
          WdLogEvent5_WdError(v18);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  }
}
