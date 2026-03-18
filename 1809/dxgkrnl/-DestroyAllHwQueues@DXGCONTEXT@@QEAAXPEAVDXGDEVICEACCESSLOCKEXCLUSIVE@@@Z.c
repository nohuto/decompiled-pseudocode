/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0213350
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00ECAF0 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
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
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02138C8 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  volatile signed __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGPROCESS *Current; // r13
  _QWORD **v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *i; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r11d
  unsigned int v18; // r8d
  __int64 v19; // r10
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  struct DXGDEVICE *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  char v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h]
  char v34; // [rsp+40h] [rbp-C0h]
  char v35[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  char v37; // [rsp+58h] [rbp-A8h]
  _QWORD v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[32]; // [rsp+80h] [rbp-80h] BYREF
  char v41[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v42[32]; // [rsp+A8h] [rbp-58h] BYREF
  char v43[56]; // [rsp+C8h] [rbp-38h] BYREF
  char v44[8]; // [rsp+100h] [rbp+0h] BYREF
  char v45[32]; // [rsp+108h] [rbp+8h] BYREF
  char v46[56]; // [rsp+128h] [rbp+28h] BYREF

  v3 = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 456LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent();
  v9 = (_QWORD **)((char *)this + 400);
LABEL_5:
  v10 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v10 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v10 + 104)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 468LL;
    WdLogEvent5_WdAssertion(v12);
  }
  for ( i = *v9; ; i = (_QWORD *)*i )
  {
    v14 = 0LL;
    if ( i != v9 )
      v14 = i;
    if ( !v14 )
      break;
    v15 = 0LL;
    if ( i != v9 )
      v15 = i;
    v16 = *((_DWORD *)v15 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v40,
      (struct _KTHREAD **)Current);
    v17 = *((_DWORD *)Current + 62);
    v18 = (v16 >> 6) & 0xFFFFFF;
    if ( v18 < v17 )
    {
      v19 = *((_QWORD *)Current + 29);
      v20 = *(_DWORD *)(v19 + 16LL * v18 + 8);
      if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
      {
        if ( (v20 & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v19 + 16LL * v18) )
          {
            if ( i != v9 )
              v3 = i;
            if ( v18 < v17 && ((v16 >> 25) & 0x60) == (v20 & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
              *(_DWORD *)(v19 + 16LL * ((v16 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
            if ( v3 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v23 = _InterlockedDecrement64(v3 + 9);
              if ( v23 < 0 )
              {
                v24 = WdLogNewEntry5_WdAssertion(v22);
                *(_QWORD *)(v24 + 24) = 96LL;
                WdLogEvent5_WdAssertion(v24);
              }
              if ( v23 )
              {
                v3 = 0LL;
              }
              else
              {
                v25 = *((_QWORD *)v3 + 2);
                v26 = *(struct DXGDEVICE **)(v25 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v26);
                v27 = *((_QWORD *)v26 + 2);
                v34 = 0;
                v33 = *(_QWORD *)(v27 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v26, 2, v28, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v41);
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 176LL) != 4 )
                  DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v25, (PVOID)v3, (struct COREDEVICEACCESS *)v41);
                COREACCESS::~COREACCESS((COREACCESS *)v43);
                COREACCESS::~COREACCESS((COREACCESS *)v42);
                v3 = 0LL;
                if ( v34 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
                if ( v38[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v29 = *(_QWORD *)(v25 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v39,
                    (struct DXGDEVICE *)v29);
                  v30 = *(_QWORD *)(v25 + 16);
                  v37 = 0;
                  v36 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v29, 2, v31, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v44);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 176LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v29,
                      (struct DXGCONTEXT ***)v25,
                      (struct COREDEVICEACCESS *)v44);
                  COREACCESS::~COREACCESS((COREACCESS *)v46);
                  COREACCESS::~COREACCESS((COREACCESS *)v45);
                  if ( v37 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
                  if ( v39[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v29 + 16), (struct DXGDEVICE *)v29);
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
          v21 = WdLogNewEntry5_WdError((v16 >> 25) & 0x60);
          *(_QWORD *)(v21 + 24) = 316LL;
          WdLogEvent5_WdError(v21);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  }
}
