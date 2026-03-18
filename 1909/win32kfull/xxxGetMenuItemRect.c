/*
 * XREFs of xxxGetMenuItemRect @ 0x1C0246268
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C022D1B0 (NtUserGetMenuItemRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0245EA0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246400 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 MenuPwnd; // rbx
  int v8; // ebp
  __int64 v9; // rax
  int v10; // ebx
  int v11; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  _DWORD *v20; // rcx
  int v21; // ebx
  int v22; // esi
  __int64 result; // rax
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+30h] [rbp-28h]

  v4 = (unsigned int)a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  MenuPwnd = a1;
  if ( (unsigned int)a3 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  if ( !a1 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 4) != 0 )
    MenuPwnd = GetMenuPwnd(a1, a2);
  if ( !MenuPwnd )
    return 0LL;
  v8 = *(_BYTE *)(*(_QWORD *)(MenuPwnd + 40) + 26LL) & 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    v9 = *(_QWORD *)(MenuPwnd + 40);
    v10 = (*(_BYTE *)(v9 + 26) & 0x40) != 0 ? *(_DWORD *)(v9 + 112) : *(_DWORD *)(v9 + 104);
    v11 = *(_DWORD *)(v9 + 108);
  }
  else
  {
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    v24 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
    v25 = MenuPwnd;
    HMLockObject(MenuPwnd);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
    v16 = *(_DWORD **)(MenuPwnd + 40);
    v10 = v8 ? v16[24] : v16[22];
    v11 = v16[23];
    ThreadUnlock1(v14, v13, v15);
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  v17 = *(_QWORD *)(**(_QWORD **)a2 + 88LL) + 96 * v4;
  v18 = *(_DWORD *)(*(_QWORD *)v17 + 72LL);
  *(_DWORD *)(a4 + 8) = v18;
  v19 = *(_DWORD *)(*(_QWORD *)v17 + 76LL);
  *(_DWORD *)(a4 + 12) = v19;
  v20 = *(_DWORD **)v17;
  if ( v8 )
    v21 = v10 - (v20[16] + v20[18]);
  else
    v21 = v20[16] + v10;
  v22 = v20[17] + v11;
  result = 1LL;
  *(_DWORD *)a4 += v21;
  *(_DWORD *)(a4 + 4) += v22;
  *(_DWORD *)(a4 + 8) = v18 + v21;
  *(_DWORD *)(a4 + 12) = v19 + v22;
  return result;
}
