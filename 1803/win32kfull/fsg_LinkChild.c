/*
 * XREFs of fsg_LinkChild @ 0x1C02BDCBC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_LinkChild(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 i; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    for ( i = *(_QWORD *)(v2 + 8); i != a1; i = *(_QWORD *)(i + 8) )
      v2 = i;
    *(_QWORD *)(v2 + 8) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  *(_QWORD *)(a2 + 8) = a1;
  *(_QWORD *)(a2 + 24) = a1;
  *(_OWORD *)(a2 + 184) = *(_OWORD *)(a1 + 184);
  *(_OWORD *)(a2 + 200) = *(_OWORD *)(a1 + 200);
  *(_DWORD *)(a2 + 216) = *(_DWORD *)(a1 + 216);
  result = *(unsigned int *)(a1 + 220);
  *(_DWORD *)(a2 + 220) = result;
  return result;
}
