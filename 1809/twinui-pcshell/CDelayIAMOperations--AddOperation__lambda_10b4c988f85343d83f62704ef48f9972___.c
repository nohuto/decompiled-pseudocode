/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_10b4c988f85343d83f62704ef48f9972___ @ 0x18002D820
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18002D6A8 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005C5C0 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_10b4c988f85343d83f62704ef48f9972___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  _QWORD *v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = (void (__fastcall ***)(_QWORD, __int64))v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      v7 = a2 + 2;
      *((_DWORD *)v5 + 3) = 3;
      *(_QWORD *)v5 = &off_1803C3568;
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *((_QWORD *)v5 + 3) = 0LL;
      if ( v5 + 24 != (char *)(a2 + 2) )
      {
        *((_QWORD *)v5 + 3) = *v7;
        *v7 = 0LL;
      }
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v8 = *((_QWORD *)a1 + 4);
      if ( v8 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  a1 + 6,
                  v8 + 1) < 0 )
      {
        (**v6)(v6, 1LL);
      }
      else
      {
        v9 = *((_QWORD *)a1 + 3);
        v10 = 1;
        v11 = (_QWORD *)(v9 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v11 )
          *v11 = v6;
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
