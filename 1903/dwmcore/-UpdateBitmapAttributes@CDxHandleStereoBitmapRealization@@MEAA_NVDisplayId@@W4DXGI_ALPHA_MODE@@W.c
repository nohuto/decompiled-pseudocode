/*
 * XREFs of ?UpdateBitmapAttributes@CDxHandleStereoBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180263820
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C3190 (-UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleStereoBitmapRealization::UpdateBitmapAttributes(__int64 a1, int a2, int a3, int a4)
{
  char updated; // di
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx

  updated = CDxHandleBitmapRealization::UpdateBitmapAttributes((_QWORD *)a1, a2, a3, a4);
  if ( updated )
  {
    v6 = *(_QWORD *)(a1 + 432);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v6 + 104) + 88LL))(v6 + 104, *(unsigned int *)(a1 + 424));
      v7 = *(_DWORD *)(a1 + 152);
      v8 = 3LL;
      if ( v7 )
        v8 = v7;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL) + 96LL))(
        *(_QWORD *)(a1 + 432) + 104LL,
        v8);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL) + 104LL))(
        *(_QWORD *)(a1 + 432) + 104LL,
        *(unsigned int *)(a1 + 196));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 456) + 24LL))(
        a1 + 456,
        (*(_QWORD *)(a1 + 432) + 112LL) & -(__int64)(*(_QWORD *)(a1 + 432) != 0LL));
    }
  }
  return updated;
}
