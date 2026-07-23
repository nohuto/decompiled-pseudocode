/*
 * XREFs of KiInitIptState @ 0x14029492C
 * Callers:
 *     KiRestoreThreadIptState @ 0x140294AE0 (KiRestoreThreadIptState.c)
 * Callees:
 *     <none>
 */

__int64 KiInitIptState()
{
  int v0; // r9d
  unsigned int i; // r8d
  __int64 result; // rax

  __writemsr(0x570u, 0LL);
  if ( (KiIptMsrMask & 2) != 0 )
    __writemsr(0x560u, 0LL);
  if ( (KiIptMsrMask & 4) != 0 )
    __writemsr(0x561u, 0LL);
  __writemsr(0x571u, 0LL);
  if ( (KiIptMsrMask & 0x10) != 0 )
    __writemsr(0x572u, 0LL);
  v0 = 0;
  for ( i = 1409; i < 0x589; i += 2 )
  {
    result = (unsigned int)(v0 + 5);
    if ( !_bittest((const signed __int32 *)&KiIptMsrMask, result) )
      break;
    result = 0LL;
    __writemsr(i - 1, 0LL);
    __writemsr(i, 0LL);
    ++v0;
  }
  return result;
}
