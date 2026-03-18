/*
 * XREFs of ?StateFlags@PDEVOBJ@@QEBAKXZ @ 0x1C0273574
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C02744C0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::StateFlags(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return *(unsigned int *)(v1 + 160);
  else
    return 0LL;
}
