/*
 * XREFs of ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0260160
 * Callers:
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C003DAA4 (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C02602D4 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD(DXGTRACKEDWORKLOAD *this)
{
  DXGPROCESS *Current; // rax
  __int64 i; // rsi
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE v8[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v9; // [rsp+38h] [rbp-41h]
  char v10; // [rsp+40h] [rbp-39h]
  _QWORD v11[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v12[8]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v14[56]; // [rsp+88h] [rbp+Fh] BYREF

  DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESS::FreeResourceHandleNoRefSafe(Current, *((_DWORD *)this + 10));
    *((_DWORD *)this + 10) = 0;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 268); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + i + 70);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v11,
        (struct DXGDEVICE *)v5);
      v6 = *(_QWORD *)(v4 + 16);
      v10 = 0;
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v12, v5, 2, v7, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v12);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v5, (struct DXGCONTEXT ***)v4, (struct COREDEVICEACCESS *)v12);
      COREACCESS::~COREACCESS((COREACCESS *)v14);
      COREACCESS::~COREACCESS((COREACCESS *)v13);
      if ( v10 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
      if ( v11[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    }
  }
  operator delete[](*((void **)this + 28));
  operator delete[](*((void **)this + 19));
  operator delete[](*((void **)this + 10));
  *((_QWORD *)this + 2) = 0LL;
}
