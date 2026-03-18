/*
 * XREFs of MiMapChildLargePageVads @ 0x14089AFA8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1400731FC (MiIsVadLargePrivate.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiCopyLargeVad @ 0x140899158 (MiCopyLargeVad.c)
 */

__int64 __fastcall MiMapChildLargePageVads(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  _QWORD *i; // rbx
  _QWORD **v6; // rax
  __int64 v7; // r10
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r10
  unsigned __int64 Address; // rax
  __int64 v12; // r10
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
  {
    v4 = (_QWORD *)BugCheckParameter1[2].Affinity.Bitmap[8];
    i = 0LL;
    while ( v4 )
    {
      i = v4;
      v4 = (_QWORD *)*v4;
    }
    while ( i )
    {
      v6 = (_QWORD **)i[1];
      v7 = (__int64)i;
      v8 = i;
      if ( v6 )
      {
        v9 = *v6;
        for ( i = (_QWORD *)i[1]; v9; v9 = (_QWORD *)*v9 )
          i = v9;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v8 )
            break;
          v8 = i;
        }
      }
      if ( MiIsVadLargePrivate(v7) )
      {
        Address = MiLocateAddress((*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12);
        result = MiCopyLargeVad(BugCheckParameter1, Address, v12);
        if ( (int)result < 0 )
          return result;
        if ( !--v2 )
          break;
      }
    }
  }
  return 0LL;
}
