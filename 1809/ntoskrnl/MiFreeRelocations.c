/*
 * XREFs of MiFreeRelocations @ 0x1406FE4A0
 * Callers:
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1402C3EB0 (MiDeleteDirectMapFixupPfn.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 *     MiFreeImageLoadConfig @ 0x1406FE53C (MiFreeImageLoadConfig.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  unsigned int v3; // edx
  bool v5; // zf
  _QWORD *v6; // rcx
  _QWORD *LeafPfnBuddy; // rbx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  unsigned int v10[3]; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+2Ch] [rbp-Ch]
  bool v12; // [rsp+2Dh] [rbp-Bh]

  if ( a2 )
  {
    v3 = a1[23];
    v10[0] = a1[22];
    v10[1] = (unsigned __int16)v3;
    v5 = (a1[14] & 0x10000000) == 0;
    v10[2] = (v3 >> 22) & 3;
    if ( v5 )
    {
      v11 = 0;
    }
    else
    {
      v11 = 1;
      v12 = (v3 & 0x40000) != 0;
    }
    if ( a2[5] )
    {
      MiReturnImageBase(v10);
      a1[22] = -1;
    }
    MiFreeImageLoadConfig(a2 + 9);
    v6 = (_QWORD *)a2[2];
    if ( v6 )
    {
      do
      {
        v8 = (_QWORD *)*v6;
        ExFreePoolWithTag(v6, 0);
        v6 = v8;
      }
      while ( v8 );
    }
    LeafPfnBuddy = (_QWORD *)a2[12];
    while ( LeafPfnBuddy )
    {
      LeafPfnBuddy = (_QWORD *)MiGetLeafPfnBuddy(LeafPfnBuddy);
      MiDeleteDirectMapFixupPfn(v9);
    }
    ExFreePoolWithTag(a2, 0);
  }
}
