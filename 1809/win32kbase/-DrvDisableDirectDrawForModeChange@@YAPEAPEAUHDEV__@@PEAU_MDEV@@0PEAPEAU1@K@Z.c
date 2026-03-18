/*
 * XREFs of ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C003E5A0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 */

HDEV *__fastcall DrvDisableDirectDrawForModeChange(struct _MDEV *a1, struct _MDEV *a2, HDEV *a3)
{
  unsigned int v6; // ecx
  HDEV *v7; // rsi
  unsigned int v8; // r8d
  HDEV *v9; // rdx
  __int64 i; // r9
  HDEV v11; // rax
  __int64 j; // r9
  HDEV v13; // rax
  __int64 v14; // rbx
  HDEV *result; // rax

  v6 = *((_DWORD *)a2 + 5) + *((_DWORD *)a1 + 5) + 3;
  if ( v6 <= 7 || (result = (HDEV *)PALLOCMEM2(8 * v6, 1886221383LL, 0), (a3 = result) != 0LL) )
  {
    v7 = a3 + 1;
    v8 = 0;
    v9 = a3 + 1;
    if ( *(_QWORD *)a1 )
    {
      *v7 = *(HDEV *)a1;
      v9 = a3 + 2;
      v8 = 1;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 5); ++v9 )
    {
      ++v8;
      v11 = (HDEV)*((_QWORD *)a1 + 5 * i + 4);
      i = (unsigned int)(i + 1);
      *v9 = v11;
    }
    if ( *(_QWORD *)a2 )
    {
      *v9++ = *(HDEV *)a2;
      ++v8;
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 5); ++v9 )
    {
      ++v8;
      v13 = (HDEV)*((_QWORD *)a2 + 5 * j + 4);
      j = (unsigned int)(j + 1);
      *v9 = v13;
    }
    v14 = v8;
    *a3 = (HDEV)v8;
    if ( v8 )
    {
      do
      {
        GreSuspendDirectDraw(*v7++);
        --v14;
      }
      while ( v14 );
    }
    return a3;
  }
  return result;
}
