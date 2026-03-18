/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C01660C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0012950 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0167E40 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1)
{
  int v1; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v4; // rdi
  struct _ERESOURCE *v5; // rbx
  unsigned int v6; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v10; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1) )
  {
    v9 = 0;
    RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
    v1 = RtlCapabilityCheck(0LL, &DestinationString, &v9);
    if ( v1 < 0 || !v9 )
      v1 = -1073741790;
  }
  KeEnterCriticalRegion();
  if ( v1 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v4 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v5 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v1 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v10);
      if ( v1 >= 0 )
        *((_BYTE *)v10 + 33) = 1;
      ExReleaseResourceLite(v4[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v4, v6);
    }
    else
    {
      v1 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
