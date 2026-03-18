/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18
 * Callers:
 *     NtUserPostMessage @ 0x1C00298E0 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00676B0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00D01F4 (_PostTransformableMessageIL.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00D0644 (_ChangeWindowMessageFilterEx.c)
 *     NtUserPostThreadMessage @ 0x1C00D48B0 (NtUserPostThreadMessage.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C012CDA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01CF480 (_PostMessageCheckIL.c)
 * Callees:
 *     IsFmtBlocked @ 0x1C01F7E38 (IsFmtBlocked.c)
 */

__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1)
{
  unsigned int v1; // r10d

  v1 = 0;
  if ( a1 <= 0x308 )
  {
    if ( a1 != 776 && a1 && a1 != 3 && a1 != 5 && (a1 <= 0xC || a1 != 127 && a1 > 0xE && a1 != 51 && a1 != 773) )
      return v1;
    return 1;
  }
  if ( a1 <= 0x30C )
    goto LABEL_21;
  if ( a1 == 781 )
    return 1;
  if ( a1 == 782 )
  {
LABEL_21:
    LOBYTE(v1) = (unsigned int)IsFmtBlocked(128LL) == 0;
    return v1;
  }
  if ( a1 == 787 || a1 > 0x319 && (a1 == 799 || a1 <= 0x31B) )
    return 1;
  return v1;
}
