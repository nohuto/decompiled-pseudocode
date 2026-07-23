/*
 * XREFs of sub_1800D4A28 @ 0x1800D4A28
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_1800D4A28(unsigned __int16 *a1, _DWORD *a2)
{
  int v3; // r14d
  __int16 v4; // dx
  int v5; // r8d
  WCHAR *v6; // rax
  NTSTATUS v8; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+20h] BYREF
  ULONG ReturnedLength; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v4 = *a1;
  v5 = *a1;
  v6 = (WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
  if ( *a1 )
  {
    do
    {
      if ( *(v6 - 1) == 92 )
        break;
      --v6;
      v5 -= 2;
    }
    while ( v5 );
  }
  ValueName.Buffer = v6;
  ValueName.Length = v4 - v5;
  ValueName.MaximumLength = v4 - v5 + 2;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)sub_180073150(&DestinationString.Length, 11LL, 0, &KeyHandle) < 0 )
  {
    if ( (int)sub_180073150(&DestinationString.Length, 9LL, 0, &KeyHandle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  v8 = LdrQueryImageFileKeyOption(KeyHandle, ValueName.Buffer, 4u, a2, 4u, &ReturnedLength);
  if ( v8 >= 0 )
  {
    if ( v3 || !*a2 )
      goto LABEL_14;
    Data = *a2 - 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  }
  else
  {
    *a2 = 1;
  }
  v8 = 0;
LABEL_14:
  ZwClose(KeyHandle);
  return (unsigned int)v8;
}
