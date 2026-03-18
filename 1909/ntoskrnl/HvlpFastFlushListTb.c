/*
 * XREFs of HvlpFastFlushListTb @ 0x14028D9D0
 * Callers:
 *     HvlpFlushRangeListTb @ 0x14028DBE8 (HvlpFlushRangeListTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CE3E0 (HvcallpExtendedFastHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14028D7A8 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x14028F084 (VslFastFlushSecureRangeList.c)
 */

void __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, char a3, unsigned int a4, unsigned __int64 *a5, int a6)
{
  __int64 v8; // xmm1_8
  ULONG v9; // eax
  __int64 v10; // [rsp+20h] [rbp-98h]
  __int128 v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+40h] [rbp-78h]
  __int64 v13[11]; // [rsp+48h] [rbp-70h] BYREF

  if ( a3 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v11 = *a1;
    v12 = v8;
    v9 = (HvlpFlags >> 13) & 1;
    if ( !v9 )
      *((_QWORD *)&v11 + 1) |= 8uLL;
    HvlpCopyFlushVaList(a4, a5, v9, v13);
    HIDWORD(v10) = a6 & 0xFFF;
    LODWORD(v10) = 65539;
    HvcallpExtendedFastHypercall(v10, (__int64)&v11, (unsigned int)(8 * a6 + 24));
  }
  if ( a2 )
    VslFastFlushSecureRangeList(a5, a4);
}
