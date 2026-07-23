/*
 * XREFs of AlpcRegisterCompletionList @ 0x180084F10
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x18009D830 (ZwAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcRegisterCompletionList(
        HANDLE PortHandle,
        PALPC_COMPLETION_LIST_HEADER Buffer,
        ULONG Size,
        ULONG ConcurrencyCount,
        ULONG AttributeFlags)
{
  NTSTATUS result; // eax
  PALPC_COMPLETION_LIST_HEADER v7; // [rsp+20h] [rbp-28h] BYREF
  ULONG v8; // [rsp+28h] [rbp-20h]
  ULONG v9; // [rsp+2Ch] [rbp-1Ch]
  ULONG v10; // [rsp+30h] [rbp-18h]

  v9 = ConcurrencyCount;
  v7 = Buffer;
  v8 = Size;
  v10 = AttributeFlags;
  result = ZwAlpcSetInformation(PortHandle, AlpcRegisterCompletionListInformation, &v7, 0x18u);
  if ( result >= 0 )
  {
    *((_QWORD *)&Buffer->PostCount + 8) = 0LL;
    return 0;
  }
  return result;
}
