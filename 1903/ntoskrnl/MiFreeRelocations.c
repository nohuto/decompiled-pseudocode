/*
 * XREFs of MiFreeRelocations @ 0x14072A130
 * Callers:
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1402DDF68 (MiDeleteDirectMapFixupPfn.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnImageBase @ 0x140607A44 (MiReturnImageBase.c)
 *     MiFreeImageLoadConfig @ 0x14072A1C0 (MiFreeImageLoadConfig.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *LeafPfnBuddy; // rbx
  _QWORD *v7; // rbx
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v4 = (unsigned int)a1[22];
    if ( v4 != 0xFFFFFFFFLL )
    {
      v8 = a1[23];
      v11 = v4;
      LODWORD(v12) = (unsigned __int16)v8;
      v9 = (a1[14] & 0x10000000) == 0;
      LODWORD(v13) = (v8 >> 20) & 3;
      if ( v9 )
      {
        BYTE4(v12) = 0;
      }
      else
      {
        BYTE4(v12) = 1;
        BYTE5(v12) = BYTE2(v8) & 1;
      }
      MiReturnImageBase((__int64)&v11);
      a1[22] = -1;
    }
    MiFreeImageLoadConfig(a2 + 9);
    v5 = (_QWORD *)a2[2];
    if ( v5 )
    {
      do
      {
        v7 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v7;
      }
      while ( v7 );
    }
    LeafPfnBuddy = (_QWORD *)a2[13];
    while ( LeafPfnBuddy )
    {
      LeafPfnBuddy = (_QWORD *)MiGetLeafPfnBuddy(LeafPfnBuddy);
      MiDeleteDirectMapFixupPfn(v10);
    }
    ExFreePoolWithTag(a2, 0);
  }
}
