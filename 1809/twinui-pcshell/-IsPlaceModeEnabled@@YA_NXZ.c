/*
 * XREFs of ?IsPlaceModeEnabled@@YA_NXZ @ 0x1801C9DD0
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C824C (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 */

bool IsPlaceModeEnabled(void)
{
  int v0; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF

  if ( dword_180511198 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180511198);
    if ( dword_180511198 == -1 )
    {
      dword_18051119C = IsPPIEdition() + 1;
      Init_thread_footer(&dword_180511198);
    }
  }
  v0 = dword_180510BB0;
  if ( !dword_180510BB0 )
  {
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\WindowArrangement\\PlaceMode",
           L"Enabled",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      v0 = dword_18051119C;
    }
    else
    {
      v0 = 2 - (pvData != 0);
    }
    dword_180510BB0 = v0;
  }
  return v0 == 1;
}
