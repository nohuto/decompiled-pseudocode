/*
 * XREFs of XilCoreCommand_FreeResources @ 0x1C0041B8C
 * Callers:
 *     XilCommand_FreeResources @ 0x1C0009F94 (XilCommand_FreeResources.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     XilRegister_WriteUlong64 @ 0x1C001D494 (XilRegister_WriteUlong64.c)
 */

void __fastcall XilCoreCommand_FreeResources(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  XilRegister_WriteUlong64(*(_QWORD *)(v2 + 88), *(_DWORD **)(a1 + 8), 0LL);
  v3 = *(_DWORD **)(a1 + 16);
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
