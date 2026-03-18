/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C01662B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0012950 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00486E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0165F50 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v3; // rdi
  int v4; // ebx
  struct _ERESOURCE *v5; // rbx
  unsigned int v6; // edx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  CompositionObject *v9; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v10; // [rsp+58h] [rbp+20h]

  KeEnterCriticalRegion();
  v9 = 0LL;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v3 = (PERESOURCE *)DefaultConnection;
  v10 = DefaultConnection;
  if ( DefaultConnection )
  {
    v5 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v4 = DCompositionCreateSynchronizationObject(&v9);
    if ( v4 >= 0 )
    {
      Handle = 0LL;
      v4 = CompositionObject::OpenDwmHandle(v9, &Handle);
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
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v3, v6);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
