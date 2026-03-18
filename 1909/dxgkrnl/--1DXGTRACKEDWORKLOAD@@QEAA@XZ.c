/*
 * XREFs of ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0297150
 * Callers:
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049E98 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000CA50 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0297414 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD(DXGTRACKEDWORKLOAD *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGPROCESS *Current; // rax
  __int64 i; // rsi
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  _BYTE v10[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  char v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v16[88]; // [rsp+A8h] [rbp-58h] BYREF

  DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(this);
  if ( *((_DWORD *)this + 16) )
  {
    Current = DXGPROCESS::GetCurrent(v3, v2);
    DXGPROCESS::FreeHandleSafe(Current, *((_DWORD *)this + 16));
    *((_DWORD *)this + 16) = 0;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 272); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + i + 72);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v13,
        (struct DXGDEVICE *)v7);
      v8 = *(_QWORD *)(v6 + 16);
      v12 = 0;
      v11 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v14, v7, 2, v9, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v14);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v7, (struct DXGCONTEXT ***)v6, (struct COREDEVICEACCESS *)v14);
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      if ( v12 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      if ( v13[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v7 + 16), (struct DXGDEVICE *)v7);
    }
  }
  operator delete[](*((void **)this + 31));
  operator delete[](*((void **)this + 22));
  operator delete[](*((void **)this + 13));
  *((_QWORD *)this + 2) = 0LL;
}
