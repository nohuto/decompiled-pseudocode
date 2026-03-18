/*
 * XREFs of traceFrame @ 0x1C0122AD8
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C012335C (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004F608 (WPP_RECORDER_SF_DD.c)
 *     tracePointerFlags @ 0x1C0122BA8 (tracePointerFlags.c)
 */

__int64 __fastcall traceFrame(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int16 v3; // r9
  __int64 result; // rax
  _DWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = 44;
  if ( !*(_DWORD *)(a1 + 56) )
    v3 = 45;
  result = WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, v3, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 88) + 52LL);
    do
    {
      LODWORD(v8) = *((unsigned __int16 *)v5 - 22);
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x2Eu, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids, v8);
      LODWORD(v10) = *v5;
      LODWORD(v9) = *(v5 - 1);
      WPP_RECORDER_SF_DD(v7, v6, 0x16u, 0x2Bu, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids, v9, v10);
      result = tracePointerFlags((unsigned int)*(v5 - 6));
      ++v1;
      v5 += 42;
    }
    while ( v1 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
