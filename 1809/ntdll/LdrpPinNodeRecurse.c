/*
 * XREFs of LdrpPinNodeRecurse @ 0x18004B598
 * Callers:
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 *     LdrpPinNodeRecurse @ 0x18004B598 (LdrpPinNodeRecurse.c)
 * Callees:
 *     LdrpPinNodeRecurse @ 0x18004B598 (LdrpPinNodeRecurse.c)
 */

void __fastcall LdrpPinNodeRecurse(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  if ( *((_DWORD *)a1 + 6) != -1 )
  {
    v1 = *a1;
    if ( (*(_BYTE *)(*a1 - 56) & 0x20) == 0 )
    {
      *((_DWORD *)a1 + 6) = -1;
      *(_WORD *)(v1 - 52) = -1;
      v2 = (_QWORD *)a1[5];
      if ( v2 )
      {
        v3 = (_QWORD *)a1[5];
        do
        {
          v3 = (_QWORD *)*v3;
          LdrpPinNodeRecurse(v3[1]);
        }
        while ( v3 != v2 );
      }
    }
  }
}
