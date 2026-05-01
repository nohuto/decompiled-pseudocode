/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x18012944C
 * Callers:
 *     ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18012FEB0 (-DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800407D0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18006E290 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  int v8; // ebp
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  LPARAM v11; // r9
  HWND v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v5;
    v8 = 1;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *v5 = (void (__fastcall **)(_QWORD, __int64))off_18044B7D8;
      *((_DWORD *)v5 + 3) = 1;
      *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v9 = *((_QWORD *)a1 + 4);
      if ( v9 == *((_QWORD *)a1 + 6)
        && CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)(a1 + 6),
             v9 + 1,
             v6) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v10 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v10 )
          *v10 = v7;
        v11 = (unsigned int)*a1;
        v12 = (HWND)*((_QWORD *)a1 + 2);
        ++a1[14];
        v4 = v11;
        PostMessageW(v12, 0x402u, 0LL, v11);
        if ( *a1 != -1 )
          v8 = *a1 + 1;
        *a1 = v8;
      }
    }
  }
  return v4;
}
