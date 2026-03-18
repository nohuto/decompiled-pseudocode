/*
 * XREFs of NtDesktopCaptureBits @ 0x1C01A2E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000F54C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000F638 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A31F0 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 */

__int64 __fastcall NtDesktopCaptureBits(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        PVOID Handle,
        HANDLE a8)
{
  PVOID v8; // rbx
  PVOID v9; // rdi
  DirectComposition::CConnection *DefaultConnection; // rsi
  unsigned int v14; // ebx
  NTSTATUS v15; // eax
  unsigned int v16; // edx
  PVOID v17; // rbp
  NTSTATUS v18; // eax
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF

  v8 = Handle;
  v9 = 0LL;
  if ( Handle && a8 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( DefaultConnection )
    {
      v15 = ObReferenceObjectByHandle(v8, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
      v17 = Handle;
      v14 = v15;
      if ( v15 >= 0 )
      {
        v18 = ObReferenceObjectByHandle(a8, 6u, MmSectionObjectType, 1, &Object, 0LL);
        v9 = Object;
        v14 = v18;
        if ( v18 >= 0 )
          v14 = DirectComposition::CConnection::DesktopCaptureBits(
                  DefaultConnection,
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v17,
                  Object);
      }
      DirectComposition::CConnection::Release(DefaultConnection, v16);
      if ( v17 )
        ObfDereferenceObject(v17);
      if ( v9 )
        ObfDereferenceObject(v9);
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v14;
}
