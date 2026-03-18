/*
 * XREFs of IoReportHalResourceUsage @ 0x1409F4A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x1406E96F0 (IopCreateRegistryKeyEx.c)
 *     HeadlessTerminalAddResources @ 0x1407520B4 (HeadlessTerminalAddResources.c)
 *     IopWriteResourceList @ 0x140754424 (IopWriteResourceList.c)
 */

__int64 __fastcall IoReportHalResourceUsage(UNICODE_STRING *a1, void *a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  int v8; // ebx
  int v9; // eax
  PVOID v10; // rdi
  ULONG v11; // ecx
  _DWORD *v12; // rax
  PVOID v13; // r14
  ULONG v14; // eax
  PVOID PoolWithTag; // rax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v20; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF

  v4 = a4;
  P = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v20.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Abstraction Layer");
  v8 = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&v20, L".Raw");
    v9 = HeadlessTerminalAddResources(a2, (unsigned int)v4, 0, &P, &v17);
    v10 = P;
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = v4;
      if ( P )
        v11 = v17;
      v12 = a2;
      if ( P )
        v12 = P;
      v8 = IopWriteResourceList(Handle, &DestinationString, a1, &v20, v12, v11);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v20, L".Translated");
        v8 = HeadlessTerminalAddResources(a3, (unsigned int)v4, 1, &P, &v17);
        if ( v8 >= 0 )
        {
          v13 = P;
          v14 = v4;
          if ( P )
          {
            v14 = v17;
            a3 = P;
          }
          v8 = IopWriteResourceList(Handle, &DestinationString, a1, &v20, a3, v14);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
        }
      }
    }
    ZwClose(Handle);
    if ( v8 < 0 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    else if ( v10 )
    {
      IopInitHalResources = v10;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
      IopInitHalResources = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, a2, v4);
      else
        return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
