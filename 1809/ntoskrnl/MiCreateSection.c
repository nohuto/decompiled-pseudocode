/*
 * XREFs of MiCreateSection @ 0x1405DEAC0
 * Callers:
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     MmCreateCacheManagerSection @ 0x1405DE6DC (MmCreateCacheManagerSection.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     MmCreateSectionEx @ 0x14061C34C (MmCreateSectionEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiInitializeCreateSectionPacket @ 0x1405DEDB0 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x1405DF0B0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiLogSectionObjectEvent @ 0x14084FAC8 (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiCreateSection(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12,
        __int64 a13)
{
  int v16; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  void *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v27; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v28[26]; // [rsp+80h] [rbp-F8h] BYREF

  v16 = 0;
  memset(v28, 0, 0xC8uLL);
  SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( SectionPacket >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v28[0]) |= v16;
      if ( !v28[5] && !v28[6] )
        break;
      ImageOrDataSection = MiCreateImageOrDataSection(v28);
      SectionPacket = ImageOrDataSection;
      if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
        goto LABEL_11;
      if ( v28[22] )
        PsDereferencePartition(v28[22]);
      v19 = LODWORD(v28[0]) >> 23;
      memset(v28, 0, 0xC8uLL);
      SectionPacket = MiInitializeCreateSectionPacket(
                        (unsigned int)v28,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13);
      v16 = (v19 & 1) << 23;
      if ( SectionPacket < 0 )
        goto LABEL_21;
    }
    SectionPacket = MiCreatePagingFileMap(v28);
LABEL_11:
    if ( SectionPacket >= 0 )
    {
      SectionPacket = MiFinishCreateSection(v28);
      if ( SectionPacket >= 0 )
      {
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v28[8] + 24LL), -1LL, -1LL);
        v21 = v28[8];
        v22 = v20;
        v23 = (void *)v28[18];
        v24 = LODWORD(v28[0]);
        if ( ((*(_DWORD *)(v28[8] + 56LL) & 0x8000) == 0 || (v28[0] & 9) != 0) && *(_QWORD *)(v28[18] + 48LL) <= v20
          || (v25 = *(_QWORD *)(v28[18] + 48LL),
              *(_QWORD *)(v28[18] + 48LL) = v22,
              v27 = v25,
              SectionPacket = MmExtendSection(v23, &v27, v24 & 1),
              SectionPacket >= 0) )
        {
          *a1 = v23;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v21 + 64) )
            MiLogSectionObjectEvent(v23, 1LL, v24);
        }
        else
        {
          ObfDereferenceObject(v23);
        }
      }
    }
  }
LABEL_21:
  if ( v28[22] )
    PsDereferencePartition(v28[22]);
  return (unsigned int)SectionPacket;
}
