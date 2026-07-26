/*
 * XREFs of NdisSetAoAcOptions @ 0x1C00FD9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  int v7; // r8d

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 4496);
  v5 = v4;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
  {
    WPP_SF_qD(0x2Eu, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, a1, a2);
    v5 = *(_QWORD *)(v2 + 4496);
  }
  if ( v5 )
  {
    v7 = ndisNicQuietDerefDefaultTimeout;
    if ( (a2 & 1) != 0 )
      v7 = ndisNicQuietDerefExtendedTimeout;
    *(_DWORD *)(v4 + 284) = v7;
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_D(0x30u, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, v7);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 3u )
      WPP_SF_(0x2Fu, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids);
    return 3221225659LL;
  }
}
