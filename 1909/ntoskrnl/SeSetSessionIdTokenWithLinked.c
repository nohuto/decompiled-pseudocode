/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x1408DA020
 * Callers:
 *     <none>
 * Callees:
 *     SepReferenceTokenByHandle @ 0x140036B70 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140079A94 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x14061D264 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x1406E6D14 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2)
{
  void *v3; // rsi
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v6; // rdi
  PERESOURCE v7; // rdx
  void *v8; // r14
  _QWORD *v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-18h] BYREF
  POWNER_ENTRY OwnerTable; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  char v14; // [rsp+90h] [rbp+40h] BYREF
  PERESOURCE *v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v10 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v4 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, (PACCESS_TOKEN *)&v15, &v14, &v13);
  if ( v4 < 0 )
  {
    v6 = v15;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = v15;
    ExAcquireResourceSharedLite(v15[6], 1u);
    if ( *((_BYTE *)v6 + 204) )
    {
      v4 = -1073741525;
      goto LABEL_13;
    }
    v4 = SepReferenceLogonSessionSilo(
           &v6[27]->SystemResourcesList.Blink,
           *(_QWORD *)&v6[27][1].OwnerEntry.0,
           (__int64 *)&v10);
    if ( v4 >= 0 )
    {
      v7 = v6[27];
      v8 = (void *)v10[6];
      OwnerTable = v7->OwnerTable;
      if ( OwnerTable )
      {
        v4 = SepReferenceLogonSessionSilo(&OwnerTable, *(_QWORD *)&v7[1].OwnerEntry.0, (__int64 *)&v11);
        if ( v4 < 0 )
          goto LABEL_13;
        v3 = (void *)v11[6];
      }
      if ( !v8 || (v4 = SeSetSessionIdToken(v8, a2), v4 >= 0) )
      {
        if ( v3 )
          v4 = SeSetSessionIdToken(v3, a2);
      }
    }
  }
LABEL_13:
  if ( v6 )
  {
    ExReleaseResourceLite(v6[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 )
    SepDeReferenceLogonSessionDirect(v10);
  if ( v11 )
    SepDeReferenceLogonSessionDirect(v11);
  return (unsigned int)v4;
}
