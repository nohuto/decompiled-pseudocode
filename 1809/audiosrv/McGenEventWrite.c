/*
 * XREFs of McGenEventWrite @ 0x180011F2C
 * Callers:
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13 @ 0x180002A08 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13.c)
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x180002B94 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x180003124 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 *     McTemplateU0 @ 0x180005030 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180005078 (McTemplateU0zqttq.c)
 *     McTemplateU0qqqqzr3 @ 0x18005124C (McTemplateU0qqqqzr3.c)
 *     McTemplateU0zd @ 0x18005ED30 (McTemplateU0zd.c)
 *     McTemplateU0z @ 0x18005EDD8 (McTemplateU0z.c)
 *     McTemplateU0zq @ 0x1800B3DD0 (McTemplateU0zq.c)
 *     McTemplateU0p @ 0x1800E0D30 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x1800E0D94 (McTemplateU0pq.c)
 *     McTemplateU0qzz @ 0x1800FFF9C (McTemplateU0qzz.c)
 *     McTemplateU0pxx @ 0x180104394 (McTemplateU0pxx.c)
 *     McTemplateU0jjt @ 0x180132D78 (McTemplateU0jjt.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x180134214 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x1801343C4 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  int v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    *(_QWORD *)a5 = v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v8 = 0;
  }
  *(_DWORD *)(a5 + 8) = v8;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(*a1, a2, 0LL, 0LL, a4, a5);
}
