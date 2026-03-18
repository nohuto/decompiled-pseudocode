/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F152C
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00F0EB0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C01DD9C0 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E4EC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0020824 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F17C4 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__--_2_--ENSURE_SHARED_RESOUR.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F88FC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  ADAPTER_RENDER *v10; // r15
  _QWORD *v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  int StandardAllocationDriverData; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v27; // [rsp+28h] [rbp-58h] BYREF
  DXGPUSHLOCK *v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]

  LODWORD(v4) = 0;
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v24 + 24) = a1;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v4;
  }
  v8 = *(_QWORD *)(a4 + 16);
  if ( v8 )
  {
    v10 = *(ADAPTER_RENDER **)(a1 + 16);
    v26 = 0LL;
    if ( *(ADAPTER_RENDER **)(v8 + 72) == v10 && *(_QWORD *)(v8 + 88) == *(_QWORD *)(a1 + 1728) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28, (struct _KTHREAD **)(v8 + 32), 0);
      DXGAUTOPUSHLOCK::AcquireExclusive(&v28);
      a2[7] = 0;
      v11 = *(_QWORD **)(v8 + 128);
      if ( v11 == (_QWORD *)(v8 + 128) )
      {
LABEL_12:
        a2[8] = *(_DWORD *)(v8 + 120);
        a2[9] = *(_DWORD *)(v8 + 124);
        a2[6] = *(_DWORD *)(v8 + 104);
      }
      else
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = v12;
          v14 = v12 + *((_DWORD *)v11 - 2);
          v15 = v12;
          v12 = -1;
          if ( (unsigned int)v14 >= (unsigned int)v13 )
            v12 = v14;
          a2[7] = v12;
          v4 = (unsigned int)v14 < (unsigned int)v13 ? (int)0xC0000095 : 0;
          if ( (unsigned int)v14 < (unsigned int)v13 )
            break;
          v11 = (_QWORD *)*v11;
          if ( v11 == (_QWORD *)(v8 + 128) )
            goto LABEL_12;
        }
        v16 = WdLogNewEntry5_WdWarning(v13, v14, v15);
        *(_QWORD *)(v16 + 24) = a1;
        *(_QWORD *)(v16 + 32) = v4;
        WdLogEvent5_WdWarning(v16);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(v8 + 12) & 0x20) != 0 )
    {
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      LODWORD(v29) = *(_DWORD *)(v8 + 208);
      v28 = *(DXGPUSHLOCK **)(v8 + 200);
      HIDWORD(v29) = 7;
      memset(&v27, 0, sizeof(v27));
      v27.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v27.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v28;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v27);
      v20 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v21 + 24) = a1;
        *(_QWORD *)(v21 + 32) = v20;
        WdLogEvent5_WdError(v21);
        LODWORD(v4) = v20;
LABEL_24:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v26);
        return (unsigned int)v4;
      }
      AllocationPrivateDriverDataSize = v27.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v27.ResourcePrivateDriverDataSize;
      if ( v27.AllocationPrivateDriverDataSize || v27.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v8 + 124);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v8 + 104);
        a2[7] = AllocationPrivateDriverDataSize;
        goto LABEL_24;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v17[5] = 1LL;
    }
    v17[3] = a1;
    LODWORD(v4) = -1073741811;
    v17[4] = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_24;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
  LODWORD(v4) = -1073741811;
  v9[3] = a1;
  v9[4] = a4;
  v9[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v9);
  return (unsigned int)v4;
}
