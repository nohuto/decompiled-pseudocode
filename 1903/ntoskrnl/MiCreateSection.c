/*
 * XREFs of MiCreateSection @ 0x1405D6FB0
 * Callers:
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     MmCreateSectionEx @ 0x14068AD18 (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x1406CF8E8 (MmCreateCacheManagerSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405D71D0 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x1405D74C0 (MiFinishCreateSection.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 *     MiLogSectionObjectEvent @ 0x14088A950 (MiLogSectionObjectEvent.c)
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
  int v17; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  unsigned __int64 v20; // rax
  char v21; // r8
  __int64 v22; // rbx
  void *v23; // rsi
  __int64 v24; // rcx
  int v26; // ebx
  __int64 v27; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v28[26]; // [rsp+80h] [rbp-F8h] BYREF

  v17 = 0;
  memset(v28, 0, 0xC8uLL);
  SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( SectionPacket >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v28[0]) |= v17;
      if ( !v28[5] && !v28[6] )
        break;
      ImageOrDataSection = MiCreateImageOrDataSection((__int64)v28);
      SectionPacket = ImageOrDataSection;
      if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
        goto LABEL_5;
      if ( v28[22] )
        PsDereferencePartition(v28[22]);
      v26 = LODWORD(v28[0]) >> 25;
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
      v17 = (v26 & 1) << 25;
      if ( SectionPacket < 0 )
        goto LABEL_12;
    }
    SectionPacket = MiCreatePagingFileMap(v28);
LABEL_5:
    if ( SectionPacket >= 0 )
    {
      SectionPacket = MiFinishCreateSection(v28);
      if ( SectionPacket >= 0 )
      {
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v28[8] + 24LL), -1LL, -1LL);
        v21 = v28[0];
        v22 = v28[8];
        v23 = (void *)v28[18];
        if ( ((v28[0] & 9) == 0 && (*(_DWORD *)(v28[8] + 56LL) & 0x8000) != 0 || *(_QWORD *)(v28[18] + 48LL) > v20)
          && (v27 = *(_QWORD *)(v28[18] + 48LL),
              v24 = v28[18],
              *(_QWORD *)(v28[18] + 48LL) = v20,
              SectionPacket = MmExtendSection(v24, &v27, v21 & 1),
              SectionPacket < 0) )
        {
          ObfDereferenceObject(v23);
        }
        else
        {
          *a1 = v23;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v22 + 64) )
            MiLogSectionObjectEvent(v23, 1LL);
        }
      }
    }
  }
LABEL_12:
  if ( v28[22] )
    PsDereferencePartition(v28[22]);
  return (unsigned int)SectionPacket;
}
