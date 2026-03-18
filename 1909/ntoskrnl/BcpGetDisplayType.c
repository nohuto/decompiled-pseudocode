/*
 * XREFs of BcpGetDisplayType @ 0x140349998
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x140349B34 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140349C04 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140349DF0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 18LL; i < 90; i += 18LL )
  {
    if ( *a1 < dword_140429ED0[i + 16] )
      break;
    if ( a1[1] < dword_140429ED0[i + 17] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
