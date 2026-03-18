/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C0142D70
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C014596C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1)
{
  int v1; // ebx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v11; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( !UserIsCurrentProcessDwm() )
  {
    v10 = 0;
    RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
    v1 = RtlCapabilityCheck(0LL, &DestinationString, &v10);
    if ( v1 < 0 || !v10 )
      v1 = -1073741790;
  }
  KeEnterCriticalRegion();
  if ( v1 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v6 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v6, 1u);
      v1 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v11);
      if ( v1 >= 0 )
        *((_BYTE *)v11 + 33) = 1;
      ExReleaseResourceLite(v5[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5, v7);
    }
    else
    {
      v1 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
