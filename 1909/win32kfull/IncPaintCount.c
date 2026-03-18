/*
 * XREFs of IncPaintCount @ 0x1C023AF30
 * Callers:
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 * Callees:
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 */

int __fastcall IncPaintCount(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int result; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 592);
  result = v2 + 1;
  *(_DWORD *)(v1 + 592) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    return SetWakeBit(v1, 0x20u);
  }
  return result;
}
