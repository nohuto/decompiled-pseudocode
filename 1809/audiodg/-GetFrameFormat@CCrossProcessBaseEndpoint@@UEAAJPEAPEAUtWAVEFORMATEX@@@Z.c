/*
 * XREFs of ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14001A0B0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFrameFormat(
        CCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  struct tWAVEFORMATEX *v5; // rax
  struct tWAVEFORMATEX *v6; // rsi
  unsigned int v7; // ebx

  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      v3 = *((_QWORD *)this + 9);
      v4 = *(unsigned __int16 *)(v3 + 188);
      v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v4 + 18);
      v6 = v5;
      if ( v5 )
      {
        memcpy_0(v5, (const void *)(v3 + 172), v4 + 18);
        v7 = 0;
      }
      else
      {
        v7 = -2147024882;
      }
      *a2 = v6;
      if ( (v7 & 0x80000000) == 0 )
        return v7;
    }
    else
    {
      v7 = -2147467261;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids, v7);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetFrameFormat", 0x1E5u, v7);
  return v7;
}
