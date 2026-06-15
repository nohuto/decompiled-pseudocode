/*
 * XREFs of ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x1801036E4
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x18004EE00 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x18010350C (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x18010363C (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioJournal::WriteValue(
        const WCHAR *this,
        const unsigned __int16 *a2,
        DWORD a3,
        unsigned __int8 *a4,
        DWORD cbData)
{
  LSTATUS v8; // eax
  signed int v9; // ebx
  __int64 v10; // rdx
  LSTATUS v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = 0LL;
  v8 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, this + 716, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v9 = v8;
  if ( v8 > 0 )
    v9 = (unsigned __int16)v8 | 0x80070000;
  if ( v9 < 0 )
  {
    v10 = 452LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v11 = RegSetValueExW(hKey, a2, 0, a3, a4, cbData);
  v9 = v11;
  if ( v11 > 0 )
    v9 = (unsigned __int16)v11 | 0x80070000;
  if ( v9 < 0 )
  {
    v10 = 455LL;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_11:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v9;
}
