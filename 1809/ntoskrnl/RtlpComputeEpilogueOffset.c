/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1401AEF4C
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x1403228C0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x14013914C (KeExitRetpoline.c)
 *     sub_140349570 @ 0x140349570 (sub_140349570.c)
 *     KeGuardDispatchICall @ 0x14034AB40 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  unsigned int i; // eax
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v4 ^= a3;
  v7 = *((int *)v4 + 49);
  if ( a3 && (_DWORD)v7 )
  {
    a4 = &a2[v7 - 1];
    while ( 1 )
    {
      *a4-- ^= a3;
      v9 = __ROR8__(a3, v7);
      a3 = v9 & 0x3F;
      _bittestandcomplement64((signed __int64 *)&v9, a3);
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v4 + 605) & 0x100000) != 0 )
    KeExitRetpoline(v7, a2, a3, a4);
  else
    _mm_lfence();
  sub_140349570(a1, v4, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v4[33])(v4 + 240, 1LL);
}
