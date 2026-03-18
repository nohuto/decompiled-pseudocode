/*
 * XREFs of IncPaintCountInterMoveSize @ 0x1C023AF7C
 * Callers:
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 * Callees:
 *     SetWakeBitInterMoveSize @ 0x1C01D6CA0 (SetWakeBitInterMoveSize.c)
 */

int __fastcall IncPaintCountInterMoveSize(__int64 a1)
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
    return SetWakeBitInterMoveSize(v1);
  }
  return result;
}
