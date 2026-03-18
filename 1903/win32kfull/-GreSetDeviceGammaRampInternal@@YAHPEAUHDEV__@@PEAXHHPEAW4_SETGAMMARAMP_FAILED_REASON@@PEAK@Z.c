/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C007FC14
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C007FA68 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     UpdateGammaRampOnDevice @ 0x1C0080A30 (UpdateGammaRampOnDevice.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C02AE690 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDeviceGammaRampInternal(
        enum _SETGAMMARAMP_FAILED_REASON *a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        enum _SETGAMMARAMP_FAILED_REASON *a5,
        unsigned int *a6)
{
  enum _SETGAMMARAMP_FAILED_REASON *v6; // rsi
  unsigned int *v8; // rcx
  unsigned int updated; // edi
  const void *v13; // rcx
  BOOL v14; // ebp
  signed int v15; // ecx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  signed int v18; // r9d
  signed int v19; // r10d
  signed int v20; // r11d
  __int64 v21; // r8
  int v22; // eax
  int v23; // edx
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed int v27; // eax
  void *v28; // rax

  v6 = a5;
  v8 = a6;
  updated = 0;
  a5 = a1;
  *(_DWORD *)v6 = 2;
  *v8 = (unsigned int)a1;
  if ( !a1 || (*((_DWORD *)a1 + 10) & 1) == 0 )
    return updated;
  if ( (unsigned int)(*((_DWORD *)a1 + 527) - 4) > 2 )
  {
    *(_DWORD *)v6 = 3;
    *v8 = *((_DWORD *)a1 + 527);
  }
  else
  {
    if ( *((_QWORD *)a1 + 403) && (*((_DWORD *)a1 + 532) & 0x10) != 0 )
    {
      updated = 1;
      goto LABEL_10;
    }
    *(_DWORD *)v6 = 4;
  }
  if ( !a4 )
    return updated;
LABEL_10:
  v13 = (const void *)*((_QWORD *)a1 + 211);
  v14 = a3 == 0;
  if ( v13 && RtlCompareMemory(v13, a2, 0x600uLL) == 1536 )
    return updated;
  v15 = -giIcmGammaRange;
  v16 = 2 * giIcmGammaRange;
  while ( updated && a3 || v14 )
  {
    v17 = v15 + giIcmGammaRange;
    if ( (unsigned int)v17 >= 0x100 )
      break;
    v18 = a2[2 * v17 + 1];
    v19 = a2[2 * v17 + 513];
    v20 = a2[2 * v17 + 1025];
    v21 = (unsigned int)v17;
    if ( updated )
    {
      if ( a3 )
      {
        if ( v18 < v15 || (v27 = v15 + v16, v18 > (int)(v15 + v16)) || v19 < v15 || v19 > v27 || v20 < v15 || v20 > v27 )
        {
          updated = 0;
          *(_DWORD *)v6 = 5;
        }
      }
    }
    if ( v14 )
    {
      v22 = *(unsigned __int16 *)&a2[2 * (unsigned int)v17];
      v23 = (_DWORD)v17 << 8;
      if ( v22 != v23
        || *(unsigned __int16 *)&a2[2 * v21 + 512] != v23
        || *(unsigned __int16 *)&a2[2 * v21 + 1024] != v23 )
      {
        v14 = 0;
      }
    }
    ++v15;
  }
  if ( !updated && !a4 )
    return updated;
  v24 = (void *)*((_QWORD *)a1 + 211);
  if ( !v24 )
  {
    v24 = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
    if ( !v24 )
    {
      *(_DWORD *)v6 = 6;
      return 0;
    }
    *((_QWORD *)a1 + 211) = v24;
  }
  memmove(v24, a2, 0x600uLL);
  if ( updated )
  {
    if ( *((_QWORD *)a1 + 212) )
    {
      if ( !*((_QWORD *)a1 + 213) )
      {
        v28 = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
        if ( v28 )
          *((_QWORD *)a1 + 213) = v28;
        else
          updated = 0;
      }
      if ( !updated )
        goto LABEL_29;
      PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&a5);
    }
    updated = UpdateGammaRampOnDevice(a1, 1LL);
    *(_DWORD *)v6 = 7;
  }
LABEL_29:
  if ( v14 )
  {
    v25 = *((_QWORD *)a1 + 211);
    *((_QWORD *)a1 + 211) = 0LL;
    Win32FreePool(v25);
    v26 = *((_QWORD *)a1 + 213);
    if ( v26 )
    {
      *((_QWORD *)a1 + 213) = 0LL;
      Win32FreePool(v26);
    }
  }
  return updated;
}
