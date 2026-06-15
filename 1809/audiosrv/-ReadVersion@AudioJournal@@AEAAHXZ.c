/*
 * XREFs of ?ReadVersion@AudioJournal@@AEAAHXZ @ 0x180049A3C
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x180049700 (-Initialize@AudioJournal@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioJournal::ReadVersion(AudioJournal *this)
{
  int ValueW; // eax
  bool v3; // sf
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+54h] [rbp+Ch]
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = HIDWORD(this);
  v6 = 0;
  v8 = 4;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_1801B41A8, L"Version", 0x18u, 0LL, &v6, &v8);
  if ( ValueW )
  {
    v6 = 0;
    if ( ValueW != 2 )
    {
      v3 = ValueW < 0;
      if ( ValueW > 0 )
      {
        ValueW = (unsigned __int16)ValueW | 0x80070000;
        v3 = ValueW < 0;
      }
      if ( v3 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
          (const char *)(unsigned int)ValueW,
          v4);
    }
  }
  return v6;
}
