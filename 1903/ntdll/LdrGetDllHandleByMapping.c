/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18002DD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_18002DC10 @ 0x18002DC10 (sub_18002DC10.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( v4 >= 0 )
  {
    v4 = sub_18002DC10(BaseAddress, OutHeaders, (volatile signed __int32 **)&BaseAddressa, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = BaseAddressa;
        v4 = sub_18002228C((__int64)BaseAddressa);
        if ( v4 >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
      }
      else
      {
        v4 = -1073741515;
        v5 = BaseAddressa;
      }
      sub_18001B678((char *)v5);
    }
  }
  return v4;
}
