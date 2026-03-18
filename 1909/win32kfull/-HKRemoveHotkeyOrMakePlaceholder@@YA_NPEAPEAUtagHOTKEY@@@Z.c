/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C00D00C4
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00CFFA0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1)
{
  _WORD *v1; // rbx
  __int16 v3; // dx
  __int16 v4; // cx
  struct tagSASKEY near **v6; // rax
  unsigned int v7; // ecx

  v1 = *a1;
  v3 = *((_WORD *)*a1 + 13);
  if ( (v3 & 0x100) == 0 )
  {
    if ( *((_QWORD *)v1 + 2) == 1LL )
    {
      *((_QWORD *)v1 + 2) = 0LL;
    }
    else
    {
      HMAssignmentUnlock(v1 + 8);
      v3 = v1[13];
    }
    if ( v3 < 0 )
    {
      v6 = &gSasKeyList;
      v7 = 0;
      while ( *((_DWORD *)v6 + 1) != *((_DWORD *)v1 + 7) || *(_DWORD *)v6 != (unsigned __int16)v1[12] )
      {
        ++v7;
        ++v6;
        if ( v7 >= 2 )
          goto LABEL_5;
      }
      qword_1C03293B8 = 0LL;
    }
LABEL_5:
    v4 = v1[13];
    if ( (v4 & 0x200) == 0 || *((_WORD **)v1 + 6) == v1 + 24 )
    {
      *a1 = (struct tagHOTKEY *)*((_QWORD *)v1 + 5);
      Win32FreePool(v1);
      return 1;
    }
    *(_QWORD *)v1 = 0LL;
    v1[13] = v4 | 0x100;
    *((_DWORD *)v1 + 8) = 0;
  }
  return 0;
}
