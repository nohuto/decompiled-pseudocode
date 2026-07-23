/*
 * XREFs of BcpGetMaxResourceProfile @ 0x140186A90
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x1409FC420 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BcpGetCharacterMaxResourceProfile @ 0x140186B54 (BcpGetCharacterMaxResourceProfile.c)
 */

__int64 __fastcall BcpGetMaxResourceProfile(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  int CharacterMaxResourceProfile; // r8d
  unsigned int i; // edi
  unsigned __int16 *v7; // rdx
  unsigned int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int16 *j; // r14

  v2 = &unk_140356448;
  CharacterMaxResourceProfile = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  for ( i = 0; i < 0x1A; ++i )
  {
    v7 = (unsigned __int16 *)*((_QWORD *)v2 - 1);
    if ( v7 != (unsigned __int16 *)&unk_140354480 || (dword_140406AD0 & 0x20000) == 0 )
    {
      CharacterMaxResourceProfile = 0;
      v8 = *v7 >> 1;
      v9 = 0;
      v10 = *v2;
      for ( j = (unsigned __int16 *)*((_QWORD *)v7 + 1); v9 < v8; ++j )
      {
        CharacterMaxResourceProfile = BcpGetCharacterMaxResourceProfile(*j, v10, a1, a2);
        if ( CharacterMaxResourceProfile < 0 )
          break;
        ++v9;
      }
      if ( CharacterMaxResourceProfile < 0 )
        break;
    }
    v2 += 4;
  }
  return (unsigned int)CharacterMaxResourceProfile;
}
