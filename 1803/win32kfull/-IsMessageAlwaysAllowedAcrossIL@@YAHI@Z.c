/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0062410
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C001B330 (NtUserPostThreadMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0024530 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     NtUserPostMessage @ 0x1C0041200 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0061A1C (_PostTransformableMessageIL.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0061E4C (_ChangeWindowMessageFilterEx.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C010ADA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01AC270 (_PostMessageCheckIL.c)
 * Callees:
 *     IsFmtBlocked @ 0x1C01D3550 (IsFmtBlocked.c)
 */

__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1)
{
  unsigned int v1; // r10d

  v1 = 0;
  if ( a1 > 0x308 )
  {
    if ( a1 > 0x30C )
    {
      if ( a1 == 781 )
        return 1;
      if ( a1 != 782 )
      {
        if ( a1 != 787 && (a1 <= 0x319 || a1 != 799 && a1 > 0x31B) )
          return v1;
        return 1;
      }
    }
    LOBYTE(v1) = (unsigned int)IsFmtBlocked(128LL) == 0;
    return v1;
  }
  if ( a1 == 776 || !a1 || a1 == 3 || a1 == 5 || a1 > 0xC && (a1 <= 0xE || a1 == 51 || a1 == 127 || a1 == 773) )
    return 1;
  return v1;
}
