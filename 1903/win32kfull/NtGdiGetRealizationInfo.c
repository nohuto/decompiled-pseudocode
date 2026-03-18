/*
 * XREFs of NtGdiGetRealizationInfo @ 0x1C00675D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreGetRealizationInfo @ 0x1C0164FD8 (GreGetRealizationInfo.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, unsigned int *a2)
{
  unsigned int *v4; // rcx
  unsigned int RealizationInfo; // ebx
  unsigned int v6; // edi
  unsigned int Length[204]; // [rsp+20h] [rbp-348h] BYREF

  memset(Length, 0, 0x32CuLL);
  v4 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  Length[0] = *v4;
  if ( Length[0] != 16 && Length[0] != 812 && Length[0] != 24 )
    return 0LL;
  RealizationInfo = GreGetRealizationInfo(a1, (struct tagFONT_REALIZATION_INFO2 *)Length);
  if ( RealizationInfo )
  {
    v6 = Length[0];
    ProbeForWrite(a2, Length[0], 4u);
    memmove(a2, Length, v6);
  }
  return RealizationInfo;
}
