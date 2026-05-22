/*
 * XREFs of ?AllocatePeer@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x180015F40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ISMBamos_AutoBamos::BamoConnection::AllocatePeer(
        ISMBamos_AutoBamos::BamoConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer **a2)
{
  _DWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x48uLL);
  *(_QWORD *)v4 = &MPCManagerBamo_AutoBamos::BamoPeer::`vftable';
  v4[4] = 1;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  v4[12] = 0;
  *((_BYTE *)v4 + 52) = 0;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::`vftable';
  *a2 = (struct ISMBamos_AutoBamos::BamoPeer *)v4;
  return 0LL;
}
