/*
 * XREFs of ?AllocateStub@BamoAsyncHRESULTPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoAsyncHRESULTStub@@@Z @ 0x1801239E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoAsyncHRESULTPrincipal::AllocateStub(
        BamoAsyncHRESULTPrincipal *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        struct BamoAsyncHRESULTStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoAsyncHRESULTStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoAsyncHRESULTStub::`vftable'{for `IAsyncHRESULTStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  *((_DWORD *)v4 + 6) = 1;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoAsyncResult_string_StubImpl::`vftable';
  result = 0LL;
  *a3 = (struct BamoAsyncHRESULTStub *)v4;
  return result;
}
