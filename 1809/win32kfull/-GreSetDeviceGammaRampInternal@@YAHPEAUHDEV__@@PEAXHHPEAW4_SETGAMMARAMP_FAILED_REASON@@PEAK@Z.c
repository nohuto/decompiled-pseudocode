/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0097768
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C0097500 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C0002EEC (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     UpdateGammaRampOnDevice @ 0x1C0096BA0 (UpdateGammaRampOnDevice.c)
 *     memmove @ 0x1C0163300 (memmove.c)
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
  const void *v12; // rcx
  BOOL v13; // ebp
  signed int v14; // ecx
  unsigned int v15; // r13d
  __int64 v16; // rdx
  signed int v17; // r9d
  signed int v18; // r10d
  signed int v19; // r11d
  __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  signed int v23; // eax
  void *v24; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
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
      goto LABEL_7;
    }
    *(_DWORD *)v6 = 4;
  }
  if ( !a4 )
    return updated;
LABEL_7:
  v12 = (const void *)*((_QWORD *)a1 + 211);
  v13 = a3 == 0;
  if ( v12 && RtlCompareMemory(v12, a2, 0x600uLL) == 1536 )
    return updated;
  v14 = -giIcmGammaRange;
  v15 = 2 * giIcmGammaRange;
  while ( updated && a3 || v13 )
  {
    v16 = v14 + giIcmGammaRange;
    if ( (unsigned int)v16 >= 0x100 )
      break;
    v17 = a2[2 * v16 + 1];
    v18 = a2[2 * v16 + 513];
    v19 = a2[2 * v16 + 1025];
    v20 = (unsigned int)v16;
    if ( updated )
    {
      if ( a3 )
      {
        if ( v17 < v14 || (v23 = v14 + v15, v17 > (int)(v14 + v15)) || v18 < v14 || v18 > v23 || v19 < v14 || v19 > v23 )
        {
          updated = 0;
          *(_DWORD *)v6 = 5;
        }
      }
    }
    if ( v13 )
    {
      v21 = *(unsigned __int16 *)&a2[2 * (unsigned int)v16];
      v22 = (_DWORD)v16 << 8;
      if ( v21 != v22
        || *(unsigned __int16 *)&a2[2 * v20 + 512] != v22
        || *(unsigned __int16 *)&a2[2 * v20 + 1024] != v22 )
      {
        v13 = 0;
      }
    }
    ++v14;
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
        goto LABEL_33;
      PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&a5);
    }
    updated = UpdateGammaRampOnDevice((__int64)a1, 1);
    *(_DWORD *)v6 = 7;
  }
LABEL_33:
  if ( v13 )
  {
    v26 = *((_QWORD *)a1 + 211);
    *((_QWORD *)a1 + 211) = 0LL;
    Win32FreePool(v26);
    v27 = *((_QWORD *)a1 + 213);
    if ( v27 )
    {
      *((_QWORD *)a1 + 213) = 0LL;
      Win32FreePool(v27);
    }
  }
  return updated;
}
