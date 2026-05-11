/*
 * XREFs of PropertyGetBooleanSideband @ 0x1C0026470
 * Callers:
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000AD1C (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B12C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetBooleanSideband(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = 3221225488LL;
  if ( a4 < *(_DWORD *)(a2 + 92) )
  {
    v6 = *(_QWORD *)(a2 + 128);
    result = 0LL;
    *a3 = 4;
    *a5 = *(unsigned __int8 *)(v6 + 16LL * a4 + 12);
  }
  return result;
}
