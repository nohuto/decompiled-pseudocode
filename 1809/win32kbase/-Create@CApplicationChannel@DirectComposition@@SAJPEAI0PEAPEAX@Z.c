/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005BB90
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C005BA70 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00104D4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0012950 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0059904 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C005BCA8 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BCE4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C005C960 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  DirectComposition::CApplicationChannel *v7; // rax
  unsigned int v8; // edx
  unsigned int *v9; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v11; // rax
  struct DirectComposition::CProcessData *v12; // rsi
  struct _ERESOURCE *v13; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v7 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x320uLL, 0x63614344u);
    if ( v7 )
      v9 = (unsigned int *)DirectComposition::CApplicationChannel::CApplicationChannel(v7, DefaultConnection, 1, *a2);
    else
      v9 = 0LL;
    if ( v9 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v9,
                   a2,
                   a3);
      if ( inserted < 0 )
        goto LABEL_16;
      v11 = DirectComposition::CProcessData::Current();
      v12 = v11;
      if ( v11 )
      {
        v13 = (struct _ERESOURCE *)*((_QWORD *)v11 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v13, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(_QWORD *)v12,
                     v9[7],
                     v9);
        ExReleaseResourceLite(*((PERESOURCE *)v12 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_16:
        DirectComposition::CChannel::Release((DirectComposition::CChannel *)v9);
      else
        *a1 = v9[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection, v8);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
