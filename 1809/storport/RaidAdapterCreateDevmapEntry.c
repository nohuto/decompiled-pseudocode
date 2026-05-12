/*
 * XREFs of RaidAdapterCreateDevmapEntry @ 0x1C001C738
 * Callers:
 *     RaidAdapterRegisterDeviceInterface @ 0x1C001C34C (RaidAdapterRegisterDeviceInterface.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     PortMapOpenKey @ 0x1C001C60C (PortMapOpenKey.c)
 *     PortMapBuildAdapterEntry @ 0x1C001C83C (PortMapBuildAdapterEntry.c)
 *     PortMapBuildBusEntry @ 0x1C001CCA8 (PortMapBuildBusEntry.c)
 */

__int64 __fastcall RaidAdapterCreateDevmapEntry(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r9d
  unsigned int v4; // r14d
  unsigned __int8 v5; // cl
  int v7; // [rsp+20h] [rbp-38h]
  void *v8; // [rsp+30h] [rbp-28h]
  __int64 v9[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE v11; // [rsp+70h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  v11 = (HANDLE)-1LL;
  v2 = 0;
  if ( PortMapOpenKey(&v11) >= 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)v9);
    if ( (int)PortMapBuildAdapterEntry(
                (int)v11,
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(a1 + 696),
                v3,
                v7,
                (__int64)v9,
                v8,
                (__int64)&Handle) >= 0 )
    {
      v4 = *(unsigned __int8 *)(a1 + 392);
      if ( *(_BYTE *)(a1 + 392) )
      {
        do
        {
          if ( v2 >= 0xFF )
            break;
          v5 = (unsigned __int8)v2 >= 8u ? -1 : *(_BYTE *)((unsigned __int8)v2 + a1 + 393);
          PortMapBuildBusEntry(Handle, v2, v5, a1 + 8 * (v2 + 278LL));
          ++v2;
        }
        while ( v2 < v4 );
      }
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  if ( v11 != (HANDLE)-1LL )
    ZwClose(v11);
  return 0LL;
}
