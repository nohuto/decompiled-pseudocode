/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C00CB470
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000381C (VidSchiSetFlipDevice.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C00326B0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  struct _ERESOURCE *v6; // rdi
  int v7; // eax
  unsigned __int8 v8; // bl

  v2 = (unsigned int)a2;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
LABEL_3:
    WdLogEvent5_WdAssertion(v4);
    return 0;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = v2;
    goto LABEL_3;
  }
  v6 = (struct _ERESOURCE *)(a1 + 1008);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1008), 1u);
  v7 = *(_DWORD *)(a1 + 1752);
  v8 = _bittest(&v7, v2);
  ExReleaseResourceLite(v6);
  return v8;
}
