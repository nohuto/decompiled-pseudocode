/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18012D480
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18012BCEC (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18012D5A0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  RTL_SRWLOCK *v4; // rbx
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  RTL_SRWLOCK *v6; // rcx
  char *v7; // rdx
  _QWORD *Ptr; // rax
  int v9; // edi
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp-18h]
  char v14; // [rsp+58h] [rbp-10h]
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+28h] BYREF
  void (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+30h] BYREF
  int v17; // [rsp+A0h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A8h] [rbp+40h]

  v17 = a3;
  v16 = a2;
  *(_QWORD *)&v11 = &v17;
  *((_QWORD *)&v11 + 1) = &v16;
  v12 = v11;
  v13 = a1 - 17;
  v14 = 1;
  v4 = a1 + 64;
  v18 = a1 + 64;
  AcquireSRWLockExclusive(a1 + 64);
  v5 = v16;
  v15 = v16;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v6 = a1 + 65;
  v7 = 0LL;
  if ( a1[66].Ptr )
  {
    Ptr = v6->Ptr;
    while ( (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*Ptr != v5 )
    {
      ++v7;
      ++Ptr;
      if ( v7 >= a1[66].Ptr )
        goto LABEL_5;
    }
    v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(v6);
  }
  else
  {
LABEL_5:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( v9 >= 0 )
  {
    CApplicationViewManager::RaiseApplicationViewChanged((__int64)a1, v16, 1u, 0LL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v9 = 0;
  }
  else if ( v4 )
  {
    ReleaseSRWLockExclusive(v4);
  }
  v14 = 0;
  lambda_3752109e28d6ea02fd1f915d996064c2_::operator()((__int64)&v12);
  return (unsigned int)v9;
}
