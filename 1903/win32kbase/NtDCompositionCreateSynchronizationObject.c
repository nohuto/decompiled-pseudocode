/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C01A22F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000F54C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000F638 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003EDB0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C01A1F60 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v3; // rdi
  int v4; // ebx
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  CompositionObject *v11; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v12; // [rsp+58h] [rbp+20h]

  KeEnterCriticalRegion();
  v11 = 0LL;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v3 = (PERESOURCE *)DefaultConnection;
  v12 = DefaultConnection;
  if ( DefaultConnection )
  {
    v5 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v4 = DCompositionCreateSynchronizationObject(&v11);
    if ( v4 >= 0 )
    {
      Handle = 0LL;
      v4 = CompositionObject::OpenDwmHandle(v11, &Handle, v6, v7);
      if ( v4 >= 0 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_QWORD *)MmUserProbeAddress;
        *a1 = Handle;
      }
    }
  }
  else
  {
    v4 = -1073741790;
  }
  if ( v3 )
  {
    ExReleaseResourceLite(v3[1]);
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v3, v8);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
