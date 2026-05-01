/*
 * XREFs of ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x18036A250
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x18036A6E0 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall CSwitchItemGrid::_VerticalNavigateFromIndex(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // r8
  int v9; // ecx
  int v10; // r15d
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  unsigned __int64 v15; // rcx
  int v16; // rax^4
  int v17; // r14d
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  signed int v20; // eax
  __int128 v22; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * a3);
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 88LL))(v7, &v22);
  v9 = v8[1];
  v10 = *v8 + (v8[2] - *v8) / 2;
  v11 = (v8[3] - v9) / 2;
  v22 = *(_OWORD *)(a1 + 800);
  v12 = v11 + v9;
  v13 = *(_DWORD *)(a1 + 776);
  if ( a4 == 1 )
  {
    v14 = v12 - v13;
    v15 = DWORD1(v22);
    if ( v14 < SDWORD1(v22) )
    {
      v16 = HIDWORD(v22);
LABEL_6:
      v14 += v16 - v15;
    }
  }
  else
  {
    v14 = v13 + v12;
    v15 = HIDWORD(*((_QWORD *)&v22 + 1));
    if ( v14 >= SHIDWORD(v22) )
    {
      v16 = DWORD1(v22);
      goto LABEL_6;
    }
  }
  *a2 = 0LL;
  v17 = 0x7FFFFFFF;
  v18 = *(__int64 **)(a1 + 16);
  v19 = &v18[*(_QWORD *)(a1 + 24)];
  while ( v18 != v19 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v18 + 88LL))(*v18, &v22);
    if ( v14 >= SDWORD1(v22) && v14 <= SHIDWORD(v22) )
    {
      v20 = abs32(v22 + (DWORD2(v22) - (int)v22) / 2 - v10);
      if ( v20 < v17 )
      {
        v17 = v20;
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, v18);
      }
    }
    ++v18;
  }
  return a2;
}
