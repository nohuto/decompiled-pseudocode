/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0104864
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0104850 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0104954 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // r14
  __int64 i; // rbx
  _QWORD *v10; // rcx
  unsigned int v11; // edi
  char v12; // bp
  bool v13; // bl
  bool v14; // al
  __int64 v15; // rcx
  bool v16; // al
  __int64 ThreadWin32Thread; // r15
  bool v19; // bl
  int v20; // eax

  v4 = PDEVOBJ::pDevHTInfo(this, a2, a3);
  v7 = *(_QWORD *)this;
  v8 = v4;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    for ( i = 1456LL; i < 1504; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
    v7 = *(_QWORD *)this;
  }
  v10 = *(_QWORD **)(v7 + 1512);
  v11 = 1;
  v12 = 1;
  if ( v10 )
  {
    v13 = (unsigned int)bDeletePalette(*v10, 0LL, 0LL) != 0;
    v14 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1512LL)) != 0;
    if ( !v13 || !v14 )
      v12 = 0;
  }
  v15 = *(_QWORD *)this;
  v16 = 1;
  if ( v8 != *(_QWORD **)(*(_QWORD *)this + 1512LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
    v19 = (unsigned int)bDeletePalette(*v8, 0LL, 0LL) != 0;
    v20 = HT_DestroyDeviceHalftoneInfo(v8);
    v16 = v19 && v20;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    v15 = *(_QWORD *)this;
  }
  *(_QWORD *)(v15 + 1512) = 0LL;
  if ( !v12 || !v16 )
    return 0;
  return v11;
}
