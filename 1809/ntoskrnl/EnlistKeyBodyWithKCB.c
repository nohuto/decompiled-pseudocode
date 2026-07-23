/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x1407341F4
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnlistKeyBodyWithKCB(_QWORD *a1, char a2)
{
  _QWORD *v2; // r10
  unsigned int v3; // r11d
  unsigned int v4; // ebx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v2 = a1 + 4;
  v3 = 0;
  a1[5] = a1 + 4;
  v4 = 0;
  a1[4] = a1 + 4;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * v4 + 128), (signed __int64)a1, 0LL) )
  {
    if ( ++v4 >= 4 )
    {
      if ( (a2 & 2) != 0 )
      {
        v5 = a1[1];
        v6 = *(_QWORD **)(v5 + 120);
        v7 = v5 + 112;
        if ( *v6 != v7 )
          __fastfail(3u);
        *v2 = v7;
        v2[1] = v6;
        *v6 = v2;
        *(_QWORD *)(v7 + 8) = v2;
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
