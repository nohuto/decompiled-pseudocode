/*
 * XREFs of __scrt_is_nonwritable_in_current_image @ 0x180125F40
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126330 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _scrt_is_nonwritable_in_current_image(__int64 a1)
{
  unsigned __int64 v1; // r8
  _DWORD *v2; // rdx
  _DWORD *v3; // r9
  unsigned __int64 v4; // rcx

  if ( MEMORY[0x180000000] != 23117
    || *(_DWORD *)(MEMORY[0x18000003C] + 0x180000000LL) != 17744
    || *(_WORD *)(MEMORY[0x18000003C] + 0x180000018LL) != 523 )
  {
    return 0;
  }
  v1 = a1 - 0x180000000LL;
  v2 = (_DWORD *)(*(unsigned __int16 *)(MEMORY[0x18000003C] + 0x180000014LL) + MEMORY[0x18000003C] + 0x180000018LL);
  v3 = &v2[10 * *(unsigned __int16 *)(MEMORY[0x18000003C] + 0x180000006LL)];
  while ( v2 != v3 )
  {
    v4 = (unsigned int)v2[3];
    if ( v1 >= v4 && v1 < (unsigned int)(v4 + v2[2]) )
      return v2 && v2[9] >= 0;
    v2 += 10;
  }
  v2 = 0LL;
  return v2 && v2[9] >= 0;
}
