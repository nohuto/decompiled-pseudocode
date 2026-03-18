/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x140193A04
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140297870 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x140774CF4 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140464154;
    *(_DWORD *)(a1 + 4) = cbOutput;
    *(_BYTE *)(a1 + 1) = dword_140464198 == 1;
    v1 = dword_1404641A0;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
