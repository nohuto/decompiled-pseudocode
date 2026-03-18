/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x140762EF8
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnlistKeyBodyWithKCB(_QWORD *a1, char a2)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 **v6; // rcx

  v2 = a1 + 4;
  v3 = 0;
  a1[5] = a1 + 4;
  v4 = 0;
  a1[4] = a1 + 4;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * v4 + 136), (signed __int64)a1, 0LL) )
  {
    if ( ++v4 >= 4 )
    {
      if ( (a2 & 2) != 0 )
      {
        v5 = a1[1] + 120LL;
        v6 = *(__int64 ***)(a1[1] + 128LL);
        if ( *v6 != (__int64 *)v5 )
          __fastfail(3u);
        *v2 = v5;
        v2[1] = (__int64)v6;
        *v6 = v2;
        *(_QWORD *)(v5 + 8) = v2;
      }
      else
      {
        return (unsigned int)-1073741267;
      }
      return v3;
    }
  }
  return v3;
}
