/*
 * XREFs of EtwpTraceImageUnloadApc @ 0x14012B860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwpTraceImageUnload @ 0x140089314 (EtwpTraceImageUnload.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceImageUnloadApc(PVOID P)
{
  int v2; // eax
  unsigned __int16 *v3; // rcx
  _QWORD v4[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( FltMgrCallbacks )
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, __int64 *))(FltMgrCallbacks + 24))(
           *((_QWORD *)P + 11),
           1024LL,
           v4,
           &v5);
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    v3 = (unsigned __int16 *)(*((_QWORD *)P + 11) + 88LL);
  else
    v3 = (unsigned __int16 *)v4;
  EtwpTraceImageUnload(
    v3,
    *((_QWORD *)P + 12),
    *((void **)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    0,
    0);
  if ( v5 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
