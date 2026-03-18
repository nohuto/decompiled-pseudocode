/*
 * XREFs of xxxGetMenuItemRect @ 0x1C02050FC
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C01EF340 (NtUserGetMenuItemRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0204D38 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0205270 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 MenuPwnd; // rbx
  __int64 result; // rax
  int v9; // ebp
  __int64 v10; // rax
  int v11; // ebx
  int v12; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r9d
  _DWORD *v21; // rcx
  int v22; // ebx
  int v23; // esi
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  MenuPwnd = a1;
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  if ( !a1 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 4) != 0 )
    MenuPwnd = GetMenuPwnd(a1, a2);
  if ( !MenuPwnd )
    return 0LL;
  v9 = *(_BYTE *)(*(_QWORD *)(MenuPwnd + 40) + 26LL) & 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    v10 = *(_QWORD *)(MenuPwnd + 40);
    v11 = (*(_BYTE *)(v10 + 26) & 0x40) != 0 ? *(_DWORD *)(v10 + 112) : *(_DWORD *)(v10 + 104);
    v12 = *(_DWORD *)(v10 + 108);
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v24[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v24;
    v24[1] = MenuPwnd;
    _InterlockedIncrement((volatile signed __int32 *)(MenuPwnd + 8));
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
    v17 = *(_DWORD **)(MenuPwnd + 40);
    v11 = v9 ? v17[24] : v17[22];
    v12 = v17[23];
    ThreadUnlock1(v15, v14, v16);
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  v18 = *(_QWORD *)(**(_QWORD **)a2 + 88LL) + 96 * v4;
  v19 = *(_DWORD *)(*(_QWORD *)v18 + 72LL);
  *(_DWORD *)(a4 + 8) = v19;
  v20 = *(_DWORD *)(*(_QWORD *)v18 + 76LL);
  *(_DWORD *)(a4 + 12) = v20;
  v21 = *(_DWORD **)v18;
  if ( v9 )
    v22 = v11 - (v21[16] + v21[18]);
  else
    v22 = v21[16] + v11;
  v23 = v21[17] + v12;
  result = 1LL;
  *(_DWORD *)a4 += v22;
  *(_DWORD *)(a4 + 4) += v23;
  *(_DWORD *)(a4 + 8) = v19 + v22;
  *(_DWORD *)(a4 + 12) = v20 + v23;
  return result;
}
