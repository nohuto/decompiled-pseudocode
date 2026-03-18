/*
 * XREFs of LogicalToPhysicalPointForWindow @ 0x1C01AF8E8
 * Callers:
 *     CloneWindowPosAndArrangementAsync @ 0x1C019EAFC (CloneWindowPosAndArrangementAsync.c)
 * Callees:
 *     TransformVector @ 0x1C01CBD34 (TransformVector.c)
 */

__int64 __fastcall LogicalToPhysicalPointForWindow(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 200);
  result = (__int64)a3;
  *a3 = a1;
  if ( v3 )
    return TransformVector(v3, (_DWORD)a3, (int)a3 + 4, 0, 0);
  return result;
}
