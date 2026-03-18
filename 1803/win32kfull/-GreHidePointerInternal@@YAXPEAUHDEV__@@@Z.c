/*
 * XREFs of ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C0007B54
 * Callers:
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00C546C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreHidePointerInternal(HDEV a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rsi
  int v5; // ebp
  HDEV v6; // rcx

  GreAcquireSemaphore(*((_QWORD *)a1 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)a1 + 7), 4LL);
  if ( ((_DWORD)a1[10] & 0x20000) != 0 )
  {
    v3 = *((_QWORD *)a1 + 224);
    v4 = *(_QWORD **)v3;
    v5 = *(_DWORD *)(v3 + 16);
    do
    {
      v6 = (HDEV)v4[6];
      if ( ((_DWORD)v6[530] & 0x2000) == 0 )
        vMovePointer(v6, -1, -1, dword_1C032AE68);
      v4 = (_QWORD *)*v4;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    vMovePointer(a1, -1, -1, dword_1C032AE68);
  }
  v2 = *((_QWORD *)a1 + 7);
  *((_DWORD *)a1 + 16) = -1;
  *((_DWORD *)a1 + 17) = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", v2);
  GreReleaseSemaphoreInternal(*((_QWORD *)a1 + 7));
}
