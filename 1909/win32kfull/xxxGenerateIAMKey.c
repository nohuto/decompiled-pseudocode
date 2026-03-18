/*
 * XREFs of xxxGenerateIAMKey @ 0x1C000EFA8
 * Callers:
 *     xxxSetShellWindow @ 0x1C000EFF4 (xxxSetShellWindow.c)
 * Callees:
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D60A8 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 */

__int64 __fastcall xxxGenerateIAMKey(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 272;
  result = SystemPrng(&v3, 8LL);
  if ( (_DWORD)result )
  {
    *(_QWORD *)(v1 + 8) = v3;
    goto LABEL_3;
  }
  result = xxxCallGenerateIAMKey((struct tagIAM_KKEY *)v1);
  if ( (int)result < 0 )
  {
    result = 0LL;
LABEL_3:
    if ( !(_DWORD)result )
      return result;
  }
  *(_DWORD *)v1 = 1;
  return result;
}
