/*
 * XREFs of FsRtlIsDaxVolume @ 0x14026E9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlIsDaxVolume(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool result; // al

  v1 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 48) & 0x10000000) != 0 )
        return 1;
    }
  }
  return result;
}
