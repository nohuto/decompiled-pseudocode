/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x180066794
 * Callers:
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x1800666E0 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180069C80 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___(
        int *a1,
        char *a2,
        int a3)
{
  int v3; // esi
  int v6; // edi
  char v7; // bp
  __int64 v8; // rbx
  char *v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // ebx

  v3 = a3;
  if ( a3 == 4 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 80LL))(*((_QWORD *)a1 + 1)) )
    {
      v6 = 1;
      v3 = 1;
      goto LABEL_3;
    }
    v3 = 3;
  }
  v6 = 1;
  if ( (unsigned int)(v3 - 2) <= 1 )
  {
    v7 = 1;
    goto LABEL_4;
  }
LABEL_3:
  v7 = 0;
LABEL_4:
  v8 = *((_QWORD *)a1 + 2);
  SetLastError(0);
  if ( ((unsigned int)IsWindowInDestroy(v8) || GetLastError() == 1400) && (!v7 || !*((_QWORD *)a1 + 1)) )
    return 0;
  v9 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (void (__fastcall ***)(_QWORD, __int64))v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = *a1;
    *(_QWORD *)v9 = &off_18042A4C0;
    *((_DWORD *)v9 + 3) = v3;
    *((_QWORD *)v9 + 2) = 0LL;
    if ( v9 + 16 != a2 )
    {
      *((_QWORD *)v9 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    return 0;
  v11 = *((_QWORD *)a1 + 4);
  if ( v11 == *((_QWORD *)a1 + 6)
    && (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
              a1 + 6,
              v11 + 1) < 0 )
  {
    (**v10)(v10, 1LL);
    return 0;
  }
  v12 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
  if ( v12 )
    *v12 = v10;
  v13 = *a1;
  if ( v3 != 5 )
  {
    ++a1[14];
    if ( v7 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
        *((_QWORD *)a1 + 1),
        0xFFFFLL - (v3 != 2),
        v13);
    else
      PostMessageW(*((HWND *)a1 + 2), (v3 != 0) + 1025, 0LL, v13);
  }
  if ( *a1 != -1 )
    v6 = *a1 + 1;
  *a1 = v6;
  return v13;
}
