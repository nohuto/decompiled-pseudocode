/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00ED370
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00ECD30 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C020C790 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273804 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00233B4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00ED5EC (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__--_2_--ENSURE_SHARED_RESOUR.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F09AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  ADAPTER_RENDER *v10; // rbx
  _QWORD *v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // eax
  int StandardAllocationDriverData; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v27; // [rsp+28h] [rbp-58h] BYREF
  DXGPUSHLOCK *v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+60h] [rbp-20h]
  int v30; // [rsp+64h] [rbp-1Ch]
  __int64 v31; // [rsp+68h] [rbp-18h]

  v4 = 0;
  v5 = a4;
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(a1, a2, a3);
    LODWORD(v5) = -1073741811;
    *(_QWORD *)(v24 + 24) = a1;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v5;
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
      if ( v11 != (_QWORD *)(v8 + 128) )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = v12;
          v14 = v12 + *((_DWORD *)v11 - 2);
          v12 = -1;
          if ( (unsigned int)v14 >= (unsigned int)v13 )
            v12 = v14;
          LODWORD(v5) = (unsigned int)v14 < (unsigned int)v13 ? 0xC0000095 : 0;
          a2[7] = v12;
          v4 = v5;
          if ( (unsigned int)v14 < (unsigned int)v13 )
            break;
          v11 = (_QWORD *)*v11;
          if ( v11 == (_QWORD *)(v8 + 128) )
            goto LABEL_12;
        }
        v15 = WdLogNewEntry5_WdWarning(v14, v13, v11);
        *(_QWORD *)(v15 + 32) = (int)v5;
        *(_QWORD *)(v15 + 24) = a1;
        WdLogEvent5_WdWarning(v15);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
        goto LABEL_25;
      }
LABEL_12:
      a2[8] = *(_DWORD *)(v8 + 120);
      a2[9] = *(_DWORD *)(v8 + 124);
      a2[6] = *(_DWORD *)(v8 + 104);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(v8 + 12) & 0x20) != 0 )
    {
      v29 = *(_DWORD *)(v8 + 208);
      LODWORD(v28) = *(_DWORD *)(v8 + 200);
      v17 = *(_DWORD *)(v8 + 204);
      v31 = 0LL;
      HIDWORD(v28) = v17;
      v30 = 7;
      memset(&v27, 0, sizeof(v27));
      v27.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v27.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v28;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v27);
      v5 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
LABEL_22:
        v16[3] = a1;
        v16[4] = v5;
        WdLogEvent5_WdError(v16);
LABEL_25:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v26);
        return (unsigned int)v5;
      }
      AllocationPrivateDriverDataSize = v27.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v27.ResourcePrivateDriverDataSize;
      if ( v27.AllocationPrivateDriverDataSize || v27.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v8 + 124);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v8 + 104);
        a2[7] = AllocationPrivateDriverDataSize;
LABEL_24:
        LODWORD(v5) = v4;
        goto LABEL_25;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(
                        v27.ResourcePrivateDriverDataSize,
                        v27.AllocationPrivateDriverDataSize,
                        v21);
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
      v16[5] = 1LL;
    }
    v5 = -1073741811LL;
    goto LABEL_22;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
  v9[4] = v5;
  LODWORD(v5) = -1073741811;
  v9[5] = -1073741811LL;
  v9[3] = a1;
  WdLogEvent5_WdWarning(v9);
  return (unsigned int)v5;
}
