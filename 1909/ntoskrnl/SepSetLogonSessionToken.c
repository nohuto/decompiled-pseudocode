/*
 * XREFs of SepSetLogonSessionToken @ 0x140620EF0
 * Callers:
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SepStopReferencingLogonSession @ 0x140623860 (SepStopReferencingLogonSession.c)
 */

__int64 __fastcall SepSetLogonSessionToken(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rdi
  PVOID v4; // rcx
  _DWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int128 v10; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  result = *(_QWORD *)(a1 + 216);
  v5[1] = 0;
  v9 = 0;
  if ( !*(_QWORD *)(result + 48) )
  {
    result = *(unsigned int *)(a1 + 200);
    if ( (result & 0x10) == 0 && (result & 8) == 0 )
    {
      Object = 0LL;
      v6 = 0LL;
      v8 = 0;
      v7 = 0LL;
      v5[0] = 48;
      v10 = 0LL;
      result = SepDuplicateToken(a1, (int)v5, 0, 1, 0, 0, 0, (char **)&Object);
      if ( (int)result >= 0 )
      {
        v3 = Object;
        if ( (int)SepStopReferencingLogonSession(Object) < 0 )
        {
          v4 = v3;
          return ObfDereferenceObject(v4);
        }
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 48LL),
                   (signed __int64)v3,
                   0LL);
        if ( result )
        {
          v4 = Object;
          return ObfDereferenceObject(v4);
        }
      }
    }
  }
  return result;
}
