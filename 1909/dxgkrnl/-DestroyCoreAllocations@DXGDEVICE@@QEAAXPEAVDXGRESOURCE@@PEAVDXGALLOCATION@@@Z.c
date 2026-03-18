/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0206F98
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C022E910 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02308B0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019FE0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0023ED8 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00E5684 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F121C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00F1470 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014DC2C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01540A0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01545A8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0208470 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION **a3,
        struct DXGALLOCATION *a4)
{
  struct DXGALLOCATION *v4; // r13
  HANDLE *v8; // r12
  struct DXGALLOCATION *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // rdx
  void *v16; // rcx
  struct _KTHREAD *v17; // rdx
  ADAPTER_RENDER *v18; // rcx
  int v19; // ebx
  struct DXGALLOCATION *v20; // r14
  __int64 v21; // rax
  __int64 v23; // rax
  unsigned int v24; // r8d
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rdx
  void *v27; // rcx
  const GUID *v28; // r8
  struct DXGALLOCATION *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  UINT v32; // eax
  struct DXGALLOCATION *v33; // [rsp+30h] [rbp-D0h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v34; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGALLOCATION *v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_DESTROYALLOCATION v38; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[16]; // [rsp+80h] [rbp-80h] BYREF
  char v40; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0LL;
  *(_QWORD *)&v34.NumAllocations = 0LL;
  v34.pOpenHandleList = 0LL;
  v36 = 0LL;
  v37 = 0;
  if ( !a2
    || (DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v36, (struct DXGRESOURCE *)((char *)a2 + 80), 1),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v36),
        (v8 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v8 = (HANDLE *)&v40;
  }
  v9 = (struct DXGALLOCATION *)a3;
  v33 = (struct DXGALLOCATION *)a3;
  if ( a3 )
  {
    do
    {
      v10 = *((_QWORD *)v9 + 6);
      v4 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 4);
        if ( (v11 & 0x2000) != 0 || (v11 & 1) != 0 || (v11 & 2) != 0 || (v11 & 8) != 0 )
        {
          DXGDEVICE::TestAndSetDisplayedPrimary(this, (v11 >> 6) & 0xF, v9, a4);
          v10 = *((_QWORD *)v9 + 6);
        }
        if ( v10 )
        {
          v12 = *(_DWORD *)(v10 + 4);
          if ( (v12 & 0x2000) != 0 )
          {
            if ( *((_QWORD *)v9 + 3) )
            {
              v13 = (v12 >> 6) & 0xF;
              if ( DXGDEVICE::IsDirectFlipAllocationPinned((DXGDEVICE *)this, v9) )
              {
                if ( *(int *)(*((_QWORD *)this[2] + 2) + 2452LL) >= 2200 )
                  DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v13, v14, &v33, 0LL);
                else
                  DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)this, v13, v14, a4);
              }
            }
          }
        }
      }
      if ( (*((_DWORD *)v9 + 18) & 0x80000) != 0 )
        UnlockParavirtualizedAllocationOnGuest(v9, 0);
      v15 = *((_QWORD *)v9 + 3);
      if ( v15 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL) + 160LL))(
          *((_QWORD *)this[2] + 69),
          v15,
          (__int64)v9 + 80,
          0LL);
        *((_DWORD *)v9 + 18) |= 1u;
        *((_QWORD *)v9 + 3) = 0LL;
      }
      v16 = (void *)*((_QWORD *)v9 + 4);
      if ( v16 )
      {
        v8[v34.NumAllocations++] = v16;
        *((_QWORD *)v9 + 4) = 0LL;
      }
      v9 = v4;
      v33 = v4;
    }
    while ( v4 );
  }
  if ( v34.NumAllocations > (unsigned int)v4 )
  {
    v17 = this[59];
    v18 = this[2];
    v34.pOpenHandleList = v8;
    ADAPTER_RENDER::DdiCloseAllocation(v18, v17, (const GUID *)&v34);
  }
  v35 = v4;
  v19 = 1;
  v20 = v4;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v21 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL);
      if ( v21 )
      {
        if ( *(struct _KTHREAD ***)(v21 + 72) == this && (*(_DWORD *)(v21 + 64))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v39,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 72LL) = v4;
          if ( v39[8] != (_BYTE)v4 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39);
        }
      }
      v23 = *((_QWORD *)a2 + 3);
      v24 = (unsigned int)v4;
      while ( v23 )
      {
        v23 = *(_QWORD *)(v23 + 64);
        ++v24;
      }
      v25 = (volatile signed __int32 *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd(v25 + 15, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v25, v8, v24);
      *((_QWORD *)a2 + 7) = v4;
      v19 = (int)v4;
    }
    else
    {
      v20 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 7);
      v35 = v20;
    }
  }
  memset(&v38, 0, sizeof(v38));
  if ( a3 )
  {
    while ( 1 )
    {
      v29 = a3[6];
      v4 = a3[8];
      if ( v29 )
      {
        if ( !v19 )
          goto LABEL_49;
        v28 = (const GUID *)*((_QWORD *)v29 + 1);
        if ( v28 )
        {
          (*(void (__fastcall **)(struct _KTHREAD *, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL) + 128LL))(
            this[81],
            0LL);
          *((_QWORD *)a3[6] + 1) = 0LL;
          v29 = a3[6];
        }
        v27 = (void *)*((_QWORD *)v29 + 2);
        if ( v27 )
        {
          v8[v38.NumAllocations++] = v27;
          *((_QWORD *)a3[6] + 2) = 0LL;
        }
      }
      else if ( !v19 )
      {
LABEL_49:
        if ( !a2 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v30 + 24) = 716LL;
          WdLogEvent5_WdAssertion(v30);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v31 + 24) = 717LL;
          WdLogEvent5_WdAssertion(v31);
        }
      }
      a3 = (struct DXGALLOCATION **)v4;
      if ( !v4 )
      {
        v20 = v35;
        break;
      }
    }
  }
  if ( v19 )
  {
    v38.hResource = v20;
    v32 = (unsigned int)v4;
    if ( a2 )
      v32 = 1;
    v38.Flags.Value = v32;
    if ( v38.NumAllocations )
    {
      v38.pAllocationList = v8;
LABEL_62:
      ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v38, v28);
      goto LABEL_63;
    }
    v38.pAllocationList = (const HANDLE *)v4;
    if ( v20 )
      goto LABEL_62;
  }
LABEL_63:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v36);
}
