/*
 * XREFs of GatherDeviceInfoSummaryInformation @ 0x1C010F320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall GatherDeviceInfoSummaryInformation(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        int *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v7; // rax
  __int16 v10; // r8
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 v15; // dx

  LOBYTE(v7) = *(_BYTE *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 224) )
  {
    if ( (_BYTE)v7 != 2 )
      return (char)v7;
    goto LABEL_11;
  }
  if ( (_BYTE)v7 )
  {
    if ( (unsigned __int8)v7 == 1 )
    {
      v12 = *(const wchar_t **)(a1 + 216);
      if ( v12 && !wcsncmp(v12, L"\\??\\Root#RDP", 0xCuLL) )
        goto LABEL_21;
      v13 = *(unsigned __int8 *)(a1 + 464);
      if ( v13 == 4 )
      {
        if ( *(_BYTE *)(a1 + 465) == 0xFF )
          goto LABEL_21;
      }
      else if ( (unsigned int)(v13 - 7) > 1 )
      {
LABEL_21:
        v7 = a6;
        goto LABEL_12;
      }
      v15 = gKeyboardInfo[2];
      *(_OWORD *)gKeyboardInfo = *(_OWORD *)(a1 + 464);
      *(_QWORD *)&gKeyboardInfo[8] = *(_QWORD *)(a1 + 480);
      *(_DWORD *)&gKeyboardInfo[12] = *(_DWORD *)(a1 + 488);
      if ( v15 > gKeyboardInfo[2] )
        gKeyboardInfo[2] = v15;
      goto LABEL_21;
    }
    if ( (unsigned __int8)v7 != 2 )
      return (char)v7;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 480);
      if ( v14 )
      {
        if ( (unsigned int)(*(_DWORD *)(v14 + 24) - 1) <= 6 )
          ++*a2;
      }
    }
LABEL_11:
    v7 = a7;
LABEL_12:
    ++*v7;
    return (char)v7;
  }
  v10 = *(_WORD *)(a1 + 464);
  ++*a2;
  v11 = *a5;
  if ( *a5 <= (unsigned int)*(unsigned __int16 *)(a1 + 466) )
    v11 = *(unsigned __int16 *)(a1 + 466);
  *a5 = v11;
  if ( v10 < 0 )
  {
    *a4 = 1;
    v10 &= ~0x8000u;
  }
  LOBYTE(v7) = v10;
  if ( v10 == 256 || v10 == 32 || v10 == 64 )
    ++*a3;
  if ( ghMouseDevice == -1 )
  {
    v7 = *(_DWORD **)a1;
    ghMouseDevice = *(_QWORD *)a1;
  }
  return (char)v7;
}
