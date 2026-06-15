/*
 * XREFs of ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x140051780
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14004E4B0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::VTFromRegType(LPCWSTR lpString1, unsigned __int16 *a2)
{
  LPCWSTR *v3; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax

  v3 = (LPCWSTR *)&off_140068520;
  v5 = 0;
  while ( lstrcmpiW(lpString1, *v3) )
  {
    ++v5;
    v3 += 2;
    if ( v5 >= 4 )
      return 0LL;
  }
  result = 1LL;
  *a2 = *((_WORD *)&off_140068520 + 8 * (int)v5 + 4);
  return result;
}
