/*
 * XREFs of WindowHasShadow @ 0x1C001A824
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C001A6E0 (NtUserSetLayeredWindowAttributes.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(__int64 a1)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    return FindShadow((struct tagWND *)a1) != 0LL;
  return v1;
}
