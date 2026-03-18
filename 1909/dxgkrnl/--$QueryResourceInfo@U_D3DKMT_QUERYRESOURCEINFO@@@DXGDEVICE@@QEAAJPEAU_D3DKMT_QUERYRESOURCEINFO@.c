/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F3EC4
 * Callers:
 *     DxgkQueryResourceInfo @ 0x1C00F21F0 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C020CC20 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C025A24C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C025A800 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000784C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0023404 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F364C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F3E9C (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdi
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  bool v28; // cf
  ADAPTER_RENDER *v29; // rbx
  _QWORD *v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // eax
  const GUID *v37; // r8
  int StandardAllocationDriverData; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v44; // rax
  volatile signed __int32 *v46; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v47[16]; // [rsp+28h] [rbp-51h] BYREF
  DXGPUSHLOCK *v48[3]; // [rsp+38h] [rbp-41h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v49; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v50[4]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v51; // [rsp+90h] [rbp+17h]

  v3 = 0;
  v4 = (unsigned int)a3;
  if ( !(_DWORD)a3 )
  {
    v44 = WdLogNewEntry5_WdError(a1, a2, a3);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v44 + 24) = a1;
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    return (unsigned int)v4;
  }
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGGLOBAL *)((char *)Global + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  v10 = DXGGLOBAL::GetGlobal(v9, v8);
  CurrentThread = KeGetCurrentThread();
  v14 = v10;
  if ( *((struct _KTHREAD **)v10 + 19) != CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(CurrentThread, v11);
    *(_QWORD *)(v15 + 24) = 1029LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)v14 + 48) )
    goto LABEL_10;
  v12 = *((_QWORD *)v14 + 22);
  v17 = 2LL * (unsigned int)v16;
  v18 = (unsigned int)v16;
  v16 = ((unsigned int)v4 >> 25) & 0x60;
  v11 = *(unsigned int *)(v12 + 8 * v17 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v12 + 8 * v17 + 8) & 0x60)
    || (v11 & 0x2000) != 0
    || (v11 & 0x1F) == 0 )
  {
    goto LABEL_10;
  }
  v19 = 2 * v18;
  v11 &= 0x1Fu;
  if ( (_BYTE)v11 != 2 )
  {
    v20 = WdLogNewEntry5_WdError(v16, v11, v12);
    *(_QWORD *)(v20 + 24) = 267LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_10;
  }
  v22 = *(_QWORD *)(v12 + 8 * v19);
  if ( v22 )
  {
    _m_prefetchw((const void *)(v22 + 60));
    v23 = *(_DWORD *)(v22 + 60);
    do
    {
      if ( !v23 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v11, v12);
        v21[6] = 7755LL;
        goto LABEL_11;
      }
      v16 = (unsigned int)(v23 + 1);
      v24 = v23;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 60), v16, v23);
    }
    while ( v24 != v23 );
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v47);
    v28 = (_DWORD)v4 != 0;
    v29 = *(ADAPTER_RENDER **)(a1 + 16);
    v46 = (volatile signed __int32 *)(v22 & -(__int64)v28);
    if ( *(ADAPTER_RENDER **)(v22 + 72) == v29 && *(_QWORD *)(v22 + 88) == *(_QWORD *)(a1 + 1728) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48, (struct _KTHREAD **)(v22 + 32), 0);
      DXGAUTOPUSHLOCK::AcquireExclusive(v48);
      a2[5] = 0;
      v30 = *(_QWORD **)(v22 + 128);
      if ( v30 != (_QWORD *)(v22 + 128) )
      {
        v31 = 0;
        while ( 1 )
        {
          v32 = v31;
          v33 = v31 + *((_DWORD *)v30 - 2);
          v31 = -1;
          if ( (unsigned int)v33 >= (unsigned int)v32 )
            v31 = v33;
          LODWORD(v4) = (unsigned int)v33 < (unsigned int)v32 ? 0xC0000095 : 0;
          a2[5] = v31;
          v3 = v4;
          if ( (unsigned int)v33 < (unsigned int)v32 )
            break;
          v30 = (_QWORD *)*v30;
          if ( v30 == (_QWORD *)(v22 + 128) )
            goto LABEL_25;
        }
        v34 = WdLogNewEntry5_WdWarning(v33, v32, v30);
        *(_QWORD *)(v34 + 32) = (int)v4;
        *(_QWORD *)(v34 + 24) = a1;
        WdLogEvent5_WdWarning(v34);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
        goto LABEL_38;
      }
LABEL_25:
      a2[6] = *(_DWORD *)(v22 + 120);
      a2[7] = *(_DWORD *)(v22 + 124);
      a2[4] = *(_DWORD *)(v22 + 104);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(v22 + 12) & 0x20) != 0 )
    {
      v50[2] = *(_DWORD *)(v22 + 208);
      v50[0] = *(_DWORD *)(v22 + 200);
      v36 = *(_DWORD *)(v22 + 204);
      v51 = 0LL;
      v50[1] = v36;
      v50[3] = 7;
      memset(&v49, 0, sizeof(v49));
      v49.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v49.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v50;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v29, &v49, v37);
      v4 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
LABEL_35:
        v35[3] = a1;
        v35[4] = v4;
        WdLogEvent5_WdError(v35);
LABEL_38:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v46);
        return (unsigned int)v4;
      }
      AllocationPrivateDriverDataSize = v49.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v49.ResourcePrivateDriverDataSize;
      if ( v49.AllocationPrivateDriverDataSize || v49.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v22 + 124);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v22 + 104);
        a2[5] = AllocationPrivateDriverDataSize;
LABEL_37:
        LODWORD(v4) = v3;
        goto LABEL_38;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdError(
                        v49.ResourcePrivateDriverDataSize,
                        v49.AllocationPrivateDriverDataSize,
                        v41);
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
      v35[5] = 1LL;
    }
    v4 = -1073741811LL;
    goto LABEL_35;
  }
LABEL_10:
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v11, v12);
LABEL_11:
  v21[4] = v4;
  v21[3] = a1;
  LODWORD(v4) = -1073741811;
  v21[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v47);
  return (unsigned int)v4;
}
