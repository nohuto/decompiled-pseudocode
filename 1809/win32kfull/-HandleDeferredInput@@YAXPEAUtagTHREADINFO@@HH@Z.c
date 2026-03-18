/*
 * XREFs of ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z @ 0x1C00030D8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     _SetInputServiceState @ 0x1C0120870 (_SetInputServiceState.c)
 * Callees:
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C010F9B8 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 */

void __fastcall HandleDeferredInput(struct tagTHREADINFO *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 *i; // rbx
  int v8; // ecx
  __int64 v9; // rdx
  KeyboardInputTelemetry *v10; // rcx
  __int64 *j; // rbx
  int v12; // ecx
  __int64 v13; // rax

  v3 = *((_QWORD *)a1 + 54);
  for ( i = *(__int64 **)(v3 + 24); i; i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 25);
    if ( __CFSHR__(v8, 17) || (v8 & 0x20000) != 0 )
    {
      v9 = i[13];
      if ( (struct tagTHREADINFO *)v9 == a1 )
      {
        if ( __CFSHR__(*((_DWORD *)i + 25), 17) )
        {
          *(_DWORD *)(v9 + 1208) &= ~0x10000000u;
          v8 = *((_DWORD *)i + 25);
        }
        v10 = (KeyboardInputTelemetry *)(v8 & 0xFFFCFFFF);
        LODWORD(v10) = (unsigned int)v10 | 0x40000;
        *((_DWORD *)i + 25) = (_DWORD)v10;
        ++*(_DWORD *)(v3 + 40);
        KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
          v10,
          *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
          ((*((_DWORD *)i + 6) - 257) & 0xFFFFFFFB) == 0);
        if ( a2 )
        {
          if ( i == *(__int64 **)(v3 + 80) )
            *(_QWORD *)(v3 + 80) = 0LL;
          DelQEntry(v3 + 24, i, 1LL);
        }
        else
        {
          *((_DWORD *)i + 25) |= 0x100000u;
          WakeSomeone(v3, a1, *((unsigned int *)i + 6), i);
        }
        for ( j = *(__int64 **)(v3 + 24); j; j = (__int64 *)*j )
        {
          v12 = *((_DWORD *)j + 25);
          if ( __CFSHR__(v12, 18) && !a3 && (struct tagTHREADINFO *)j[13] == a1 )
            break;
          if ( (v12 & 0x80000) != 0 || __CFSHR__(*((_DWORD *)j + 25), 18) )
          {
            v13 = j[13];
            if ( (struct tagTHREADINFO *)v13 == a1 || *((_DWORD *)j + 24) == 4 )
            {
              *(_DWORD *)(v13 + 1208) &= ~0x10000000u;
              *((_DWORD *)j + 25) &= 0xFFF5FFFF;
              ++*(_DWORD *)(v3 + 40);
              *((_DWORD *)j + 25) |= 0x100000u;
              WakeSomeone(v3, a1, *((unsigned int *)j + 6), j);
            }
          }
        }
        return;
      }
    }
  }
}
