/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x1400F3BEC
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x14067AEF0 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F406C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x1400F4634 (LdrpFindMessageInAlternateModule.c)
 *     LdrpSearchResourceSection_U @ 0x14067AEF0 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(int a1, __int64 a2, int a3, char a4, _QWORD *a5)
{
  unsigned __int16 v7; // di
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  if ( (unsigned int)(a3 - 3) > 1 )
    return 3221225713LL;
  v7 = *(_WORD *)(a2 + 16);
  v11 = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, (unsigned int)&v10, (unsigned int)&v11, a4);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741766 )
      return 3221946369LL;
  }
  else
  {
    v9 = v10;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 48, (__int64)a5);
    if ( (a4 & 0x40) != 0 && (int)result >= 0 )
    {
      result = LdrpFindMessageInAlternateModule(v10, *a5, 0, *(_DWORD *)(a2 + 24), 0);
      if ( (int)result < 0 )
        *a5 = 0LL;
    }
  }
  return result;
}
