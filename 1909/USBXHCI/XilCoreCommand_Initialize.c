/*
 * XREFs of XilCoreCommand_Initialize @ 0x1C0047450
 * Callers:
 *     Command_Initialize @ 0x1C000A1EC (Command_Initialize.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     XilRegister_WriteUlong64 @ 0x1C0020E44 (XilRegister_WriteUlong64.c)
 */

__int64 __fastcall XilCoreCommand_Initialize(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 1;
  memset(*(void **)(*(_QWORD *)(a1 + 16) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL));
  *((_QWORD *)&v3 + 1) = 0x180200000000LL;
  *(_QWORD *)&v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 32)) = v3;
  return XilRegister_WriteUlong64(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 88LL),
           *(_DWORD **)(a1 + 8),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) ^ ((unsigned __int8)*(_DWORD *)(a1 + 44) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL)) & 1);
}
