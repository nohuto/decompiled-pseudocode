/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C00181D0
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)this + 104LL;
  *(_DWORD *)(v1 + 80) = 120;
  *(_QWORD *)(v1 + 84) = 1LL;
  *(_QWORD *)(v1 + 92) = 0LL;
  *(_DWORD *)(v1 + 100) = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0x80000000;
  *(_QWORD *)(v2 + 8) = 0x7FFFFFFFLL;
  *(_QWORD *)(v1 + 40) = v2 + 16;
}
