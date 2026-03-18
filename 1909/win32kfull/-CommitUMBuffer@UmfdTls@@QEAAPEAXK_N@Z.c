/*
 * XREFs of ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0120C88
 * Callers:
 *     ?CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00F6E10 (-CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C01201A0 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C01203B0 (-CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0120440 (-CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C01204B0 (-CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0120530 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C01207F0 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0120950 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1C0120C40 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@III.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0149320 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D4250 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D4360 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D44D0 (-CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D4530 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D4590 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D4610 (-CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C011E1C0 (-AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02D4714 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer(UmfdUMBuffer **this, __int64 a2, char a3)
{
  ULONG_PTR v4; // rsi
  UmfdUMBuffer *v5; // rbx
  void *v6; // rdi
  unsigned int v8; // r9d
  char v9; // al
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v5 = *this;
  if ( (unsigned int)a2 > *((_DWORD *)*this + 9) )
  {
    if ( UmfdUMBuffer::AllocTemporaryBuffer(*this, a2) )
    {
      v6 = (void *)*((_QWORD *)v5 + 1);
      goto LABEL_6;
    }
    goto LABEL_19;
  }
  if ( *((_QWORD *)v5 + 1) )
  {
    BaseAddress = (PVOID)*((_QWORD *)v5 + 1);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    *((_QWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 4) = 0;
  }
  if ( (unsigned int)v4 <= *((_DWORD *)v5 + 8) )
    goto LABEL_5;
  if ( !UmfdUMBuffer::AlignSizeTo(v4, a2, &v11) )
    goto LABEL_19;
  if ( v11 < v8 || v11 < (unsigned int)v4 || v11 > *((_DWORD *)v5 + 9) )
  {
    v9 = 0;
  }
  else
  {
    RegionSize = v11;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 3, 0LL, &RegionSize, 0x1000u, 4u) < 0
      || RegionSize < v4 )
    {
      goto LABEL_19;
    }
    if ( RegionSize > 0xFFFFFFFF )
    {
      *((_DWORD *)v5 + 8) = -1;
      goto LABEL_19;
    }
    *((_DWORD *)v5 + 8) = RegionSize;
    v9 = 1;
  }
  if ( !v9 )
  {
LABEL_19:
    v6 = 0LL;
    goto LABEL_6;
  }
LABEL_5:
  v6 = (void *)*((_QWORD *)v5 + 3);
LABEL_6:
  *(_QWORD *)v5 = v6;
  if ( v6 && a3 )
    memset(v6, 0, v4);
  return v6;
}
