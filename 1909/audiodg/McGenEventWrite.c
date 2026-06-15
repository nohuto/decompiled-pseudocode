/*
 * XREFs of McGenEventWrite @ 0x14002BD80
 * Callers:
 *     McTemplateU0q @ 0x14002BDDC (McTemplateU0q.c)
 *     McTemplateU0 @ 0x140039D2C (McTemplateU0.c)
 *     McTemplateU0zq @ 0x140039D74 (McTemplateU0zq.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041160 (McTemplateU0pqpqqqqqq.c)
 *     McTemplateU0jjt @ 0x140043AF0 (McTemplateU0jjt.c)
 *     McTemplateU0p @ 0x140053548 (McTemplateU0p.c)
 *     McTemplateU0pqx @ 0x1400535AC (McTemplateU0pqx.c)
 *     McTemplateU0pqxxxx @ 0x140053638 (McTemplateU0pqxxxx.c)
 *     McTemplateU0pqxxxxffff @ 0x1400536F4 (McTemplateU0pqxxxxffff.c)
 *     McTemplateU0pq @ 0x14005493C (McTemplateU0pq.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 *     McTemplateU0pqqqq @ 0x140055B9C (McTemplateU0pqqqq.c)
 *     McTemplateU0pxxq @ 0x140055C40 (McTemplateU0pxxq.c)
 *     McTemplateU0pqqq @ 0x140056C3C (McTemplateU0pqqq.c)
 *     McTemplateU0pqqqx @ 0x140056CD8 (McTemplateU0pqqqx.c)
 *     McTemplateU0pqxxxxx @ 0x140056D84 (McTemplateU0pqxxxxx.c)
 *     McTemplateU0pxqxq @ 0x140056E3C (McTemplateU0pxqxq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_140085048;
  v6 = 0;
  if ( qword_140085048 )
  {
    *(_QWORD *)a5 = qword_140085048;
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
