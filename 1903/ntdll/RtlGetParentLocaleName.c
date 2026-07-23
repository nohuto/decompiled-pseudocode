/*
 * XREFs of RtlGetParentLocaleName @ 0x18000EFE0
 * Callers:
 *     sub_1800094BC @ 0x1800094BC (sub_1800094BC.c)
 *     sub_180013008 @ 0x180013008 (sub_180013008.c)
 *     sub_18007E254 @ 0x18007E254 (sub_18007E254.c)
 * Callees:
 *     sub_180016C58 @ 0x180016C58 (sub_180016C58.c)
 *     sub_180016CBC @ 0x180016CBC (sub_180016CBC.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 *     sub_1800F6C80 @ 0x1800F6C80 (sub_1800F6C80.c)
 *     sub_1800F6FF4 @ 0x1800F6FF4 (sub_1800F6FF4.c)
 */

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  ULONG v8; // ebp
  int v9; // eax
  ULONG v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  NTSTATUS result; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)sub_1800F6FF4(LocaleName)
    || (v17 = Flags >> 1,
        LOBYTE(v16) = AllocateDestinationString,
        LOBYTE(v17) = (Flags & 2) != 0,
        result = sub_1800F6C80(LocaleName, v17, v16, ParentLocaleName),
        result < 0) )
  {
    if ( !qword_180166368 && !(unsigned __int8)sub_18007B398() )
      return -1073741823;
    v9 = sub_180016E30(LocaleName);
    v10 = Flags & 2;
    if ( v9 < 0 )
      goto LABEL_27;
    if ( !v10 )
    {
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_180166368 + 48)
                     * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 24) + 8LL * v9 + 2)
                     + *(_QWORD *)(qword_180166368 + 8)
                     + 24LL) & 1) == 0 )
        return -1073741585;
    }
    _mm_lfence();
    v11 = *(unsigned __int16 *)(qword_180166368 + 48)
        * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 24) + 8LL * v9 + 2);
    v12 = *(_QWORD *)(qword_180166368 + 32) + 2LL;
    if ( v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(qword_180166368 + 8) + 184) )
    {
      if ( (int)sub_180016C58(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(qword_180166368 + 8) + 184), 85LL, &v20) < 0 )
        return -1073741823;
      LOBYTE(v13) = AllocateDestinationString;
      return sub_180016CBC(v13, v14, v20, ParentLocaleName);
    }
    else
    {
LABEL_27:
      if ( !v8 || !(unsigned __int8)sub_1800F6FF4(LocaleName) )
        return -1073741585;
      LOBYTE(v19) = AllocateDestinationString;
      LOBYTE(v18) = v10 != 0;
      return sub_1800F6C80(LocaleName, v18, v19, ParentLocaleName);
    }
  }
  return result;
}
