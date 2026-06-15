/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCGainStage@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000CA90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[13] = -1073741823;
  *(_QWORD *)a1 = &CGainStage::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
