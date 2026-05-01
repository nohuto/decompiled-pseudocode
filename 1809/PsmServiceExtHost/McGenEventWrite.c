/*
 * XREFs of McGenEventWrite @ 0x18003F878
 * Callers:
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x18003F5A8 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x18003F704 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 *     McTemplateU0qqqqzr3 @ 0x180042484 (McTemplateU0qqqqzr3.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x180072314 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x1800724BC (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_18009B1A8;
  v6 = 0;
  if ( qword_18009B1A8 )
  {
    *(_QWORD *)a5 = qword_18009B1A8;
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
  return EtwEventWriteTransfer(PDC_EVENT_PROVIDER_Context, a2, 0LL, 0LL, a4, a5);
}
