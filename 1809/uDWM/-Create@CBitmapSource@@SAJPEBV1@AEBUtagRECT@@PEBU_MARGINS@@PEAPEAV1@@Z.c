/*
 * XREFs of ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800471CC
 * Callers:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047098 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        const struct CBitmapSource *a1,
        const struct tagRECT *a2,
        const struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)v9 = &CBitmapSource::`vftable';
    *(_DWORD *)(v9 + 80) = 0x80000000;
    *(_DWORD *)(v9 + 88) = 0x80000000;
    *(_DWORD *)(v9 + 84) = 0x80000000;
    *(_DWORD *)(v9 + 92) = 0x80000000;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *(_QWORD *)(v10 + 16) = *((_QWORD *)a1 + 2);
    v11 = *((_QWORD *)a1 + 2);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v12 = 0;
    *(struct tagRECT *)(v10 + 80) = *a2;
    if ( *(_DWORD *)(v10 + 88) - *(_DWORD *)(v10 + 80) >= 0 )
      v12 = *(_DWORD *)(v10 + 88) - *(_DWORD *)(v10 + 80);
    v13 = 0;
    *(_DWORD *)(v10 + 24) = v12;
    if ( *(_DWORD *)(v10 + 92) - *(_DWORD *)(v10 + 84) >= 0 )
      v13 = *(_DWORD *)(v10 + 92) - *(_DWORD *)(v10 + 84);
    *(_DWORD *)(v10 + 28) = v13;
    if ( a3 )
      *(struct _MARGINS *)(v10 + 32) = *a3;
    *a4 = (struct CBitmapSource *)v10;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB1u);
  }
  return v8;
}
