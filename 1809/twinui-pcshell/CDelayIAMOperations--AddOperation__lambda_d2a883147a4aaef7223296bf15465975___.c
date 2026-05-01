/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x1800E871C
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1800F51A0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005C5C0 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(
        int *a1,
        HWND a2,
        int a3)
{
  int v3; // ebp
  __int64 v6; // rdi
  char v7; // r15
  unsigned int v8; // r14d
  struct HWND__ *v9; // rax
  void *v10; // r8
  struct HWND__ *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  struct HWND__ **v15; // rdx

  v3 = a3;
  if ( a3 == 4 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 80LL))(*((_QWORD *)a1 + 1)) )
    {
      v6 = (unsigned int)(v3 - 3);
      v3 -= 3;
      goto LABEL_6;
    }
    v3 = 3;
  }
  v6 = 1LL;
  if ( (unsigned int)(v3 - 2) <= 1 )
  {
    v7 = 1;
    goto LABEL_8;
  }
LABEL_6:
  v7 = 0;
LABEL_8:
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2)
    || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = (struct HWND__ *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      v12 = a2 + 2;
      *((_DWORD *)v9 + 3) = v3;
      *(_QWORD *)v9 = &off_1803C91D8;
      *((_QWORD *)v9 + 2) = *(_QWORD *)a2;
      *((_QWORD *)v9 + 3) = 0LL;
      if ( v9 + 6 != a2 + 2 )
      {
        *((_QWORD *)v9 + 3) = *v12;
        *v12 = 0LL;
      }
      *((_BYTE *)v9 + 32) = *((_BYTE *)a2 + 16);
      v13 = a2 + 6;
      *((_QWORD *)v9 + 5) = 0LL;
      if ( v9 + 10 != a2 + 6 )
      {
        *((_QWORD *)v9 + 5) = *v13;
        *v13 = 0LL;
      }
      v9[12] = a2[8];
    }
    else
    {
      v11 = 0LL;
    }
    v8 = 0;
    if ( v11 )
    {
      v14 = *((_QWORD *)a1 + 4);
      if ( v14 == *((_QWORD *)a1 + 6)
        && CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)(a1 + 6),
             v14 + 1,
             v10) < 0 )
      {
        (**(void (__fastcall ***)(struct HWND__ *, _QWORD))v11)(v11, (unsigned int)v6);
      }
      else
      {
        *((_QWORD *)a1 + 4) += v6;
        v15 = (struct HWND__ **)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4) - 1LL));
        if ( v15 )
          *v15 = v11;
        v8 = *a1;
        if ( v3 != 5 )
        {
          a1[14] += v6;
          if ( v7 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v3 != 2),
              v8,
              v8);
          else
            PostMessageW(*((HWND *)a1 + 2), (v3 != 0) + 1025, 0LL, v8);
        }
        if ( *a1 != -1 )
          LODWORD(v6) = *a1 + 1;
        *a1 = v6;
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
