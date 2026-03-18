/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C0143050
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0005D50 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0142B80 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  __int64 v2; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v4; // rdi
  int v5; // ebx
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  CompositionObject *v10; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v11; // [rsp+58h] [rbp+20h]

  KeEnterCriticalRegion();
  v10 = 0LL;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v2);
  v4 = (PERESOURCE *)DefaultConnection;
  v11 = DefaultConnection;
  if ( DefaultConnection )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    v5 = DCompositionCreateSynchronizationObject(&v10);
    if ( v5 >= 0 )
    {
      Handle = 0LL;
      v5 = CompositionObject::OpenDwmHandle(v10, &Handle);
      if ( v5 >= 0 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_QWORD *)MmUserProbeAddress;
        *a1 = Handle;
      }
    }
  }
  else
  {
    v5 = -1073741790;
  }
  if ( v4 )
  {
    ExReleaseResourceLite(v4[1]);
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v4, v7);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
