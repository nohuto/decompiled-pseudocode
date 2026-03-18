/*
 * XREFs of PhysicalToLogicalPointForWindow @ 0x1C01AF9E4
 * Callers:
 *     PtInsideWindowFrameBounds @ 0x1C01BF640 (PtInsideWindowFrameBounds.c)
 *     ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC (-xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     TransformVector @ 0x1C01CBD34 (TransformVector.c)
 */

__int64 __fastcall PhysicalToLogicalPointForWindow(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 200);
  result = (__int64)a3;
  *a3 = a1;
  if ( v3 )
    return TransformVector(v3, (_DWORD)a3, (int)a3 + 4, 0, 1);
  return result;
}
