/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C0069EB0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002EE60 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0069580 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C0069FD0 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // si
  int v8; // eax
  char v9; // bp
  __int64 v10; // rdx
  char v11; // bp
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = (unsigned int)a2;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
LABEL_18:
    WdLogEvent5_WdAssertion(v13);
    return 0;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = v2;
    goto LABEL_18;
  }
  v4 = (struct _ERESOURCE *)(a1 + 1008);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1008), 1u);
  v7 = 0;
  if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 40) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v14 + 24) = v2;
    WdLogEvent5_WdAssertion(v14);
  }
  else
  {
    ExAcquireResourceExclusiveLite(v4, 1u);
    v8 = *(_DWORD *)(a1 + 1752);
    if ( _bittest(&v8, v2) )
      v9 = 1;
    else
      v9 = 0;
    ExReleaseResourceLite(v4);
    if ( v9 )
    {
      ExAcquireResourceExclusiveLite(v4, 1u);
      v11 = *(_BYTE *)(a1 + 1756);
      if ( v11 )
      {
        if ( *(_DWORD *)(a1 + 1732) )
        {
          LOBYTE(v10) = 1;
          VidSchiControlVSync(a1, v10, 65539LL);
        }
        else
        {
          *(_BYTE *)(a1 + 1756) = 0;
        }
      }
      v7 = *(_BYTE *)(a1 + 1728);
      if ( v7 )
      {
        if ( !v11 )
          _InterlockedExchange((volatile __int32 *)(a1 + 1796), 1);
      }
      ExReleaseResourceLite(v4);
    }
  }
  ExReleaseResourceLite(v4);
  return v7;
}
