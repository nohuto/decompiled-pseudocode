/*
 * XREFs of ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x1800FC3FC
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3F40 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18007A9B0 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$SortEx@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJAEBVCCompareRecoveredWindows@@@Z @ 0x1800FC0C0 (--$SortEx@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1800FC68C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RecoverApplicationWindows(struct IImmersiveShellHookNotification *a1)
{
  int v2; // edi
  unsigned __int64 v3; // rbx
  HWND v4; // rdx
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  LPARAM v9; // r14
  bool IsForcedAppWindow; // al
  __int64 v11; // rdx
  LPARAM lParam; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+78h] [rbp+28h] BYREF

  lParam = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v2 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
         &lParam,
         50LL);
  if ( v2 < 0 )
    goto LABEL_15;
  EnumWindows(RecoverWindowsProc, (LPARAM)&lParam);
  v3 = v14;
  if ( !v14 )
    goto LABEL_16;
  v2 = CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::SortEx<CCompareRecoveredWindows>(
         (__int64)&lParam,
         (__int64)&v17);
  if ( v2 < 0 )
  {
LABEL_15:
    v2 = -2147023617;
  }
  else
  {
    v5 = 0LL;
    if ( v3 )
    {
      v6 = 0LL;
      do
      {
        if ( *(_DWORD *)(v6 + lParam + 8) == 1 )
          break;
        (*(void (__fastcall **)(struct IImmersiveShellHookNotification *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
          a1,
          17LL,
          *(_QWORD *)(v6 + lParam));
        ++v5;
        v6 += 16LL;
      }
      while ( v5 < v3 );
    }
    if ( v3 != v5 )
    {
      v7 = 16 * v3;
      v8 = v3 - v5;
      do
      {
        v7 -= 16LL;
        v9 = lParam;
        if ( !*(_BYTE *)(v7 + lParam + 12)
          || (IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(
                                    *(CApplicationManagerUtility **)(v7 + lParam),
                                    v4),
              v11 = 21LL,
              IsForcedAppWindow) )
        {
          v11 = 17LL;
        }
        (*(void (__fastcall **)(struct IImmersiveShellHookNotification *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
          a1,
          v11,
          *(_QWORD *)(v7 + v9));
        --v8;
      }
      while ( v8 );
    }
  }
LABEL_16:
  if ( lParam )
    CoTaskMemFree((LPVOID)lParam);
  return (unsigned int)v2;
}
