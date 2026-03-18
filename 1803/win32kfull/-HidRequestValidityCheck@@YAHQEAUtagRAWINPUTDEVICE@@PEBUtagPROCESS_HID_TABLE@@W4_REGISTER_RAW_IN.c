/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0059C30
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C005A668 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // zf

  v5 = 0LL;
  if ( a3 != 2 && (*(_DWORD *)(a1 + 4) & 0xFFFFC0CE) != 0 )
    goto LABEL_40;
  if ( !*(_WORD *)a1 )
    goto LABEL_27;
  if ( a2
    && *(_WORD *)a1 == 1
    && *(_WORD *)(a1 + 2) == 6
    && !((*(_DWORD *)(a1 + 4) & 1) != 0
       ? __CFSHR__(*(_DWORD *)(a2 + 100), 12) == (a3 == 2)
       : !__CFSHR__(*(_DWORD *)(a2 + 100), 12)) )
  {
    goto LABEL_27;
  }
  if ( a3 != 1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
      v5 = ValidateHwnd(v6);
  }
  v7 = *(_DWORD *)(a1 + 4);
  if ( (v7 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_40;
    if ( *(_WORD *)(a1 + 2) == 2 )
    {
      v12 = (unsigned __int8)v7 & 0xF0;
      if ( (_BYTE)v12 != 48 || !v5 )
        goto LABEL_40;
      v13 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v12);
    }
    else
    {
      v13 = *(_WORD *)(a1 + 2) == 6;
    }
    if ( !v13 )
      goto LABEL_40;
  }
  a2 = *(unsigned int *)(a1 + 4);
  if ( (a2 & 0x400) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_40;
    if ( *(_WORD *)(a1 + 2) != 6 )
      goto LABEL_40;
    v8 = (unsigned __int8)a2 & 0xF0;
    if ( (_DWORD)v8 != 48 )
      goto LABEL_40;
  }
  else
  {
    v8 = (unsigned __int8)a2 & 0xF0;
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_12;
  if ( (((_DWORD)v8 - 16) & 0xFFFFFFDF) == 0 )
  {
LABEL_40:
    v11 = 1004LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_27;
LABEL_12:
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 == 32 )
    {
      if ( *(_WORD *)(a1 + 2) )
        goto LABEL_27;
      goto LABEL_16;
    }
    if ( (_DWORD)v8 != 16 )
    {
      if ( (_DWORD)v8 != 48 || !(unsigned int)IsLegacyDevice(*(_WORD *)a1, *(_WORD *)(a1 + 2)) )
        goto LABEL_27;
      goto LABEL_16;
    }
    a2 &= 0x1100u;
    if ( (_DWORD)a2 )
      goto LABEL_27;
  }
  else
  {
    a2 &= 0x1100u;
  }
  if ( !*(_WORD *)(a1 + 2) )
    goto LABEL_27;
  if ( (_DWORD)v8 == 16 )
  {
    if ( !(_DWORD)a2 && !*(_QWORD *)(a1 + 8) )
      return 1LL;
    goto LABEL_27;
  }
LABEL_16:
  if ( a3 != 1 && *(_QWORD *)(a1 + 8) )
  {
    if ( !v5 )
      goto LABEL_27;
    goto LABEL_19;
  }
  if ( v5 )
  {
LABEL_19:
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v8) )
      goto LABEL_27;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x1100) == 0 || v5 || a3 == 1 && *(_QWORD *)(a1 + 8) )
    return 1LL;
LABEL_27:
  v11 = 87LL;
LABEL_28:
  UserSetLastError(v11, a2);
  return 0LL;
}
