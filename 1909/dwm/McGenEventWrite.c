/*
 * XREFs of McGenEventWrite @ 0x140005A30
 * Callers:
 *     McTemplateU0 @ 0x140005A88 (McTemplateU0.c)
 *     McTemplateU0q @ 0x140005AD0 (McTemplateU0q.c)
 *     McTemplateU0qqq @ 0x140005B38 (McTemplateU0qqq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r10
  int v7; // eax
  int v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  if ( v5 )
  {
    *(_QWORD *)a5 = v5;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    v7 = 0;
    *(_QWORD *)a5 = 0LL;
    v8 = 0;
  }
  *(_DWORD *)(a5 + 8) = v8;
  *(_DWORD *)(a5 + 12) = v7;
  return EtwEventWriteTransfer(*a1, a2, 0LL, 0LL, a4, a5);
}
