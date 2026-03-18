/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C00CECB4
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0113280 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00CF084 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0105D44 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // r14
  __int64 i; // rbx
  _QWORD *v7; // rcx
  unsigned int v8; // edi
  char v9; // bp
  bool v10; // bl
  bool v11; // al
  __int64 v12; // rcx
  bool v13; // al
  __int64 ThreadWin32Thread; // r15
  bool v16; // bl
  int v17; // eax

  v2 = PDEVOBJ::pDevHTInfo(this);
  v4 = *(_QWORD *)this;
  v5 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    for ( i = 1448LL; i < 1496; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
    v4 = *(_QWORD *)this;
  }
  v7 = *(_QWORD **)(v4 + 1504);
  v8 = 1;
  v9 = 1;
  if ( v7 )
  {
    v10 = (unsigned int)bDeletePalette(*v7, 0LL, 0LL) != 0;
    v11 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1504LL)) != 0;
    if ( !v10 || !v11 )
      v9 = 0;
  }
  v12 = *(_QWORD *)this;
  v13 = 1;
  if ( v5 != *(_QWORD **)(*(_QWORD *)this + 1504LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v16 = (unsigned int)bDeletePalette(*v5, 0LL, 0LL) != 0;
    v17 = HT_DestroyDeviceHalftoneInfo(v5);
    v13 = v16 && v17;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    v12 = *(_QWORD *)this;
  }
  *(_QWORD *)(v12 + 1504) = 0LL;
  if ( !v9 || !v13 )
    return 0;
  return v8;
}
