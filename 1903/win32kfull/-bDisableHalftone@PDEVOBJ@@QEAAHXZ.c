/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0129604
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C01295F0 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0036D30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C01296F4 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 i; // rbx
  _QWORD *v12; // rcx
  unsigned int v13; // edi
  char v14; // bp
  bool v15; // bl
  bool v16; // al
  __int64 v17; // rcx
  bool v18; // al
  __int64 ThreadWin32Thread; // r15
  bool v21; // bl
  int v22; // eax

  v5 = PDEVOBJ::pDevHTInfo(this, a2, a3, a4);
  v9 = *(_QWORD *)this;
  v10 = v5;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    for ( i = 1456LL; i < 1504; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
    v9 = *(_QWORD *)this;
  }
  v12 = *(_QWORD **)(v9 + 1512);
  v13 = 1;
  v14 = 1;
  if ( v12 )
  {
    v15 = (unsigned int)bDeletePalette(*v12, 0LL, 0LL) != 0;
    v16 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1512LL)) != 0;
    if ( !v15 || !v16 )
      v14 = 0;
  }
  v17 = *(_QWORD *)this;
  v18 = 1;
  if ( v10 != *(_QWORD **)(*(_QWORD *)this + 1512LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
    v21 = (unsigned int)bDeletePalette(*v10, 0LL, 0LL) != 0;
    v22 = HT_DestroyDeviceHalftoneInfo(v10);
    v18 = v21 && v22;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    v17 = *(_QWORD *)this;
  }
  *(_QWORD *)(v17 + 1512) = 0LL;
  if ( !v14 || !v18 )
    return 0;
  return v13;
}
