/*
 * XREFs of ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1C009CE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMInvokeShutdown @ 0x1C009B0E8 (ndisMInvokeShutdown.c)
 */

void __fastcall ndisBugcheckHandler(_DWORD *Buffer, ULONG Length)
{
  int v2; // eax

  if ( Length == 5840 )
  {
    v2 = Buffer[967];
    Buffer[31] |= 0x1000000u;
    if ( (unsigned int)(v2 - 2) > 2 )
    {
      if ( *((_BYTE *)Buffer + 32) >= 6u )
        ndisMInvokeShutdown((__int64)Buffer, 1);
      else
        (*((void (__fastcall **)(_QWORD))Buffer + 258))(*((_QWORD *)Buffer + 257));
    }
  }
}
