/*
 * XREFs of ?UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180067830
 * Callers:
 *     ?UpdateBitmapAttributes@CDxHandleStereoBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802285D0 (-UpdateBitmapAttributes@CDxHandleStereoBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::UpdateBitmapAttributes(_QWORD *a1, int a2, int a3, int a4)
{
  char v7; // si
  int v8; // ecx
  int v9; // eax
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  if ( a2 != *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 48LL))(a1, &v17) )
  {
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 48LL))(a1, &v17) == DisplayId::Invalid )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
    }
    else
    {
      v11 = a1[52];
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 104);
        v13 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 48LL))(a1, &v17);
        (*(void (__fastcall **)(__int64, _QWORD))(v12 + 88))(a1[52] + 104LL, *v13);
      }
    }
    v7 = 1;
  }
  v8 = *((_DWORD *)a1 + 38);
  v9 = 3;
  if ( v8 )
    v9 = *((_DWORD *)a1 + 38);
  if ( a3 != v9 )
  {
    v14 = a1[52];
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 104) + 96LL))(v14 + 104);
    v7 = 1;
  }
  if ( a4 != *((_DWORD *)a1 + 49) )
  {
    v15 = a1[52];
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v15 + 104) + 104LL))(v15 + 104);
    v7 = 1;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(a1[2] + 24LL))(a1 + 2, (a1[52] + 112LL) & -(__int64)(a1[52] != 0LL));
    v16 = a1[51];
    if ( v16 )
      *(_BYTE *)(v16 + 205) = 0;
  }
  return v7;
}
