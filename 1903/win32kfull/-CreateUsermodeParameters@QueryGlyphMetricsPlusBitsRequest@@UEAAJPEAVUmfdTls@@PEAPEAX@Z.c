/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0166190
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1C007C030 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@III.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C007C170 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C01486B8 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall QueryGlyphMetricsPlusBitsRequest::CreateUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  char *v11; // rcx
  unsigned int Size; // [rsp+40h] [rbp-48h] BYREF
  unsigned int Size_4; // [rsp+44h] [rbp-44h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h]
  unsigned int v16; // [rsp+90h] [rbp+8h] BYREF
  void **v17; // [rsp+A0h] [rbp+18h]
  _QWORD *v18; // [rsp+A8h] [rbp+20h] BYREF

  v17 = a3;
  v15 = *(_QWORD *)(*((_QWORD *)this + 7) + 72LL);
  v5 = 0LL;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x50u,
          &v16,
          0x40u,
          &Size_4,
          *((_DWORD *)this + 20),
          (unsigned int *)&v18,
          v15 != 0 ? 0x14 : 0,
          &Size) )
    return 3221225495LL;
  v6 = (unsigned int)v18;
  v7 = Size;
  if ( (unsigned int)v18 + Size < (unsigned int)v18 )
    return 3221225495LL;
  v8 = Size_4;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, &v18, 0x30u, v16, Size_4, (_DWORD)v18 + Size);
  v9 = v18;
  if ( !v18 )
    return 3221225495LL;
  v10 = v16;
  *((_QWORD *)this + 13) = v18 + 6;
  v11 = (char *)v9 + v10 + 48;
  *((_QWORD *)this + 14) = v11;
  *((_QWORD *)this + 15) = &v11[v8];
  *((_QWORD *)this + 16) = &v11[v8 + v6];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 7), *((struct _FONTOBJ **)this + 13));
  *(_DWORD *)(*((_QWORD *)this + 13) + 64LL) = *(_DWORD *)(*((_QWORD *)this + 7) + 64LL);
  if ( v15 )
  {
    memmove(*((void **)this + 16), *(const void **)(*((_QWORD *)this + 7) + 72LL), v7);
    v5 = *((_QWORD *)this + 16);
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  *(_QWORD *)(*((_QWORD *)this + 13) + 72LL) = v5;
  v9[2] = *((_QWORD *)this + 13);
  *v9 = *((_QWORD *)this + 5);
  *((_DWORD *)v9 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v9 + 3) = *((_DWORD *)this + 13);
  v9[3] = *((_QWORD *)this + 14);
  v9[4] = *((_QWORD *)this + 15);
  *((_DWORD *)v9 + 10) = *((_DWORD *)this + 20);
  *v17 = v9;
  return 0LL;
}
