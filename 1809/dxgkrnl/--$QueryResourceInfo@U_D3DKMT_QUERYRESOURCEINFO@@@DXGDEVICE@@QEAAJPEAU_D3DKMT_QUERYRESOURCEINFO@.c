/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F2090
 * Callers:
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C00B22D0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C00F3940 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0225358 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0225910 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0020824 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F239C (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F88FC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rax
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // rcx
  bool v18; // cf
  ADAPTER_RENDER *v19; // r15
  _QWORD *v20; // r9
  unsigned int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  int StandardAllocationDriverData; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rax
  int v31; // ebx
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v35; // rax
  __int64 v36; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v37[16]; // [rsp+28h] [rbp-41h] BYREF
  DXGPUSHLOCK *v38[3]; // [rsp+38h] [rbp-31h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v39; // [rsp+50h] [rbp-19h] BYREF
  __int64 v40; // [rsp+80h] [rbp+17h] BYREF
  __int64 v41; // [rsp+88h] [rbp+1Fh]
  __int64 v42; // [rsp+90h] [rbp+27h]

  LODWORD(v3) = 0;
  v4 = a3;
  if ( a3 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    Global = DXGGLOBAL::GetGlobal(v7);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v4, 2);
    v13 = ObjectA;
    if ( !ObjectA )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
LABEL_8:
      v14[3] = a1;
      v14[4] = v4;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v14);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
      return 3221225485LL;
    }
    _m_prefetchw((const void *)(ObjectA + 60));
    v15 = *(_DWORD *)(ObjectA + 60);
    do
    {
      if ( !v15 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v14[6] = 7786LL;
        goto LABEL_8;
      }
      v11 = (unsigned int)(v15 + 1);
      v16 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 60), v11, v15);
    }
    while ( v16 != v15 );
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
    v18 = (_DWORD)v4 != 0;
    v19 = *(ADAPTER_RENDER **)(a1 + 16);
    v36 = v13 & -(__int64)v18;
    if ( *(ADAPTER_RENDER **)(v13 + 72) == v19 && *(_QWORD *)(v13 + 88) == *(_QWORD *)(a1 + 1728) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38, (struct _KTHREAD **)(v13 + 32), 0);
      DXGAUTOPUSHLOCK::AcquireExclusive(v38);
      a2[5] = 0;
      v20 = *(_QWORD **)(v13 + 128);
      if ( v20 == (_QWORD *)(v13 + 128) )
      {
LABEL_17:
        a2[6] = *(_DWORD *)(v13 + 120);
        a2[7] = *(_DWORD *)(v13 + 124);
        a2[4] = *(_DWORD *)(v13 + 104);
      }
      else
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = v21;
          v23 = v21 + *((_DWORD *)v20 - 2);
          v24 = v21;
          v21 = -1;
          if ( (unsigned int)v23 >= (unsigned int)v22 )
            v21 = v23;
          a2[5] = v21;
          v3 = (unsigned int)v23 < (unsigned int)v22 ? (int)0xC0000095 : 0;
          if ( (unsigned int)v23 < (unsigned int)v22 )
            break;
          v20 = (_QWORD *)*v20;
          if ( v20 == (_QWORD *)(v13 + 128) )
            goto LABEL_17;
        }
        v25 = WdLogNewEntry5_WdWarning(v22, v23, v24);
        *(_QWORD *)(v25 + 24) = a1;
        *(_QWORD *)(v25 + 32) = v3;
        WdLogEvent5_WdWarning(v25);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
      goto LABEL_30;
    }
    if ( (*(_DWORD *)(v13 + 12) & 0x20) != 0 )
    {
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      LODWORD(v41) = *(_DWORD *)(v13 + 208);
      v40 = *(_QWORD *)(v13 + 200);
      HIDWORD(v41) = 7;
      memset(&v39, 0, sizeof(v39));
      v39.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v39.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v40;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v19, &v39);
      v29 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = a1;
        *(_QWORD *)(v30 + 32) = v29;
        WdLogEvent5_WdError(v30);
        v31 = v29;
LABEL_28:
        LODWORD(v3) = v31;
LABEL_30:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v36);
        return (unsigned int)v3;
      }
      AllocationPrivateDriverDataSize = v39.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v39.ResourcePrivateDriverDataSize;
      if ( v39.AllocationPrivateDriverDataSize || v39.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v13 + 124);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v13 + 104);
        a2[5] = AllocationPrivateDriverDataSize;
        goto LABEL_30;
      }
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v26[5] = 1LL;
    }
    v26[3] = a1;
    v31 = -1073741811;
    v26[4] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_28;
  }
  v35 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v35 + 24) = a1;
  *(_QWORD *)(v35 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v35);
  return 3221225485LL;
}
