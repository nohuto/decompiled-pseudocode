/*
 * XREFs of McGenEventWrite @ 0x140032758
 * Callers:
 *     McTemplateU0q @ 0x1400327B4 (McTemplateU0q.c)
 *     McTemplateU0 @ 0x14003DAF8 (McTemplateU0.c)
 *     McTemplateU0zq @ 0x14003DB40 (McTemplateU0zq.c)
 *     McTemplateU0jjt @ 0x140045FB4 (McTemplateU0jjt.c)
 *     McTemplateU0pq @ 0x140056A94 (McTemplateU0pq.c)
 *     McTemplateU0pqqqq @ 0x140057BA0 (McTemplateU0pqqqq.c)
 *     McTemplateU0pxxq @ 0x140057C44 (McTemplateU0pxxq.c)
 *     McTemplateU0pqqq @ 0x140058BB0 (McTemplateU0pqqq.c)
 *     McTemplateU0pqqqx @ 0x140058C4C (McTemplateU0pqqqx.c)
 *     McTemplateU0pxqxq @ 0x140058CF8 (McTemplateU0pxqxq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_140088058;
  v6 = 0;
  if ( qword_140088058 )
  {
    *(_QWORD *)a5 = qword_140088058;
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
