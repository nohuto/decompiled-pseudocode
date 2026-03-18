/*
 * XREFs of NtGdiGetPerBandInfo @ 0x1C012BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C012BF70 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetPerBandInfo(HDC a1, ULONG64 a2)
{
  unsigned int PerBandInfo; // r8d
  _BYTE *v5; // rdx
  _PERBANDINFO v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_PERBANDINFO *)a2;
  }
  PerBandInfo = GreGetPerBandInfo(a1, &v6);
  if ( PerBandInfo - 1 <= 0xFFFFFFFD )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[19] = v5[19];
    *(_PERBANDINFO *)a2 = v6;
  }
  return PerBandInfo;
}
