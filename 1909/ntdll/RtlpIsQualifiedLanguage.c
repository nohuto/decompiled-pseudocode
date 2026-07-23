/*
 * XREFs of RtlpIsQualifiedLanguage @ 0x18005A9C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateTraverseNodes @ 0x18005A950 (RtlpCreateTraverseNodes.c)
 *     RtlpFreeTraverseNodes @ 0x18005AA9C (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x18005AAD8 (RtlpTraverseParents.c)
 */

__int64 __fastcall RtlpIsQualifiedLanguage(__int64 a1, __int16 *a2, char a3)
{
  int v5; // esi
  char *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  bool v9; // zf
  __int16 v10; // ax
  char *v12; // rcx
  __int64 v13; // r9
  __int16 *v14; // r10
  __int16 v15; // r8
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  v5 = a1;
  v6 = 0LL;
  if ( a1 && a2 )
  {
    v7 = RtlpCreateTraverseNodes(&BaseAddress);
    v6 = (char *)BaseAddress;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (unsigned __int8)RtlpTraverseParents((_DWORD)a2, (_DWORD)BaseAddress, v5, 0, 0, 42) == 0;
      v10 = 0;
      if ( v9 )
        v8 = -1073741823;
      do
      {
        if ( v10 && *(_DWORD *)&v6[8 * v10 + 4] && v10 > 0 )
        {
          v12 = v6 + 2;
          v13 = (unsigned __int16)v10;
          v14 = (__int16 *)&v6[8 * v10 + 2];
          do
          {
            if ( *(_DWORD *)(v12 + 2) )
            {
              if ( *((_WORD *)v12 - 1) )
              {
                v15 = *(_WORD *)&v6[8 * v10];
                if ( v15 )
                {
                  if ( *((_WORD *)v12 - 1) == v15 )
                    v8 = -1073741823;
                }
              }
              if ( *(__int16 *)v12 > 0 && *v14 > 0 && *(_WORD *)v12 == *v14 )
                v8 = -1073741823;
            }
            v12 += 8;
            --v13;
          }
          while ( v13 );
        }
        ++v10;
      }
      while ( v10 < 42 );
      if ( a3 == 1 && *a2 < 0 )
        v8 = -1073741823;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v6 )
    RtlpFreeTraverseNodes(v6);
  return v8;
}
