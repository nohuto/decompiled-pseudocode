/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18007A9D0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F8658 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005C5C0 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  _QWORD *v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *v5 = (void (__fastcall **)(_QWORD, __int64))off_1803C89A8;
      *((_DWORD *)v5 + 3) = 3;
      *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = *((_QWORD *)a1 + 4);
      if ( v8 == *((_QWORD *)a1 + 6)
        && CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)(a1 + 6),
             v8 + 1,
             v6) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v9 = *((_QWORD *)a1 + 3);
        v10 = 1;
        v11 = (_QWORD *)(v9 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v11 )
          *v11 = v7;
        v12 = *((_QWORD *)a1 + 1);
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, 65534LL);
        if ( *a1 != -1 )
          v10 = *a1 + 1;
        *a1 = v10;
      }
    }
  }
  return v4;
}
