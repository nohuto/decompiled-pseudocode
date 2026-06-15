/*
 * XREFs of ?ReadVersion@AudioJournal@@AEAAHXZ @ 0x18004F13C
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x18004EE00 (-Initialize@AudioJournal@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioJournal::ReadVersion(AudioJournal *this)
{
  int ValueW; // eax
  bool v3; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = HIDWORD(this);
  v5 = 0;
  v7 = 4;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_1801B9248, L"Version", 0x18u, 0LL, &v5, &v7);
  if ( ValueW )
  {
    v5 = 0;
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
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
          (const char *)(unsigned int)ValueW);
    }
  }
  return v5;
}
