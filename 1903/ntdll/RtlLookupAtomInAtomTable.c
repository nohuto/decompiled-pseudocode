/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x18005B540
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     RtlGetIntegerAtom @ 0x18005B7B0 (RtlGetIntegerAtom.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     sub_18005B814 @ 0x18005B814 (sub_18005B814.c)
 */

__int64 __fastcall RtlLookupAtomInAtomTable(__int64 a1, _WORD *a2, _WORD *a3)
{
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // r14
  __int16 v9; // ax
  _BYTE v11[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned __int8)sub_18005B7E8() )
  {
    if ( (unsigned __int8)RtlGetIntegerAtom(a2, &v12) )
    {
      v9 = v12;
      if ( (unsigned __int16)v12 < 0xC000u )
      {
        v7 = 0;
      }
      else
      {
        v9 = 0;
        LOWORD(v12) = 0;
        v7 = -1073741811;
      }
      if ( !a3 )
        goto LABEL_18;
    }
    else
    {
      if ( !*a2 )
      {
        v7 = -1073741773;
        goto LABEL_18;
      }
      v7 = sub_18005B680(a1, a2, v6, 0LL, 0LL, v11, &v12);
      if ( v7 < 0 )
        goto LABEL_18;
      v8 = v12;
      if ( !v12 )
      {
        v7 = -1073741772;
        goto LABEL_18;
      }
      if ( !sub_18005B814(a1, *(unsigned __int16 *)(v12 + 8)) )
      {
        v7 = -1073741816;
        goto LABEL_18;
      }
      v7 = 0;
      if ( !a3 )
      {
LABEL_18:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
        return (unsigned int)v7;
      }
      v9 = *(_WORD *)(v8 + 10);
    }
    *a3 = v9;
    goto LABEL_18;
  }
  return 3221225485LL;
}
