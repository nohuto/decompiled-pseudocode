/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18036C200
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18006E290 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18036C110 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 */

__int64 __fastcall VirtualDesktopThumbnailWindowFilter::GetFilterForDesktop(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int FilterForDesktop; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  void *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // rdx
  void *v17; // rcx
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v21; // [rsp+50h] [rbp+8h] BYREF

  FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(a2, *(_QWORD *)(a1 + 24), a3, a4);
  v7 = FilterForDesktop;
  if ( FilterForDesktop >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    pv[0] = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *, unsigned int *))(*(_QWORD *)v8 + 104LL))(v8, pv, &v21);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v13 = 0LL;
      if ( !v21 )
      {
LABEL_11:
        v7 = 0;
LABEL_12:
        v17 = pv[0];
        pv[0] = 0LL;
        CoTaskMemFree(v17);
        return v7;
      }
      while ( 1 )
      {
        v14 = a4[1];
        v15 = pv[0];
        if ( v14 == a4[3] )
        {
          v7 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)a4,
                 v14 + 1,
                 v10);
          if ( (v7 & 0x80000000) != 0 )
            break;
        }
        v16 = (_QWORD *)(*a4 + 8 * a4[1]++);
        if ( v16 )
          *v16 = v15[v13];
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v21 )
          goto LABEL_11;
      }
      v11 = v7;
      v12 = 58LL;
    }
    else
    {
      v11 = (unsigned int)v9;
      v12 = 55LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
    (const char *)(unsigned int)FilterForDesktop);
  return v7;
}
