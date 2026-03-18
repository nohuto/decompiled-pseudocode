/*
 * XREFs of GatherDeviceInfoSummaryInformation @ 0x1C0131B40
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
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v7; // rax
  __int16 v10; // r8
  const wchar_t *v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rax
  unsigned __int16 v14; // dx

  LOBYTE(v7) = *(_BYTE *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 224) )
  {
    if ( (_BYTE)v7 != 2 )
      return (char)v7;
    goto LABEL_14;
  }
  if ( (_BYTE)v7 )
  {
    if ( (unsigned __int8)v7 == 1 )
    {
      v11 = *(const wchar_t **)(a1 + 216);
      if ( !v11 || wcsncmp(v11, L"\\??\\Root#RDP", 0xCuLL) )
      {
        v12 = *(_BYTE *)(a1 + 464);
        if ( v12 == 4 )
        {
          if ( *(_BYTE *)(a1 + 465) != 0xFF )
            goto LABEL_31;
        }
        else if ( v12 <= 8u && v12 > 6u )
        {
LABEL_31:
          v14 = gKeyboardInfo[2];
          *(_OWORD *)gKeyboardInfo = *(_OWORD *)(a1 + 464);
          *(_QWORD *)&gKeyboardInfo[8] = *(_QWORD *)(a1 + 480);
          *(_DWORD *)&gKeyboardInfo[12] = *(_DWORD *)(a1 + 488);
          if ( v14 > gKeyboardInfo[2] )
            gKeyboardInfo[2] = v14;
        }
      }
      v7 = a6;
      goto LABEL_15;
    }
    if ( (unsigned __int8)v7 != 2 )
      return (char)v7;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 480);
      if ( v13 )
      {
        if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 1) <= 6 )
          ++*a2;
      }
    }
LABEL_14:
    v7 = a7;
LABEL_15:
    ++*v7;
    return (char)v7;
  }
  v10 = *(_WORD *)(a1 + 464);
  ++*a2;
  LODWORD(v7) = *a5;
  if ( *a5 <= (unsigned int)*(unsigned __int16 *)(a1 + 466) )
    LODWORD(v7) = *(unsigned __int16 *)(a1 + 466);
  *a5 = (_DWORD)v7;
  if ( v10 < 0 )
  {
    LOBYTE(v7) = -1;
    *a4 = 1;
    v10 &= ~0x8000u;
  }
  if ( v10 == 32 || v10 == 64 || (LOBYTE(v7) = 0, v10 == 256) )
    ++*a3;
  if ( ghMouseDevice == -1 )
  {
    v7 = *(_DWORD **)a1;
    ghMouseDevice = *(_QWORD *)a1;
  }
  return (char)v7;
}
