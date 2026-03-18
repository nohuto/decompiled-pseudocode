/*
 * XREFs of ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00051D8
 * Callers:
 *     _SetInputServiceState @ 0x1C0100A00 (_SetInputServiceState.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01AB8F4 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00BD66C (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 */

void __fastcall HandleDeferredInput(struct tagTHREADINFO *a1, int a2)
{
  __int64 v2; // rdi
  __int64 *i; // rbx
  __int64 v6; // rax
  __int64 *j; // rbx
  int v8; // eax

  v2 = *((_QWORD *)a1 + 53);
  for ( i = *(__int64 **)(v2 + 24); i; i = (__int64 *)*i )
  {
    if ( (*((_DWORD *)i + 25) & 0x10000) != 0 )
    {
      v6 = i[13];
      if ( (struct tagTHREADINFO *)v6 == a1 )
      {
        *(_DWORD *)(v6 + 1200) &= ~0x10000000u;
        *((_DWORD *)i + 25) = *((_DWORD *)i + 25) & 0xFFFCFFFF | 0x20000;
        ++*(_DWORD *)(v2 + 40);
        KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
          a1,
          *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
          ((*((_DWORD *)i + 6) - 257) & 0xFFFFFFFB) == 0);
        if ( a2 )
        {
          if ( i == *(__int64 **)(v2 + 80) )
            *(_QWORD *)(v2 + 80) = 0LL;
          DelQEntry(v2 + 24, i, 1LL);
        }
        else
        {
          WakeSomeone(v2, a1, *((unsigned int *)i + 6), i);
        }
        for ( j = *(__int64 **)(v2 + 24); j; j = (__int64 *)*j )
        {
          v8 = *((_DWORD *)j + 25);
          if ( (v8 & 0x40000) != 0 && ((struct tagTHREADINFO *)j[13] == a1 || *((_DWORD *)j + 24) == 4) )
          {
            *((_DWORD *)j + 25) = v8 & 0xFFFBFFFF;
            ++*(_DWORD *)(v2 + 40);
            WakeSomeone(v2, a1, *((unsigned int *)j + 6), j);
          }
        }
        return;
      }
    }
  }
}
