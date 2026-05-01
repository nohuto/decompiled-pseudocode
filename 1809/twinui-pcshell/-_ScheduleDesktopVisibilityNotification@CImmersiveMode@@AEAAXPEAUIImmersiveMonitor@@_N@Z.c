/*
 * XREFs of ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x18010218C
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180101C08 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@@WRL@Microsoft@@XZ @ 0x180100204 (--$CreateRefCountedObj@V-$CCoSimpleArray@K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@K@@@@@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___ @ 0x1801003A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x180101A50 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_ScheduleDesktopVisibilityNotification(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        char a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rdx
  void *v8; // r8
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  _DWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct IImmersiveMonitor *v15; // [rsp+28h] [rbp-28h] BYREF
  char v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h]
  _QWORD *v18; // [rsp+40h] [rbp-10h] BYREF
  struct IImmersiveMonitor *v19; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp+58h] BYREF

  v6 = *((_QWORD *)this + 51);
  if ( !v6 )
    return;
  CreateRefCountedObj<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>((__int64 *)&v20);
  v9 = v20;
  if ( !v20
    || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
              (__int64)(v20 + 1),
              v6,
              v8) < 0 )
  {
    goto LABEL_15;
  }
  v10 = 0LL;
  for ( i = 0LL; i < v6; ++i )
  {
    v11 = *(_DWORD **)(*((_QWORD *)this + 50) + 8 * i);
    if ( a2 )
    {
      if ( v11[1] != 1 )
        continue;
LABEL_9:
      *(_DWORD *)(v9[1] + 4 * v10++) = *v11;
      continue;
    }
    if ( !v11[1] )
      goto LABEL_9;
  }
  if ( v10 )
  {
    v19 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v16 = a3;
    v17 = v10;
    v18 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    Windows::Internal::ComTaskPool::QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___(
      v13,
      v12,
      (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
      (__int64)&v15);
    v14 = (__int64)v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
LABEL_15:
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v9 + 16LL))(v9, i);
}
