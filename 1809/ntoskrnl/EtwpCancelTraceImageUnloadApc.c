/*
 * XREFs of EtwpCancelTraceImageUnloadApc @ 0x1403109E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwpTraceImageUnload @ 0x140089314 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCancelTraceImageUnloadApc(PVOID P)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned __int16 *v4; // rcx
  _QWORD v5[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = *((_QWORD *)P + 11);
  v5[0] = 0LL;
  v5[1] = 0LL;
  if ( FltMgrCallbacks )
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64 *))(FltMgrCallbacks + 24))(v2, 512LL, v5, &v6);
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    v4 = (unsigned __int16 *)(*((_QWORD *)P + 11) + 88LL);
  else
    v4 = (unsigned __int16 *)v5;
  EtwpTraceImageUnload(
    v4,
    *((_QWORD *)P + 12),
    *((void **)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    0,
    0);
  if ( v6 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
