/*
 * XREFs of EditionQueryInertiaWorker @ 0x1C02071F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C0113848 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01E645C (DCEHitTestWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int *v8; // rcx
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  v5 = *(unsigned int *)(a2 + 184);
  v6 = v4;
  if ( (v5 & 4) != 0 )
  {
    v11 = a1;
    if ( !(unsigned int)DCEHitTestWindow((int *)(a2 + 40), a2 + 56, (int *)&v11, 0LL) )
      return 0LL;
  }
  if ( (!v6 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v6)) && (*(_DWORD *)(a2 + 184) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  if ( !v6 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v6) )
    return 1LL;
  v7 = *(_QWORD *)(v6 + 216);
  v8 = (int *)(*(_QWORD *)(v6 + 40) + 88LL);
  v11 = a1;
  if ( v7 ? DCEHitTestWindow(v8, v7, (int *)&v11, 0LL) : DCEPtInRect(v8, a1) )
    return 1LL;
  else
    return 0LL;
}
