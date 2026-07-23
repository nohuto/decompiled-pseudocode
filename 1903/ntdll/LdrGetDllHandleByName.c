/*
 * XREFs of LdrGetDllHandleByName @ 0x180077240
 * Callers:
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByName(PUNICODE_STRING BaseDllName, PUNICODE_STRING FullDllName, PVOID *DllHandle)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rdi
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180022698(BaseDllName, FullDllName, 0LL, (__int64)BaseAddress, &v8);
  if ( v4 >= 0 )
  {
    if ( v8 < 7 )
    {
      v4 = -1073741515;
      v5 = BaseAddress[0];
    }
    else
    {
      v5 = BaseAddress[0];
      v4 = sub_18002228C((__int64)BaseAddress[0]);
      if ( v4 >= 0 )
        *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
    }
    sub_18001B678((char *)v5);
  }
  return v4;
}
