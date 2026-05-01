/*
 * XREFs of ?ClipChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1803A3710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x180292DA0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ClipChanged(
        _BYTE *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int128 *a4,
        _BYTE *a5)
{
  _BYTE *v5; // r14
  int v9; // eax
  void *v10; // r8
  int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int128 v15; // xmm6
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a5;
  *a5 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 120LL))(a1) && a1[232] )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    v9 = (**a3)(a3, &GUID_c9465035_5fb8_4b34_818f_fcfe7bd7b95c, (__int64 *)&a5);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v14 = (__int64)a5;
      *(_QWORD *)v20 = a5;
      if ( a5 )
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a5 + 8LL))(a5);
      v15 = *a4;
      v16 = a1 + 184;
      v11 = 0;
      v21 = *a4;
      v17 = v16[1];
      if ( v17 != v16[3]
        || (v11 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                    (__int64)v16,
                    v17 + 1,
                    v10),
            v11 >= 0) )
      {
        ++v16[1];
        v18 = *v16 + 8 * (3LL * v16[1] - 3);
        if ( v18 )
        {
          *(_QWORD *)v18 = 0LL;
          if ( (int *)v18 != v20 )
          {
            *(_QWORD *)v20 = 0LL;
            *(_QWORD *)v18 = v14;
          }
          *(_OWORD *)(v18 + 8) = v15;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      if ( v11 >= 0 )
      {
        *v5 = 0;
        v11 = 0;
        goto LABEL_17;
      }
      v12 = (unsigned int)v11;
      v13 = 106LL;
    }
    else
    {
      v12 = (unsigned int)v9;
      v13 = 105LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)v12);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    return (unsigned int)v11;
  }
  return 0LL;
}
