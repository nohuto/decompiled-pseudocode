/*
 * XREFs of IoIrpHasFsTrackOffsetExtensionType @ 0x140118D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IoIrpHasFsTrackOffsetExtensionType(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 200);
  v2 = 0;
  if ( *(char *)(a1 + 71) >= 0 && v1 )
    return (*(_BYTE *)(v1 + 2) & 0x20) != 0;
  return v2;
}
