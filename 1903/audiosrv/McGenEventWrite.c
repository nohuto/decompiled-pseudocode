/*
 * XREFs of McGenEventWrite @ 0x180043B28
 * Callers:
 *     McTemplateU0 @ 0x180004D50 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x1800087CC (McTemplateU0zqttq.c)
 *     McTemplateU0z @ 0x180061334 (McTemplateU0z.c)
 *     McTemplateU0zd @ 0x1800613BC (McTemplateU0zd.c)
 *     McTemplateU0zq @ 0x1800C2580 (McTemplateU0zq.c)
 *     McTemplateU0p @ 0x1800EC360 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x1800EC3BC (McTemplateU0pq.c)
 *     McTemplateU0qzz @ 0x18010D9DC (McTemplateU0qzz.c)
 *     McTemplateU0pxx @ 0x180112124 (McTemplateU0pxx.c)
 *     McTemplateU0jjt @ 0x18013BAEC (McTemplateU0jjt.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013C290 (McTemplateU0pqpqqqqqq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_1801B6438;
  v6 = 0;
  if ( qword_1801B6438 )
  {
    *(_QWORD *)a5 = qword_1801B6438;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, a4, a5);
}
