/*
 * XREFs of VidSchControlVSyncDevice @ 0x1C007C340
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateDevice @ 0x1C007AA40 (VidSchTerminateDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007B00C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     VidSchControlVSyncAdapter @ 0x1C007C410 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v7; // r15
  struct _ERESOURCE *v8; // r14
  __int64 v9; // r8
  __int64 v11; // rax

  v3 = 0;
  v4 = (int)a2;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (struct _ERESOURCE *)(a1 + 968);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 968), 1u);
    if ( !a3 )
    {
      if ( (_DWORD)v4 != 4 )
        --*(_DWORD *)(a1 + 4 * v4 + 1076);
      --*(_DWORD *)(a1 + 1072);
    }
    if ( !*(_DWORD *)(a1 + 1072) )
    {
      LOBYTE(v9) = a3;
      v3 = VidSchControlVSyncAdapter(v7, 0LL, v9);
    }
    if ( a3 && v3 >= 0 )
    {
      ++*(_DWORD *)(a1 + 1072);
      if ( (_DWORD)v4 != 4 )
        ++*(_DWORD *)(a1 + 4 * v4 + 1076);
    }
    ExReleaseResourceLite(v8);
    return (unsigned int)v3;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
    return 0LL;
  }
}
