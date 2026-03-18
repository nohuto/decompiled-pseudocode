/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0012A4C
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000E4C0 (NtUserPostThreadMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0012080 (_PostTransformableMessageIL.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0012468 (_ChangeWindowMessageFilterEx.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1C0046340 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A9E40 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0111318 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01E3F44 (_PostMessageCheckIL.c)
 * Callees:
 *     IsFmtBlocked @ 0x1C020DF24 (IsFmtBlocked.c)
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
