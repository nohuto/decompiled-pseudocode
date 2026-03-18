/*
 * XREFs of CmpDoReDoCreateKey @ 0x140840A1C
 * Callers:
 *     CmpDoReDoRecord @ 0x140840B98 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpDoReOpenTransKey @ 0x140840E5C (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoCreateKey(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int16 v5; // r8
  __int64 v6; // rdx
  __int64 result; // rax
  HANDLE v8; // rbx
  int v9; // eax
  NTSTATUS v10; // edi
  __int64 v11; // [rsp+40h] [rbp-9h] BYREF
  __int64 v12; // [rsp+48h] [rbp-1h]
  _WORD v13[2]; // [rsp+50h] [rbp+7h] BYREF
  int v14; // [rsp+54h] [rbp+Bh]
  __int64 v15; // [rsp+58h] [rbp+Fh]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v14 = 0;
  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_WORD *)(a2 + 32);
  v11 = 0LL;
  LOWORD(v6) = v5;
  v12 = 0LL;
  v13[1] = *(_WORD *)(a2 + 34);
  v15 = v4;
  do
  {
    v6 = (unsigned __int16)(v6 - 2);
    v13[0] = v6;
  }
  while ( *(_WORD *)(v4 + 2 * ((unsigned __int64)(unsigned int)v6 >> 1)) != 92 );
  v12 = v6 + v4 + 2;
  LOWORD(v11) = v5 - v6 - 2;
  WORD1(v11) = v11;
  result = CmpDoReOpenTransKey(a1, v13, 131078LL, &Handle);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v8 = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    ObjectAttributes.SecurityDescriptor = *(PVOID *)(a2 + 56);
    v9 = *(_DWORD *)(a2 + 48) - 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 4928;
    v10 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 9 - (v9 != 0), &Disposition);
    ZwClose(v8);
    if ( v10 >= 0 )
      ZwClose(KeyHandle);
    return (unsigned int)v10;
  }
  return result;
}
