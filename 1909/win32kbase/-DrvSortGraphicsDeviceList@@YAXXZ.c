/*
 * XREFs of ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00A4CE8
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z @ 0x1C00A4DA0 (-DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z.c)
 */

void DrvSortGraphicsDeviceList(void)
{
  wchar_t *v0; // r9
  struct tagGRAPHICS_DEVICE *v1; // rdx
  struct tagGRAPHICS_DEVICE *v2; // r10
  wchar_t *v3; // r11
  int v4; // eax
  wchar_t *v5; // rbx
  struct tagGRAPHICS_DEVICE *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  struct tagGRAPHICS_DEVICE *v9; // rcx
  struct tagGRAPHICS_DEVICE *v10; // r10

  v0 = gpGraphicsDeviceList;
  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v4 = *((_DWORD *)v0 + 40);
      v5 = (wchar_t *)*((_QWORD *)v0 + 16);
      v6 = (struct tagGRAPHICS_DEVICE *)v3;
      if ( (v4 & 0x800000) != 0 )
      {
        if ( (v4 & 0x100000) != 0 )
        {
          DrvMoveGraphicsDevice((struct tagGRAPHICS_DEVICE *)v0, v1, 0LL);
          v3 = v0;
          if ( v10 )
            v9 = v10;
          v2 = v9;
        }
        else
        {
          if ( !v3 || (v7 = *((_QWORD *)v3 + 30)) == 0 || v7 != *((_QWORD *)v0 + 30) )
            v6 = v2;
          DrvMoveGraphicsDevice((struct tagGRAPHICS_DEVICE *)v0, v1, v6);
        }
        if ( v8 )
        {
          if ( *(wchar_t **)(v8 + 128) != v0 )
            v0 = (wchar_t *)v8;
        }
      }
      v1 = (struct tagGRAPHICS_DEVICE *)v0;
      v0 = v5;
    }
    while ( v5 );
  }
}
