/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C019FE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01A1B94 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2)
{
  int v2; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v10 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
    v2 = RtlCapabilityCheck(0LL, &DestinationString, &v10);
    if ( v2 < 0 || !v10 )
      v2 = -1073741790;
  }
  KeEnterCriticalRegion();
  if ( v2 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v6 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v6, 1u);
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v11);
      if ( v2 >= 0 )
        *((_BYTE *)v11 + 33) = 1;
      ExReleaseResourceLite(v5[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5, v7);
    }
    else
    {
      v2 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
