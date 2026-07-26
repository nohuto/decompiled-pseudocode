/*
 * XREFs of ndisMQueueOidRequest @ 0x1C004616C
 * Callers:
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00487B0 (ndisQueueRestoreRequestsOnTop.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMQueueOidRequest(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *i; // rcx
  _QWORD *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = (_QWORD *)(a2 + 72);
  v5 = -1073741823;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x15u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (*(_DWORD *)(a1 + 124) & 0x100) == 0 )
  {
    v6 = (_QWORD *)(a1 + 2208);
    for ( i = *(_QWORD **)(a1 + 2208); i != v6; i = (_QWORD *)*i )
    {
      if ( i == v3 )
        goto LABEL_11;
    }
    v8 = *(_QWORD **)(a1 + 2216);
    v5 = 0;
    if ( (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v3 = v6;
    v3[1] = v8;
    *v8 = v3;
    *(_QWORD *)(a1 + 2216) = v3;
  }
LABEL_11:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v10 = v5;
    WPP_SF_qqd(0x16u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v10);
  }
  return v5;
}
