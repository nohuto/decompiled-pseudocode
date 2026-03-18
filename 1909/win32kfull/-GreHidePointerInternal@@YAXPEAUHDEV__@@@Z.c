/*
 * XREFs of ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C011A9AC
 * Callers:
 *     GreHidePointer @ 0x1C013AA70 (GreHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C008B5E0 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreHidePointerInternal(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rsi
  int v5; // ebp
  _DWORD *v6; // rcx

  GreAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[8], 4LL);
  if ( (a1[5] & 0x20000) != 0 )
  {
    v3 = a1[225];
    v4 = *(_QWORD **)v3;
    v5 = *(_DWORD *)(v3 + 16);
    do
    {
      v6 = (_DWORD *)v4[6];
      if ( (v6[532] & 0x2000) == 0 )
        vMovePointer(v6, 0xFFFFFFFFLL, 0xFFFFFFFFLL, dword_1C032C020);
      v4 = (_QWORD *)*v4;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    vMovePointer(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL, dword_1C032C020);
  }
  v2 = a1[8];
  *((_DWORD *)a1 + 18) = -1;
  *((_DWORD *)a1 + 19) = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", v2);
  GreReleaseSemaphoreInternal(a1[8]);
}
