/*
 * XREFs of PspSetProcessShortName @ 0x14065FC58
 * Callers:
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     PspSetMinimalProcessName @ 0x140758A60 (PspSetMinimalProcessName.c)
 * Callees:
 *     <none>
 */

char __fastcall PspSetProcessShortName(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r9
  _BYTE *v3; // r8
  _WORD *v4; // rcx
  unsigned __int64 v5; // rax
  _WORD *v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx

  v2 = *((_QWORD *)a2 + 1);
  v3 = (_BYTE *)(a1 + 1104);
  v4 = (_WORD *)(v2 + *a2);
  LODWORD(v5) = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v4 > v2 )
    {
      while ( 1 )
      {
        v6 = v4--;
        if ( *v4 == 92 )
          break;
        LODWORD(v5) = v5 + 1;
        if ( (unsigned __int64)v4 <= v2 )
          goto LABEL_7;
      }
      v4 = v6;
LABEL_7:
      if ( (unsigned int)v5 >= 0xF )
        LODWORD(v5) = 14;
    }
    v7 = (unsigned int)v5;
    v8 = 0LL;
    v5 = (unsigned __int64)&v3[(unsigned int)v5];
    if ( (unsigned __int64)v3 > v5 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        LOBYTE(v5) = *(_BYTE *)v4;
        ++v8;
        *v3++ = *(_BYTE *)v4++;
      }
      while ( v8 < v7 );
    }
  }
  *v3 = 0;
  return v5;
}
