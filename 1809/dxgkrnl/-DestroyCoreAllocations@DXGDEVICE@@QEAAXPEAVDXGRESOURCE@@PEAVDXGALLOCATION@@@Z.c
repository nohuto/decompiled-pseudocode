/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C01D8500
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01FE00C (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C01FFA58 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001179C (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00138D8 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C002142C (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D01C0 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F9350 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00F9544 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013F99C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013FE84 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C01C94CC (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01D997C (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        const GUID *a3,
        struct DXGALLOCATION *a4)
{
  const GUID *v4; // r15
  DXGDEVICE *v6; // rsi
  HANDLE *v7; // r12
  GUID *v8; // rbx
  bool i; // zf
  __int64 v10; // rax
  GUID *v11; // r13
  unsigned int v12; // edx
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  __int64 v15; // r8
  struct COREDEVICEACCESS *v16; // r9
  __int64 v17; // rdx
  void *v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  int v20; // ebx
  void *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const GUID *v25; // r13
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGALLOCATION *v29; // [rsp+30h] [rbp-D0h] BYREF
  _DXGKARG_CLOSEALLOCATION v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  char v33; // [rsp+70h] [rbp-90h]
  _BYTE v34[24]; // [rsp+78h] [rbp-88h] BYREF
  char v35; // [rsp+90h] [rbp-70h] BYREF

  v30.NumAllocations = 0;
  v4 = a3;
  v32 = 0LL;
  v33 = 0;
  v6 = this;
  if ( !a2
    || (DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v32, (struct DXGRESOURCE *)((char *)a2 + 80), 1),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32),
        (v7 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v7 = (HANDLE *)&v35;
  }
  v8 = (GUID *)v4;
  for ( i = v4 == 0LL; ; i = v11 == 0LL )
  {
    v29 = (struct DXGALLOCATION *)v8;
    if ( i )
      break;
    v10 = *(_QWORD *)&v8[3].Data1;
    v11 = *(GUID **)&v8[4].Data1;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 4);
      if ( (v12 & 0x2000) != 0 || (v12 & 1) != 0 || (v12 & 2) != 0 || (v12 & 8) != 0 )
      {
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)v6,
          (v12 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v8,
          a4);
        v10 = *(_QWORD *)&v8[3].Data1;
      }
      if ( v10 )
      {
        v13 = *(_DWORD *)(v10 + 4);
        if ( (v13 & 0x2000) != 0 )
        {
          if ( *(_QWORD *)v8[1].Data4 )
          {
            v14 = (v13 >> 6) & 0xF;
            if ( DXGDEVICE::IsDirectFlipAllocationPinned(v6, (const struct DXGALLOCATION *)v8) )
            {
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL)) >= 2200 )
                DXGDEVICE::UnpinDirectFlipAllocation(v6, v14, v15, &v29, 0LL);
              else
                DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v6, v14, v15, v16);
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)v8[4].Data4 & 0x80000) != 0 )
      UnlockParavirtualizedAllocationOnGuest((struct DXGALLOCATION *)v8, 0);
    v17 = *(_QWORD *)v8[1].Data4;
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, GUID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 544LL)
                                                                          + 8LL)
                                                              + 160LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 552LL),
        v17,
        v8 + 5,
        0LL);
      *(_DWORD *)v8[4].Data4 |= 1u;
      *(_QWORD *)v8[1].Data4 = 0LL;
    }
    this = *(DXGDEVICE **)&v8[2].Data1;
    if ( this )
    {
      v7[v30.NumAllocations++] = this;
      *(_QWORD *)&v8[2].Data1 = 0LL;
    }
    v8 = v11;
  }
  if ( v30.NumAllocations )
  {
    v18 = (void *)*((_QWORD *)v6 + 59);
    v19 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
    v30.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v19, v18, (const GUID *)&v30);
  }
  v20 = 1;
  v21 = 0LL;
  if ( a2 )
  {
    this = (DXGDEVICE *)*((_QWORD *)a2 + 7);
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v22 = *((_QWORD *)this + 18);
      if ( v22 )
      {
        if ( *(DXGDEVICE **)(v22 + 72) == v6 )
        {
          i = (*(_DWORD *)(v22 + 64))-- == 1;
          if ( i )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v34,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 72LL) = 0LL;
            if ( v34[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
          }
        }
      }
      v23 = *((_QWORD *)a2 + 3);
      a3 = 0LL;
      while ( v23 )
      {
        v23 = *(_QWORD *)(v23 + 64);
        a3 = (const GUID *)(unsigned int)((_DWORD)a3 + 1);
      }
      this = (DXGDEVICE *)*((_QWORD *)a2 + 7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 15, 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy(this, v7, (unsigned int)a3);
      *((_QWORD *)a2 + 7) = 0LL;
      v20 = 0;
    }
    else
    {
      v21 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  v31.NumAllocations = 0;
  if ( v4 )
  {
    do
    {
      v24 = *(_QWORD *)&v4[3].Data1;
      v25 = *(const GUID **)&v4[4].Data1;
      if ( v24 )
      {
        if ( !v20 )
          goto LABEL_50;
        v26 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v24 + 8);
        if ( v26 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 544LL),
            *((struct VIDMM_DEVICE **)v6 + 81),
            0LL,
            v26);
          *(_QWORD *)(*(_QWORD *)&v4[3].Data1 + 8LL) = 0LL;
          v24 = *(_QWORD *)&v4[3].Data1;
        }
        this = *(DXGDEVICE **)(v24 + 16);
        if ( this )
        {
          v7[v31.NumAllocations++] = this;
          *(_QWORD *)(*(_QWORD *)&v4[3].Data1 + 16LL) = 0LL;
        }
      }
      else if ( !v20 )
      {
LABEL_50:
        if ( !a2 )
        {
          v27 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v27 + 24) = 715LL;
          WdLogEvent5_WdAssertion(v27);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v28 + 24) = 716LL;
          WdLogEvent5_WdAssertion(v28);
        }
      }
      v4 = v25;
    }
    while ( v25 );
  }
  if ( v20 )
  {
    v31.hResource = v21;
    v31.Flags.Value = a2 != 0LL;
    if ( v31.NumAllocations )
    {
      v31.pAllocationList = v7;
LABEL_60:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v31, a3);
      goto LABEL_61;
    }
    v31.pAllocationList = 0LL;
    if ( v21 )
      goto LABEL_60;
  }
LABEL_61:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v32);
}
