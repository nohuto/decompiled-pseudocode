/*
 * XREFs of DPA_Grow @ 0x1803C0750
 * Callers:
 *     DPA_Clone @ 0x1803C0570 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x1803C0800 (DPA_InsertPtr.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@PEAX@@YAJPEAXK0_K1PEAPEAPEAX@Z @ 0x1803C050C (--$CCv6s_HeapReallocArray@PEAX@@YAJPEAXK0_K1PEAPEAPEAX@Z.c)
 */

BOOL __stdcall DPA_Grow(HDPA pdpa, int cp)
{
  __int64 v2; // r9
  BOOL v3; // edi
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  int v9; // eax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( pdpa )
  {
    if ( cp <= *((_DWORD *)pdpa + 6) )
      return 1;
    v5 = *((_DWORD *)pdpa + 7);
    v6 = v5 + cp - 1;
    if ( v6 >= (unsigned int)cp && (unsigned int)v6 <= 0x7FFFFFFF )
    {
      v7 = (unsigned int)(v6 >> 31);
      LODWORD(v7) = v6 % v5;
      v8 = v6 - v6 % v5;
      if ( (int)CCv6s_HeapReallocArray<void *>(*((void **)pdpa + 2), v7, *((void **)pdpa + 1), v2, v8, v11) >= 0 )
      {
        *((_QWORD *)pdpa + 1) = v11[0];
        v9 = *((_DWORD *)pdpa + 7);
        *((_DWORD *)pdpa + 6) = v8;
        if ( v9 < 256 )
          *((_DWORD *)pdpa + 7) = 2 * v9;
        return 1;
      }
    }
  }
  return v3;
}
