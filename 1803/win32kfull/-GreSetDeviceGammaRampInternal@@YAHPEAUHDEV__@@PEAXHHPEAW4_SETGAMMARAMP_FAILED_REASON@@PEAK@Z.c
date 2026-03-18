/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00BBF58
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C00BBD80 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     UpdateGammaRampOnDevice @ 0x1C00BC1F0 (UpdateGammaRampOnDevice.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C0285E20 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDeviceGammaRampInternal(
        enum _SETGAMMARAMP_FAILED_REASON *a1,
        _OWORD *a2,
        int a3,
        int a4,
        enum _SETGAMMARAMP_FAILED_REASON *a5,
        unsigned int *a6)
{
  enum _SETGAMMARAMP_FAILED_REASON *v6; // r14
  unsigned int *v8; // rcx
  unsigned int updated; // edi
  _OWORD *v11; // rsi
  const void *v12; // rcx
  BOOL v13; // ebp
  signed int v15; // ecx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  signed int v18; // r9d
  signed int v19; // r10d
  signed int v20; // r11d
  __int64 v21; // r8
  int v22; // eax
  int v23; // edx
  signed int v24; // eax
  _OWORD *v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax

  v6 = a5;
  v8 = a6;
  updated = 0;
  a5 = a1;
  v11 = a2;
  *(_DWORD *)v6 = 2;
  *v8 = (unsigned int)a1;
  if ( !a1 || (*((_DWORD *)a1 + 10) & 1) == 0 )
    return updated;
  if ( (unsigned int)(*((_DWORD *)a1 + 525) - 4) > 2 )
  {
    *(_DWORD *)v6 = 3;
    *v8 = *((_DWORD *)a1 + 525);
  }
  else
  {
    if ( *((_QWORD *)a1 + 402) && (*((_DWORD *)a1 + 530) & 0x10) != 0 )
    {
      updated = 1;
      goto LABEL_7;
    }
    *(_DWORD *)v6 = 4;
  }
  if ( !a4 )
    return updated;
LABEL_7:
  v12 = (const void *)*((_QWORD *)a1 + 210);
  v13 = a3 == 0;
  if ( v12 && RtlCompareMemory(v12, a2, 0x600uLL) == 1536 )
    return updated;
  v15 = -giIcmGammaRange;
  v16 = 2 * giIcmGammaRange;
  while ( updated && a3 || v13 )
  {
    v17 = v15 + giIcmGammaRange;
    if ( (unsigned int)v17 >= 0x100 )
      break;
    v18 = *((unsigned __int8 *)v11 + 2 * v17 + 1);
    v19 = *((unsigned __int8 *)v11 + 2 * v17 + 513);
    v20 = *((unsigned __int8 *)v11 + 2 * v17 + 1025);
    v21 = (unsigned int)v17;
    if ( updated )
    {
      if ( a3 )
      {
        if ( v18 < v15 || (v24 = v15 + v16, v18 > (int)(v15 + v16)) || v19 < v15 || v19 > v24 || v20 < v15 || v20 > v24 )
        {
          updated = 0;
          *(_DWORD *)v6 = 5;
        }
      }
    }
    if ( v13 )
    {
      v22 = *((unsigned __int16 *)v11 + (unsigned int)v17);
      v23 = (_DWORD)v17 << 8;
      if ( v22 != v23 || *((unsigned __int16 *)v11 + v21 + 256) != v23 || *((unsigned __int16 *)v11 + v21 + 512) != v23 )
        v13 = 0;
    }
    ++v15;
  }
  if ( !updated && !a4 )
    return updated;
  v25 = (_OWORD *)*((_QWORD *)a1 + 210);
  if ( !v25 )
  {
    v25 = (_OWORD *)PALLOCMEM2(0x600uLL);
    if ( !v25 )
    {
      *(_DWORD *)v6 = 6;
      return 0;
    }
    *((_QWORD *)a1 + 210) = v25;
  }
  v26 = 12LL;
  do
  {
    *v25 = *v11;
    v25[1] = v11[1];
    v25[2] = v11[2];
    v25[3] = v11[3];
    v25[4] = v11[4];
    v25[5] = v11[5];
    v25[6] = v11[6];
    v25 += 8;
    v27 = v11[7];
    v11 += 8;
    *(v25 - 1) = v27;
    --v26;
  }
  while ( v26 );
  if ( updated )
  {
    if ( *((_QWORD *)a1 + 211) )
    {
      if ( !*((_QWORD *)a1 + 212) )
      {
        v30 = PALLOCMEM2(0x600uLL);
        if ( v30 )
          *((_QWORD *)a1 + 212) = v30;
        else
          updated = 0;
      }
      if ( !updated )
        goto LABEL_36;
      PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&a5);
    }
    updated = UpdateGammaRampOnDevice(a1, 1LL);
    *(_DWORD *)v6 = 7;
  }
LABEL_36:
  if ( v13 )
  {
    v28 = *((_QWORD *)a1 + 210);
    *((_QWORD *)a1 + 210) = 0LL;
    Win32FreePool(v28);
    v29 = *((_QWORD *)a1 + 212);
    if ( v29 )
    {
      *((_QWORD *)a1 + 212) = 0LL;
      Win32FreePool(v29);
    }
  }
  return updated;
}
